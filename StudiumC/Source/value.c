#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "value.h"
#include "typen.h"
#define TRENNLINIE 60

int checkifnumber(char zeichen)
{
    static char numbers[] = "0123456789";
    for (int j= 0; j < (strlen(numbers)); j++)
        {
            //printf("checke mit:: %c Laenge von numbers: %d \n",numbers[j], strlen(numbers));
            if(zeichen == numbers[j])
            {
            return 1;
            }
        }
    //printf("Keine Zahl xD bei check \n");
    return 0;
}

int value(char string[])
{
    int j=0;
    int i=0;
    char istzahl[sizeof(string)] ="";
    printf("Eingabe wird getestet: %s \n", string);
    //printf("Zeichen alles: %s Laenge ist: %d \n", string, strlen(string));
    while(string[i]!= '\n')
    {
    //printf("Zeichen wird gleich gecheckt: %c\n", string[i]);
    while (string[i]== ' ')
    {
        i++;
    }
    if (checkifnumber(string[i])!= 1) // isdigit(string[]) auch möglich
    {
        printf("Keine Zahl xD \n");
        return 0;
    }
    istzahl[j]=string[i];
    i++;
    j++;
    }
    int zahl = atoi(istzahl);
    printf("ist eine Zahl: %d \n", zahl);
    return zahl;
}
