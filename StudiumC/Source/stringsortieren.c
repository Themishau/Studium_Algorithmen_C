#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "value.h"
#include "typen.h"
#define TRENNLINIE 60

void stringsortieren(const char stringname[][100], int wordsnumber)
{
    char sortedstringname[wordsnumber][100];

    char firstinline[100]="";
//speichert nur Bartnick!
    for(int k = 0; k<wordsnumber;k++)
    {
    strcpy(firstinline,stringname[k]);
    printf("Wort in firstinline kopiert: %s\n",firstinline);
        for(int i = k+1; i<wordsnumber;i++)
        {
            //hier mit hilfsvariable arbeiten um zu tauschen position.
            printf("Wort in firstinline: %s und Wort in Liste %s werden verglichen\n",firstinline,stringname[i] );
            if (strcmp(firstinline,stringname[i])==0)
            {
                  printf("Woerter sind gleich\n");
            }
            else if (strcmp(firstinline,stringname[i])==1)
            {
                printf("Wort in Liste: %s vor Wort firstline: %s \n", stringname[i], firstinline);
                strcpy(stringname[k],stringname[i]);
                strcpy(stringname[i],firstinline);
                strcpy(firstinline, stringname[k]);
            }

        }
     strcpy(sortedstringname[k],firstinline);
     printf("Wort %s wird gespeichert\n", sortedstringname[k]);
    }
    for(int j= 0; wordsnumber>j;j++)
    {
        printf("%s Wort: %d\n",sortedstringname[j], j+1);
    }
    for(int j= 0; wordsnumber>j;j++)
    {
        printf("%s Wort: %d\n",stringname[j], j+1);
    }



}
