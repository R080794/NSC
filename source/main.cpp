
#include <iostream>
#include "config.h"
#include "server.h"
#include "client.h"

int main() {

    #ifdef Linux
    std::cout << "This is a Linux platform \n";
    #endif
    #ifdef Windows
    std::cout << "This is Windows platform \n";
    #endif
    #ifdef MacOs
    std::cout << "This is MacOS platform \n";
    #endif

    std::cout << "1.Select StartServer \n";
    std::cout << "2.Select StartClient \n";
    char n = std::getchar();
    
    switch(n)
    {
        case '1': 
        {
            StartServer();
        }
        case '2':
        {
            StartClient();
        }

    }
    return 0;
}