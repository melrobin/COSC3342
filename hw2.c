#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct frame
{
	char ip_addr[16];
	unsigned int source_port;
	unsigned int destination_port;
	char payload[64];
};
	
void send_data(struct frame *x)
{ 
        printf("IP Address: %s\n",x->ip_addr);
        printf("Source Port: %d\n",x->source_port);
        printf("Destination Port: %d\n",x->destination_port);
        printf("Payload: %s\n",x->payload);
}

int main(int argc, char *argv[])
{
	unsigned int sport,dport;
	struct frame a_frame;

	if (argc != 4)
	{
		printf("Incorrect number of parameters\n");
		exit(0);
	}
	sport=atoi(argv[2]);
	dport=atoi(argv[3]);
	if (sport>65535 || dport > 65535)
	{
		printf("Invalid port numbers\n");
		exit(0);
	}

	strcpy(a_frame.ip_addr,argv[1]);
	   //    char *strcpy(char *dest, const char *src);

	a_frame.source_port=sport;
	a_frame.destination_port=dport;
	strcpy(a_frame.payload,"some random sting that I wish crashed the system");
        send_data(&a_frame);
	
	return 0;
}

