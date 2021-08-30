#include "scanner.h"

void get_token(char cadena[])
{
    int i=0;

    while(cadena[i] != '\0')
    {
        if(cadena[i]!= '\n' && cadena[i] != ',')
        {
            printf("Leyo un caracter: %c\n",cadena[i]);
        }
        if(cadena[i] == ',')
        {
            printf("Leyo un separador: %c\n",cadena[i]);
        }
        i++;
    }
    printf("Leyo fin de texto: ");

    return 0;
}
