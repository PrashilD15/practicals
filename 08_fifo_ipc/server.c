#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>

int main()
{
    puts("Server");
    char strMessage[5000];
    int fd = open("fifo6.txt", O_WRONLY);
    int fd2 = open("fifo7.txt", O_RDONLY);
    if (fd == -1)
    {
        perror("cannot open fifo6");
        return EXIT_FAILURE;
    }
    if (fd2 == -1)
    {
        perror("cannot open fifo7");
        return EXIT_FAILURE;
    }
    puts("FIFO OPEN");

    char stringBuffer[5000];
    memset(stringBuffer, 0, 5000);

    printf("\n\n\t\tEnter the Message to be passed (hitting ENTER without any string will terminate program): ");
    if (fgets(strMessage, 100, stdin) == NULL) return 0;
    char L = (char)strlen(strMessage);

    write(fd, &L, 1);
    write(fd, strMessage, strlen(strMessage));

    int len2;
    read(fd2, &len2, 1);
    read(fd2, stringBuffer, 5000);

    printf("\nServer Received: %s\n", stringBuffer);

    close(fd);
    close(fd2);
    return 0;
}
