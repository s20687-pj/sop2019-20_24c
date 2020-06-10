#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>

int main(){

    // tworzenie socketu
    int network_socket;
    network_socket = socket(AF_INET, SOCK_STREAM, 0);

    // okreslenie adresu dla socketu

    struct  sockaddr_in server_address;
    server_address.sin_family = AF_INET;
    server_address.sin_port = htons(9002);
    server_address.sin_addr.s_addr = INADDR_ANY;

    int connection_status = connect(network_socket, (struct sockaddr *) &server_address, sizeof(server_address));
    // sprawdzanie polaczenia
    if(connection_status == -1){
        printf("Wystapil blad polaczenia \n\n");
    }
    // odbieranie danych
    char server_response[256]; // buffor
    recv(network_socket, &server_response, sizeof(server_response), 0);

    // wydrukowanie danych
    printf("The server sent the data: %s\n", server_response);

    // zamkniecie socketu
    close(network_socket);
    
    return 0;
}