#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "value.h"
#include "typen.h"
#define TRENNLINIE 60

void reverseprintbackt(struct Listenknotenone *pstart)
{
    //static int level = 0;
    //level++;
    //printf("gestartet ist 20: Liste float ist %f. Level ist %d next ist Zahl:%f\n", pstart->data, level, pstart->next->data);
    //printf("gestartet ist 20: Liste float ist %f. Level ist %d \n", pstart->data, level);
    static int lastreached = 0;

    if(pstart == NULL)
    {
    return printf("Liste ist null\n");
    }

    if(pstart->next == NULL)
    {
        return printf("Zahl: %f\n",pstart->data);
    }
    reverseprintbackt(pstart->next);
    printf("Zahl: %f\n",pstart->data);
}
