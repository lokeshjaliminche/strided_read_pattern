#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <stdio.h>
#define STRIDE 204800
#define READ_SIZE 131072
#define READ_RQ 10

char file_name[]="./file";

int main()
{
        int file=0;
        int i;
        if((file=open(file_name, O_RDONLY)) < -1)
                return 1;

        int read_count;
        for (i = 0; i < READ_RQ; i++)
        {
            char buffer[READ_SIZE];
            int off = STRIDE * i;
            lseek(file, off ,SEEK_SET);
            read_count = read(file, buffer, READ_SIZE);
            sleep(10);
            printf("read_count = %d\n", read_count);
        }
        return 0;
}

