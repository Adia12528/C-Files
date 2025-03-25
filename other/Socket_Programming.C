#include <stdio.h>
#include <string.h>
#include <winsock2.h>   // For Windows socket functions
#pragma comment(lib, "ws2_32.lib") // Link with ws2_32.lib
int main() {
    WSADATA wsa;
    int sock;

    // Initialize Winsock
    if (WSAStartup(MAKEWORD(2, 2), &wsa) != 0) {
        printf("Failed to initialize Winsock. Error Code: %d\n", WSAGetLastError());
        return 1;
    }
    struct sockaddr_in server;
    char message[1000], server_reply[2000];
    
    // Create socket
    sock = socket(AF_INET, SOCK_STREAM, 0);
    if (sock == -1) {
        printf("Could not create socket\n");
        return 1;
    }
    printf("Socket created\n");
    
    server.sin_addr.s_addr = inet_addr("127.0.0.1");
    server.sin_family = AF_INET;
    server.sin_port = htons(8888);
    
    // Connect to remote server
    if (connect(sock, (struct sockaddr *)&server, sizeof(server)) < 0) {
        perror("connect failed");
        return 1;
    }
    printf("Connected to server\n");
    
    // Send data
    strcpy(message, "Hello, Server!");
    if (send(sock, message, strlen(message), 0) < 0) {
        printf("Send failed\n");
        return 1;
    }
    closesocket(sock);
    WSACleanup();
    // Receive a reply from the server
    if (recv(sock, server_reply, 2000, 0) < 0) {
        printf("recv failed\n");
        return 1;
    }
    printf("Server reply: %s\n", server_reply);
    closesocket(sock);
    return 0;
}
