#include<iostream>
#include<winsock2.h>
#include<WS2tcpip.h>
#pragma comment(lib,"ws2_32.lib") //Winsock Library
#pragma once

using namespace std;
int conectionWinsock(int argc, char *argv[])
{
	WSADATA wsa;
	SOCKET s;
	struct sockaddr_in server;
	char *message, server_reply[2000];
	int recv_size;

	printf("\nInitialising Winsock...");
	if (WSAStartup(MAKEWORD(2, 2), &wsa) != 0)
	{
		cout << "Failed. Error Code : " << WSAGetLastError();
		return 1;
	}

	cout << "Initialised.\n";

	//Create a socket
	if ((s = socket(AF_INET, SOCK_STREAM, 0)) == INVALID_SOCKET)
	{
		cout << "Could not create socket : " << WSAGetLastError();
	}
	cout << "Socket created.\n";

	gethostbyname("gsainton.dyndns.org");
	server.sin_addr.s_addr = inet_addr("45.45.37.68");
	server.sin_family = AF_INET;
	server.sin_port = htons(8888);

	//Connect to remote server
	if (connect(s, (struct sockaddr *)&server, sizeof(server)) < 0)
	{
		puts("connect error");
		return 1;
	}

	puts("Connected");


	recv_size = recv(s, server_reply, 2000, 0);
	server_reply[recv_size] = '\0';


	while (server_reply != "end") {

		cout << server_reply << endl;
		recv_size = recv(s, server_reply, 2000, 0);
		server_reply[recv_size] = '\0';

	}

	closesocket(s);
	WSACleanup();

	return 0;
}