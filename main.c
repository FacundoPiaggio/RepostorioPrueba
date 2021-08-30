#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <scanner.h>


int main()
{

    char buffer[128];
    int i=0;
    char c;
    do
    {
        c = getchar();
        buffer[i] = c;
        i++;
    }while(c!='\n');

    buffer[i] = '\0';

    get_token(buffer);

    return 0;
}
