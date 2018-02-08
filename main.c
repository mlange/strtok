#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char *ptr;

    char *str = "value1,value2,value3";

    ptr = strtok(str, ",'\0'");

    while (ptr)
    {
	printf("PTR [%s]\n", ptr);

	ptr = strtok(NULL, ",");
    }

    exit(0);
}
