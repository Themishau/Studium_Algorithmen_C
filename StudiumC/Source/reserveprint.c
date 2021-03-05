#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "reserveprint.h"
#include "typen.h"
#define TRENNLINIE 60

void reverseprint(struct Listenknoten *pstart)
{
    //static int level = 0;
    //level++;
    //printf("gestartet ist 20: Liste float ist %f. Level ist %d next ist Zahl:%f\n", pstart->data, level, pstart->next->data);
    //printf("gestartet ist 20: Liste float ist %f. Level ist %d \n", pstart->data, level);
    static int lastreached = 0;

    if(pstart == NULL)
    {
    printf("Liste ist null\n");
    }

    if(pstart->next == NULL)
    {
        lastreached++;
    }

    if(lastreached == 0)
    {
        //printf("rekursiv *next* wird gestartet\n");
        reverseprint(pstart->next);
        return;
    }

    if(lastreached == 1)
    {
        printf("Zahl: %f\n", pstart->data);
        //printf("rekursiv *prev* wird gestartet\n");
        if (pstart->prev!= NULL)
        {
            reverseprint(pstart->prev);
            return;
        }

    }
    return printf("Fertig\n");
}
