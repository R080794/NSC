
#include <iostream>
#include "server.h"
#include "client.h"

int main() {
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