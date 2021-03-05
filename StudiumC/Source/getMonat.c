#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "getMonat.h"
#define TRENNLINIE 60
char * getTag(const char* Datum) //const char* Datum
{
    //char Datum[] ="23.07.2019";
    char Tag[3]= "00";
    printf("Tag1: %c \n", Datum[0]);
    printf("Tag2: %c \n", Datum[1]);
    Tag[0] = Datum[0];
    Tag[1] = Datum[1];

    printf("Tag: %s\n", Tag);
    return Tag;
}

char * getJahr(const char* Datum) //const char* Datum
{
    //char Datum[] ="23.07.2019";
    char Jahr[3]= "00";
    printf("Tag1: %c \n", Datum[6]);
    printf("Tag2: %c \n", Datum[7]);
    Jahr[0] = Datum[6];
    Jahr[1] = Datum[7];

    printf("Jahr: %s\n", Jahr);
    int jahrinzahl = atoi(Jahr);
    if (jahrinzahl<19)
    {
        printf("Jahr: 20%d \n", jahrinzahl);
    }
    else
    {
        printf("Jahr: 19%d \n", jahrinzahl);
    }
    return Jahr;
}

char * getMonat(const char* Datum) //const char* Datum
{
    //char Datum[] ="23.07.2019";
    int idx[10] ={0,1,2,3,4,5,6,7,8,9};
    char Monat[3]= "00";
    printf("Zeichen: %c \n", Datum[3]);
    printf("Zeichen: %c \n", Datum[4]);
    Monat[0] = Datum[3];
    Monat[1] = Datum[4];



/*
    while(punkt!= 2)
    {
        if(Datum[i]=='.')
        {
            punkt++;

        }
        if(punkt==1 && Datum[i]!= '.')
        {
            printf("Zeichen: %c \n", Datum[i]);
            if(Datum[i]== '0')
            {
            Monat[j]= Datum[i];
            j++;
            }
            else
            {
            //printf("Punkt: %d\n", punkt);
            //printf("Monat: %s\n", Monat);
            Monat[j]= Datum[i];
            j++;
            }

        }
        i++;
        }
*/


        //printf("%d\n", i);
    printf("Monat: %s\n", Monat);
    getTag(Datum);
    getJahr(Datum);
    return Monat;
}

