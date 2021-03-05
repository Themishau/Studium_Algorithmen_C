#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Trennliniezeichnen.h"
#define TRENNLINIE 60

void Trennliniezeichnen(void)
{
    char trennzeichen = '*';
    for (int k=0; k<TRENNLINIE; k++)
    {
        printf("%c",trennzeichen);
    }
    printf("\n\n");
}

