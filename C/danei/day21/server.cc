#include<iostream>
using namespace std;
#include<sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h>
#include<unistd.h>
#include<fcntl.h>





int main(int argc,char* argv[])
{
	short port=12345;
	if(argc>1)
		port=atoi(argv[1]);

	int server_socket=socket(AF_INET,SOCK_STREAM,0);
	if(server_socket<0) return -1;

	sockaddr_in server_sockaddr_in;
	server_sockaddr_in.sin_family=AF_INET;
	server_sockaddr_in.sin_port=htons(port);
	server_sockaddr_in.s_addr=INADDR_ANY;
	int server_bind=bind(server_socket,(sockaddr*)&server_sockaddr_in,sizeof(server_sockaddr_in));

	if(server_bind<0)
		return -1;

	server_bind=listen(server_socket,20);

	if(server_bind<0)
		return -1;


	sockaddr_in client_sockaddr_in;

	for(;;;)
	{
		int client_socket=accept(server_socket,(sockaddr*)&client_sockaddr_in,sizeof(client_sockaddr_in));
		
	}



}
