#include <stdlib.h>
#include <stdio.h>

int parse_options(int argc, char *argv[])
{
    int i;
    if (argc == 1)
        return 1;

    for (i = 0; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    }
    return 0;

}

int main(int argc, char *argv[])
{
    if (parse_options(argc, argv))
        printf("Enter options\n");
}
