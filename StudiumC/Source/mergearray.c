#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "value.h"
#include "typen.h"
#define TRENNLINIE 60
int* mallocarray(int arraylaengeab)
{
    int* speicherplatz = (int*)malloc(arraylaengeab*sizeof(int));
    return speicherplatz;
}


int* mergearray(int a[], int laengea, int b[], int laengeb)
{
    int laengeab = laengea + laengeb;
    int * arrayab = mallocarray(laengeab);
    int i = 0;
    int j = 0;
    int k = 0;
    while(i<laengea && j<laengeb)
    {
            if(a[i]>b[j])
            {
                arrayab[k] = b[j];
                printf("Zahl aus b ist: %d\n", b[j]);
                k++;
                j++;

            }
            if(a[i]< b[j])
            {
                arrayab[k] = a[i];
                printf("Zahl aus a ist: %d\n", a[i]);
                k++;
                i++;

            }

    }
    return arrayab;

}



