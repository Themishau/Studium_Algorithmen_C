#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "value.h"
#include "typen.h"
#define TRENNLINIE 60
void Sortieren(const char[50][100],int);
// char* eingabe(char[50][100]);
void ausgabe(const char[50][100]);



void Sortierenstringarray()
{
    char eingabe[100]="";
    static char zeichenkettenarray[50][100];
    int i=0;
    while(strcmp(eingabe,"fertig\n")!=0 || i>50)
    {
        fflush(stdin);
        printf("Geben Sie die Zeichenkette ein. Sonst: fertig fuers beenden \n Eingabe: ");
        fgets(eingabe, 100 ,stdin);
        printf("Eingabe war: %s ", eingabe);
        if(strcmp(eingabe,"fertig\n")!=0)
        {
        strcpy(zeichenkettenarray[i],eingabe);
        printf("Die Zeichenkette ist: %s \n", zeichenkettenarray[i]);
        i++;
        }
    }
    ausgabe(zeichenkettenarray);
    Sortieren(zeichenkettenarray, i);
    //ausgabe(Sortieren(zeichenkettenarray));
}



void ausgabe(const char string[50][100])
{
    for(int i= 0; i<5; i++)
    {
    printf("Die Zeichenkette ist: %s \n", string[i]);
    }
}


void Sortieren(const char arrayZeichenkette[50][100], int laenge)
{
    int hilf;
    char ersteralpha[100];
    for(int i=0; i<4;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if (strcmp(arrayZeichenkette[i],arrayZeichenkette[j])==1)
            {
              printf("Wort 1: %s Wort 2: %s 1\n", arrayZeichenkette[i], arrayZeichenkette[j]);
            }
            else
            {
              printf("Wort 1: %s Wort 2: %s -1\n", arrayZeichenkette[i], arrayZeichenkette[j]);
            }
            /*
            if (strcmp(arrayZeichenkette[i],arrayZeichenkette[j])==-1)
            {
              printf("Wort 1: %s Wort 2: %s -1\n", arrayZeichenkette[i], arrayZeichenkette[j]);
            }
            */
        }
    }


}

