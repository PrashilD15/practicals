// Reader Process: fifo_reader.c
#include <stdio.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>

int main() {
    char *fifo_path = "/tmp/myfifo";
    char buf[100];
    printf("Reader: Opening FIFO...\n");
    int fd = open(fifo_path, O_RDONLY);
    read(fd, buf, sizeof(buf));
    printf("Reader: Received: %s\n", buf);
    close(fd);
    return 0;
}
