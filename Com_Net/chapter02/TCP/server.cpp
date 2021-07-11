#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>
using namespace std;

#define BUF_SIZE 1024

void errorhandling(char *message);

int main(int argc, char *argv[]){

    int serv_socket;
    int clnt_socket;
    int id = 1, strlen;
    struct sockaddr_in serv_addr;
    struct sockaddr_in clnt_addr;
    socklen_t clnt_addr_size;

    char message[BUF_SIZE];

    // 检查传入参数数量是否正确
    if(argc != 2){
        cout << "Usage : " << argv[0] << " <port> "<<endl;
        exit(0);
    }

    // 套接字创建
    serv_socket = socket(PF_INET, SOCK_STREAM, 0);  
    //                   协议族信息，传输类型，通信协议
    // PF_INET：IPv4 
    //      AF表示ADDRESS FAMILY，PF表示PROTOCOL FAMILY 协议族，这两个宏定义是一样的
    // SOCK_STREAM：数据流，多用于TCP
    // 0：根据前两个参数使用默认的协议

    if(serv_socket == -1){
        errorhandling("socket() error!");
    }

    // memset：对较大的结构体或数组进行清零操作
    // 在这里则是将serv_addr结构体中数据全部初始化为0
    memset(&serv_addr, 0, sizeof(serv_addr));

    // 设置网络地址信息
    serv_addr.sin_family = AF_INET;
    // 自动获取计算机的IP地址
    serv_addr.sin_addr.s_addr = htonl(INADDR_ANY);  
    // 从命令行获取端口号
    serv_addr.sin_port = htons(atoi(argv[1]));  
    // atoi (表示ascii to integer)是把字符串转换成整型数的一个函数

    // 向套接字分配网络地址
    if(bind(serv_socket, (struct sockaddr*)&serv_addr, sizeof(serv_addr)) == -1)
    {
        errorhandling("bind() error");
    }
    // 对来自客户端的连接请求进行监听
    if(listen(serv_socket, 5) == -1)
    // 第二个参数表示连接请求队列长度
    {
        errorhandling("listen() error");
    }

    clnt_addr_size = sizeof(clnt_addr);

    //处理五次连接请求
    for (int i = 0; i < 5; ++i) 
    {
        // 为了按序受理请求，给客户端做相应的回馈，
        // 连接到发起请求的客户端，此时就需要再次创建另一个套接字
        clnt_socket = accept(serv_socket, (sockaddr*)&clnt_addr, &clnt_addr_size);
        // 第二个参数：保存发起连接的客户端的地址信息
        // 第三个参数： 保存该结构体的长度
        if(clnt_socket == -1)
        {
            errorhandling("accept error");
        }
        else
        {
            cout << "Conneted client " << id << endl;
        }

        while((strlen=read(clnt_socket, message, BUF_SIZE)) != 0)
        {
            printf("Message from client : %s", message);
            write(clnt_socket, message, strlen);
            memset(message, 0, sizeof(message));
        }
        id++;
        close(clnt_socket);
    }
    
    close(serv_socket);
    return 0;
}

void errorhandling(char *message){
    fputs(message, stderr);
    fputc('\n', stderr);
    exit(1);
}