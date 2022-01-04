#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <netdb.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <arpa/inet.h>
#include <iostream>
 
int StartClient()
{
    int CreateSocket = 0,n = 0;
    char dataReceived[1024];
    struct sockaddr_in ipOfServer;
 
    memset(dataReceived, '0' ,sizeof(dataReceived));
 
    if((CreateSocket = socket(AF_INET, SOCK_STREAM, 0))< 0)
    {
        std::cout <<"Socket not created \n";
        return 1;
    }
 
    ipOfServer.sin_family = AF_INET;
    ipOfServer.sin_port = htons(2017);
    ipOfServer.sin_addr.s_addr = inet_addr("127.0.0.1");
 
    if(connect(CreateSocket, (struct sockaddr *)&ipOfServer, sizeof(ipOfServer))<0)
    {
        std::cout <<"Connection failed due to port and ip problems\n";
        return 1;
    }
 
    while((n = read(CreateSocket, dataReceived, sizeof(dataReceived)-1)) > 0)
    {
        dataReceived[n] = 0;
        if(fputs(dataReceived, stdout) == EOF)
        {
            std::cout << "\nStandard output error";
        }
 
        std::cout <<"\n";
    }
 
    if( n < 0)
    {
        std::cout <<"Standard input error \n";
    }
 
    return 0;
}