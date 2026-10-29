#include <iostream>
#include <sys/socket.h>
#include <unistd.h>

int main() {
    int server_fd = socket(AF_INET, SOCK_STREAM, 0);

    if (server_fd == -1) {
        std::cerr << "Socket creation failed\n";
        return 1;
    }

    std::cout << "Socket created!\n";

    close(server_fd);
    return 0;
}