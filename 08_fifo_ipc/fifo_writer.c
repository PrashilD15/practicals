// Writer Process: fifo_writer.c
#include <stdio.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>

int main() {
    char *fifo_path = "/tmp/myfifo";
    mkfifo(fifo_path, 0666);
    printf("Writer: Opening FIFO...\n");
    int fd = open(fifo_path, O_WRONLY);
    write(fd, "Hello from FIFO Writer!", 24);
    close(fd);
    return 0;
}
