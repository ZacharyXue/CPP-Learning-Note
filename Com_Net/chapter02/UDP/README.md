代码来源：[Linux C/C++ UDP Socket通信实例](https://www.cnblogs.com/zkfopen/p/9382705.html)

具体流程上面文章中解释的很清晰：

> 服务器端的步骤如下：
> 1. socket：建立一个socket
> 2. bind：将这个socket绑定在某个端口上（AF_INET）
> 3. recvfrom：如果没有客户端发起请求，则会阻塞在这个函数里
> 4. close：通信完成后关闭socket
>
> 客户端的步骤如下：
> 1. socket：建立一个socket
> 2. sendto：向服务器的某个端口发起请求（AF_INET）
>3. close：通信完成后关闭socket