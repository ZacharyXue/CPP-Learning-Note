代码来源：[Socket-Program/first_example/](https://github.com/GQXING/Socket-Program/tree/master/first_example)，该代码的解释博客地址是[socket编程(C++)](https://www.cnblogs.com/helloworldcode/p/10610581.html)

这份代码基本上是用C语法写的，现在我也不清楚是 socket编程就是如此，还是仅仅是这位 coder 的个人习惯。

两段代码中有很多细节感觉现在也不是必须掌握，毕竟才刚刚开始学习计算机网络，对于网络编程也不熟悉，主要还是参考这段代码，对于整个过程有一个初步的认识。

## 服务器端

### 创建套接字

首先需要创建套接字：
```C++
serv_socket = socket(PF_INET, SOCK_STREAM, 0); 
```
创建套接字中需要规定使用的协议族信息，例如是IPv6还是IPv4；

其次是套接字的类型，这个需要根据使用的是TCP/IP协议（`SOCK_STREAM`）、UDP协议（`SOCK_DGRAM`）还是底层的IP、 ICMP协议（`SOCKET_RAW`）。

最后一个参数是选择通信协议，这里在规定了前两个参数后使用 `0` 即可以使用对应的默认通信协议。

在服务器端实际上创建了两个套接字。一个是开始便创建的套接字，后面用于监听客户端的连接请求；另一个是在受理客户端请求后创建另一个套接字用于通信，这个和刚刚在课本上的图片有些出入，不过和后面编程中的解释相同。

两个套接字在这里使用同一个端口。

### 分配网络地址

```C++
bind(serv_socket, (struct sockaddr*)&serv_addr, sizeof(serv_addr)) 
```
这里将刚刚创建的套接字绑定在指定地址上，其中涉及到的地址结构体如下：
```C++
/* Structure describing an Internet socket address.  */
struct sockaddr_in
  {
    __SOCKADDR_COMMON (sin_);
    in_port_t sin_port;			/* Port number.  */
    struct in_addr sin_addr;		/* Internet address.  */

    /* Pad to size of `struct sockaddr'.  */
    unsigned char sin_zero[sizeof (struct sockaddr) -
			   __SOCKADDR_COMMON_SIZE -
			   sizeof (in_port_t) -
			   sizeof (struct in_addr)];
  };
```
代码中的初始化步骤如下：
```C++
// 设置网络地址信息
serv_addr.sin_family = AF_INET;
// 自动获取计算机的IP地址
serv_addr.sin_addr.s_addr = htonl(INADDR_ANY);  
// 从命令行获取端口号
serv_addr.sin_port = htons(atoi(argv[1]));  
// atoi (表示ascii to integer)是把字符串转换成整型数的一个函数
```

这里要注意一个预处理的语法点：**# 和 ##**

在 sockaddr_in 的 `__SOCKADDR_COMMON (sin_)` 使用到 `define` 语句：

```C
#define	__SOCKADDR_COMMON(sa_prefix) \
  sa_family_t sa_prefix##family
```
其中 `\` 可以把定义延续到下一行。

`##` 被称为预处理器粘合剂，例如有`#define XNAME(n) x ## n`，则 `int XNAME(1) = 14;` 等价于 `int x1 = 14;`。这个在命名多个类似变量的时候十分有用，上面代码中也是这样的用法。

除此之外，还有一个类似的符号 `#`，其可以把记号转换成字符串。例如，如果x是一个宏形参，那么#x就是转换为字符串"x"的形参名。为方便理解，将 《C Primer Plus》中范例摘抄如下：
```C
#include <stdio.h>
#define PSQR(x) printf("The square of " #x "is %d.\n",((x)*(x)))

int main()
{
    int y = 5;

    PSQR(y);
    PSQR(2 + 4);
    
    return 0;
}
```
输出为：
```shell
The square of y is 25.
The square of 2 + 4 is 36.
```

### 等待连接请求

套接字初始化完成之后便可以进入等待连接请求的状态，此时调用 `listen()` 函数进行相应操作：

```C++
listen(serv_socket, 5)
```
其中第二个参数表示连接请求队列长度。

### 受理客户端请求

正如上面在[创建套接字](#创建套接字)中提到的，在接受到客户端请求后，还需要另外创建一个套接字(使用 `accept()`)，两个套接字使用的是同一个端口号。

```C++
clnt_socket = accept(serv_socket, (sockaddr*)&clnt_addr, &clnt_addr_size);
```
这里后面两个参数只需要申明不需要进行初始化。在传参数时使用地址值，函数内会进行赋值。

### 信息的接受发送

信息读入：
```C++
read(clnt_socket, message, BUF_SIZE)
```
信息发送：
```C++
write(clnt_socket, message, strlen);
```

### 关闭套接字

最后要对于套接字进行关闭：
```C++
close(clnt_socket);

close(serv_socket);
```

### 小结

大致流程可以表述为：

套接字建立(`socket`) --> 地址绑定（`bind`）--> 监听（`listen`）-->接收消息（`accept`）-->读/写（`read`,`write`）-->关闭套接字（`close`）

## 客户端

### 创建套接字

```C++
sock = socket(PF_INET, SOCK_STREAM, 0);
```

### 请求连接

```C++
connect(sock, (struct sockaddr*)&serv_addr, sizeof(serv_addr))
```
这里用到的 serv_addr 初始化如下：
```C++
// 将结构体 serv_addr 置为1
memset(&serv_addr, 0, sizeof(serv_addr));
serv_addr.sin_family = AF_INET;
// 因为是服务器端的地址和port，故都需要进行设置
serv_addr.sin_addr.s_addr = inet_addr(argv[1]);
serv_addr.sin_port = htons(atoi(argv[2]));
```

### 信息的接受发送

信息读入：
```C++
str_len = read(sock, message, BUF_SIZE - 1);
```
信息发送：
```C++
write(sock, message, strlen(message));
```

### 关闭套接字

最后要对于套接字进行关闭：
```C++
close(sock);
```

客户端和服务器不同的是不需要进行`bind`和`listen`，也不需要进行`listen`，而只需要`connect`，之后便可以`read`和`write`。