#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>

int main ()
{
    int newSocket = socket(AF_INET,SOCK_STREAM,0);

    if(newSocket < 0)
    {
        printf("socket not created");
    }
    else
    {
        printf("socket created\n");
    }

}