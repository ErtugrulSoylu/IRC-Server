#include "Server.hpp"
     
int main(int argc , char **argv)  
{
    if (argc < 3)
    {
        std::cout << "Error: parameter" << std::endl;
        return (1);
    }

    if (std::stoi(argv[1]) < 1)
    {
        std::cout << "Error: port number cannot be negative or zero" << std::endl;
        return (1);
    }

    int port = atoi(argv[1]);
    std::string pass = argv[2];

    Server server(port, pass);
    server.binder();
    server.listener();

    return 0;  
}