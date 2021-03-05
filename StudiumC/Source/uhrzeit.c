#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "value.h"
#include "typen.h"
#define TRENNLINIE 60

/*
struct Uhrzeit
{
    int stunde;
    int minute;
};

    struct Uhrzeit zeit1, zeit2, zeit3;

    zeit1.stunde = 10;
    zeit1.minute = 40;
    zeit2.stunde = 12;
    zeit2.minute = 15;

*/


eingabeuhrzeit(int ,int, struct Uhrzeit*);
ausgabeuhrzeit(struct Uhrzeit);
differenzuhrzeit(struct Uhrzeit, struct Uhrzeit);


void uhrzeitalles(struct Uhrzeit zeit1, struct Uhrzeit zeit2, struct Uhrzeit zeit3)
{
    eingabeuhrzeit(9, 30, &zeit3);
    printf("Zeit: %d:%d\n", zeit3, zeit3.minute);
    ausgabeuhrzeit(zeit2);
    differenzuhrzeit(zeit2, zeit1);
}


eingabeuhrzeit(int stunde, int minute, struct Uhrzeit *zeit)
{
    zeit->stunde = stunde;
    zeit->minute = minute;
}

ausgabeuhrzeit(struct Uhrzeit zeit)
{

    printf("Zeit: %d:%d\n", zeit.stunde, zeit.minute);

}

differenzuhrzeit(struct Uhrzeit zeit2, struct Uhrzeit zeit1)
{
    //zeit2: 12:15
    //zeit1: 10:40
    int ms = zeit2.stunde*60 - zeit1.stunde*60;
    //printf("ms: %d \n", ms);
    int mm = zeit2.minute - zeit1.minute;
    //printf("mm: %d \n", mm);
    int dm = ms + mm;
    if(dm < 0)
    {
        dm = dm*(-1);
    }
    printf("Differenz ist: %d Minuten", dm);
}
