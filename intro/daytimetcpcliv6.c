#include "unp.h"

int main(int argc, char *argv[])
{
	int sockfd, n;
	char recvline[MAXLINE + 1];
	struct sockaddr_in6 servaddr;

	if (argc != 2)
	{
		err_quit("useage: daytimetcpcliv6 <IPaddress>");
	}

	if ( (sockfd = socket(AF_INET6, SOCK_STREAM, 0)) < 0)
	{
		err_sys("socket error");
	}

	bzero(&servaddr, sizeof(servaddr));
	servaddr.sin6_family = AF_INET6;
	servaddr.sin6_port = htons(13);
	if (inet_pton(AF_INET6, argv[1], &servaddr.sin6_addr) <= 0)
	{
		err_quit("inet_pton error for %s", argv[1]);
	}

	if (connect(sockfd, (SA *) &servaddr, sizeof(servaddr)) < 0)
	{
		printf("connect error: %d\n", errno);
		exit(1);
	}

	while ( (n = read(sockfd, recvline, MAXLINE)) > 0) {
		recvline[n] = 0;
		if (fputs(recvline, stdout) == EOF)
			printf("fputs error\n");
	}
	if (n < 0)
		printf("read error\n");

	exit(0);
}
