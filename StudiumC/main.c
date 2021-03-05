#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Trennliniezeichnen.h"
#include "getMonat.h"
#include "anhaengenanarray.h"
#include "value.h"
#include "typen.h"
#include "Sortierenstringarray.h"
#include "reserveprint.h"
#include "stringsortieren.h"
#include "mergearray.h"
#include "reverseprintbacktracking.h"
#include "uhrzeit.h"

/*
#include "Variablentausch.h"
#include "Notenschreiben.h"
#include "MinimumMaximum.h"
#include "MinimumMaximum4.h"
#include "Notenspiegel.h"anzelementeanzelemente
#include "Teilt.h"anzelemente
#include "Summe.h"
#include "Summe2.h"
#include "MaxofArray.h"
#include "Taschenrechner.h"
#include "waehrungeurchr.h"

#include "initKUNDEN.h"
#include "Kundenanhaengen.h"
#include "KundenEingabe.h"
#include "KundenAusgabe.h"
#include "KundenListe.h"

#include "Notenschreibenarray.h"
#include "Notenschreibenarrayeintrag.h"
#include "Notenschreibenarrayausgabe.h"
#include "Notenschreibenarrayausgabealle.h"
#include "Notenschreibenarraystatistik.h"
#include "Notenschreibenarrayaendern.h"
*/

int main(void)
{

    int az[] = {3, 2, 3, 6};
    int ap = 3;
    // int *azz = az;
    az[1] = 1;
//    printf("Der letzte Wert ist %d %d %d %d\n", az[0], az[1] ,az[2], az[3]);
//    printf("Der letzte Wert ist %d %d %d %d\n", azz[0], azz[1], azz[2], azz[3]);
    // Testweise Kunden eingefügt
    //initKUNDEN(Kundenpaket*pstart);
    // zwei Strukturen, die Kundendaten und ein pnext enthalten.
    struct Kundenpaket k1,k2;
    //Kundendaten in Structure-Form
    struct Kunde kunde1,kunde2;

    strcpy(kunde1.Nachname,"Piechowiak");
    strcpy(kunde1.Vorname,"Silas");
    strcpy(kunde1.Ort,"Solingen");
    strcpy(kunde1.Email,"s.pi@fhdw.de");
    strcpy(kunde1.Adresse,"Silasstrasse 2");
    strcpy(kunde1.Postleitzahl,"42811");
    strcpy(kunde1.Telefon,"0334 4444");
    strcpy(kunde1.Mobil,"01273 8989");
    strcpy(kunde1.Geburtsdatum,"29.11.2000");
    strcpy(kunde1.Kundennummer,"1");

    strcpy(kunde2.Nachname,"LUL");
    strcpy(kunde2.Vorname,"LAL");
    strcpy(kunde2.Ort,"Solingen");
    strcpy(kunde2.Email,"s.pi@fhdw.de");
    strcpy(kunde2.Adresse,"Silasstrasse 2");
    strcpy(kunde2.Postleitzahl,"42811");
    strcpy(kunde2.Telefon,"0334 4444");
    strcpy(kunde2.Mobil,"01273 8989");
    strcpy(kunde2.Geburtsdatum,"29.11.2000");
    strcpy(kunde2.Kundennummer,"2");

// Test wie Structure on Structure funktioniert

    struct Kundenpaket Kunden;
    KUNDENPAKET *pstart = &Kunden;
    //Kunden.next = &k1;
    Kunden.testzahl = 1;
    //printf("%s\n", Kunden.data.Nachname);
    Kunden.data = kunde1;
    Kunden.next = &k2;
    k2.data = kunde2;
    k2.next = NULL;

    struct Listenknoten Liste1, Liste2, Liste3, Liste4;
    Liste1.data = 1.00;
    Liste1.prev = NULL;
    Liste1.next = &Liste2;

    Liste2.data = 3.00;
    Liste2.prev = &Liste1;
    Liste2.next = &Liste3;

    Liste3.data = 5.00;
    Liste3.prev = &Liste2;
    Liste3.next = &Liste4;

    Liste4.data = 7.00;
    Liste4.prev = &Liste3;
    Liste4.next = NULL;

    struct Listenknotenone Listeone1, Listeone2, Listeone3, Listeone4;
    Listeone1.data = 1.00;
    Listeone1.next = &Listeone2;
    Listeone2.data = 3.00;
    Listeone2.next = &Listeone3;
    Listeone3.data = 5.00;
    Listeone3.next = &Listeone4;
    Listeone4.data = 7.00;
    Listeone4.next = NULL;

    struct Uhrzeit zeit1, zeit2, zeit3;

    zeit1.stunde = 10;
    zeit1.minute = 40;
    zeit2.stunde = 12;
    zeit2.minute = 15;

    //struct zeichekette kette1;

    int schleife = 1;
    int punktzahl = 0;
    int variablezahl1= 0;
    int variablezahl2= 0;
    int anzahlkunden = 0;
    int erstezahl = 0;
    int zweitezahl = 0;
    int natuerlichezahl = 0;
    const int anzelemente = 0;
    int natuerlichegeradezahl = 0;

    int i= 0;
    double zahl1 = 0;
    double zahl2 = 0;
    double zahl3 = 0;
    double zahl4 = 0;
    while(schleife != 0)
        {

        int eingabe = 0;
        printf("welches Programm wollen Sie ausfuehren? Geben Sie dazu die Nummer ein und drücken Sie Enter.\n");
        printf("Notenschreiben(): 1 \n");
        printf("summe(): 2 \n");
        printf("notnspiegel(): 3 \n");
        printf("mietvertrag(): 4 \n");
        printf("Variablentausch(): 5 \n");
        printf("MinimumMaximum zwei Zahlen(): 6 \n");
        printf("MinimumMaximum Vier Zahlen(): 7 \n");
        printf("Teilt: 8 \n");
        printf("Summe1 (mit ausgabe als print): 9 \n");
        printf("Summe2: 10 \n");
        printf("Maxarray: 11 \n");
        printf("Taschenrechner: 12 \n");
        printf("Waehrung Euro zu CHR: 13 \n");
        printf("KundenAusgabe: 14 \n");
        printf("KundenEingabe: 15 \n");
        printf("Studenten Noten Array: 16 \n");
        printf("get Monat: 17 \n");
        printf("value von string: 18 \n");
        printf("sortieren: 19 \n");
        printf("reverseprint: 20 \n");
        printf("reverseprint zeichenkette: 21 \n");
        printf("mergearray: 22 \n");
        printf("reverseprintbackt: 23 \n");
        printf("Uhrzeit: 24 \n");
        scanf("%d",&eingabe);
        fflush(stdin);
        if(eingabe== 1 )
        {
            printf("Programm %d wird gestartet\n", eingabe);
            Notenschreiben();
        }
        else if(eingabe== 2 )
        {
            printf("Programm %d wird gestartet\n", eingabe);
        }
        else if(eingabe== 3 )
        {

            printf("Programm %d wird gestartet\n", eingabe);
            printf("Geben Sie die Punktzahl ein: \n", eingabe);
            scanf("%d", &punktzahl);
            float ergebnisnote = Notenspiegel(punktzahl);
            printf("Note ist: %f", ergebnisnote);

        }
        else if(eingabe== 4 )
        {
            printf("Programm %d wird gestartet\n", eingabe);

        }
        else if(eingabe== 5 )
        {

            printf("Programm %d wird gestartet\n", eingabe);
            printf("Geben Sie zwei Zahlen ein die getauscht wiedergegeben werden sollen.\n");
            printf("Geben Sie die erste Zahl an und bestätigen Sie mit Enter.\n");
            scanf("%d",&variablezahl1);
            printf("Geben Sie die zweite Zahl ein. Bestaetigen Sie mit Enter: \n");
            scanf("%d",&variablezahl2);
            Variablentausch(&variablezahl1, &variablezahl2);
                printf("Erste Zahl ist nun: %d.\nZweite Zahl ist nun: %d.\n", variablezahl1, variablezahl2);

        }
        else if(eingabe== 6 )
        {

            printf("Programm %d wird gestartet\n", eingabe);
            printf("Dieses Programm vergleicht zwei Zahlen und sagt Ihnen, welche groesser ist. \n");
            printf("Geben Sie die erste Zahl ein. Bestaetigen Sie mit Enter: ");
            scanf("%lf", &zahl1);
            printf("Geben Sie die zweite Zahl ein. Bestaetigen Sie mit Enter: ");
            scanf("%lf", &zahl2);
            double ausgabe = MinimumMaximum(zahl1, zahl2);
            printf("groessere Zahl: %lf", ausgabe);
        }
        else if(eingabe== 7 )
        {
            printf("Programm %d wird gestartet\n", eingabe);
            printf("Dieses Programm vergleicht vier Zahlen und sagt Ihnen, welche groesser ist. \n");
            printf("Geben Sie die erste Zahl ein. Bestaetigen Sie mit Enter: ");
            scanf("%lf", &zahl1);
            printf("Geben Sie die zweite Zahl ein. Bestaetigen Sie mit Enter: ");
            scanf("%lf", &zahl2);
            printf("Geben Sie die dritte Zahl ein. Bestaetigen Sie mit Enter: ");
            scanf("%lf", &zahl3);
            printf("Geben Sie die vierte Zahl ein. Bestaetigen Sie mit Enter: ");
            scanf("%lf", &zahl4);
            Trennliniezeichnen();
            printf("Groesste Zahl ist: ", MinimumMaximum4(zahl1, zahl2, zahl3, zahl4));

        }
        else if(eingabe== 8)
        {

            printf("Geben Sie die erste Zahl ein. Bestaetigen Sie mit Enter: ");
            scanf("%d", &erstezahl);
            printf("Geben Sie die erste Zahl ein. Bestaetigen Sie mit Enter: ");
            scanf("%d", &zweitezahl);
            int teilbarezahl = Teilt(erstezahl, zweitezahl);
            if(teilbarezahl == 1)
            {
                printf("teilbar\n");
                Trennliniezeichnen();
            }
            else{
                printf("nicht teilbar\n");
                Trennliniezeichnen();
            }

        }
        else if (eingabe== 9)
        {

            printf("Geben Sie eine natürliche Zahl ein um die Summe bis zur eingegegeben Zahl zu erhalten. Bestaetigen Sie mit Enter: ");
            scanf("%d", &natuerlichezahl);
            int summedernazahl = Summe(natuerlichezahl);
            printf("%d \n", summedernazahl);

        }
        else if (eingabe== 10)
        {

            printf("Geben Sie eine natürliche Zahl ein um die Summe aller natürlichen Zahlen bis zur eingegegeben Zahl zu erhalten. Bestaetigen Sie mit Enter: ");
            scanf("%d", &natuerlichegeradezahl);
            int summedernagezahl = Summe2(natuerlichegeradezahl);
            printf("%d \n", summedernagezahl);

        }
        else if (eingabe== 11)
        {

            const int anzelemente = 1;
            printf("Geben Sie die Anzahl der Elemente ein, die Sie eingeben wollen: Bestaetigen Sie mit Enter: ");
            scanf("%d", &anzelemente);
            fflush(stdin);

            /*int arraynummern[anzelemente];*/
            int *arraynummern = mallocarray(anzelemente);
            //std::vector<int> arraynummern(anzelemente);
            //int *arraynummern = new int[anzelemente];
            while(i < anzelemente){
                printf("%d Zahlen eingeben. Geben Sie Zahlen hintereinander ein. Bestaetigen Sie mit Enter: ", i);
                scanf("%d", &arraynummern[i]);
                fflush(stdin);
                printf("Zahl eingeben: %d\n", arraynummern[i]);
                i++;
            }
            int maxarrayaa = MaxofArray(arraynummern, anzelemente);
            printf("Groesste Zahl: %d \n", maxarrayaa);
        }
        else if(eingabe== 12)
        {
            printf("Programm %d wird gestartet\n", eingabe);
            Taschenrechner();
        }
        else if(eingabe== 13)
        {
            printf("Programm %d wird gestartet\n", eingabe);
            waehrungeurchr();
        }
        else if(eingabe== 14)
        {
            printf("Programm %d wird gestartet\n", eingabe);
            KundenAusgabe(&Kunden);
        }
        else if(eingabe== 15)
        {
            printf("Programm %d wird gestartet\n", eingabe);
            //KundenEingabe(&Kunden);
            //Kundenanhaengen(&pstart, kunde1); Wir wollen ja die Adresse vom Pointer haben. DIeser Pointer zeigt auf Kunden (oder Null)
            Kundenanhaengen(&pstart, kunde1);
        }
        else if(eingabe== 16)
        {
            printf("Programm %d wird gestartet\n", eingabe);
            Notenschreibenarray();
        }
        else if(eingabe== 17)
        {
            char datum[]= "00.00.0000";
            printf("Programm %d wird gestartet\n", eingabe);
            printf("Geben Sie ein Datum in dieser Form ein: 23.07.2019\n Eingabe: ");
            fgets(datum, 11, stdin);
            printf("%s \n Laenge: %d", datum, strlen(datum));
            getMonat(datum);
        }
        else if(eingabe== 18)
        {
            char valueeingabe[10] ="";
            printf("Programm %d wird gestartet\n", eingabe);
            printf("Geben Sie eine Zahl ein.\n Eingabe: ");
            //scanf("%10s",&valueeingabe);
            fgets(valueeingabe, 10, stdin);
            value(valueeingabe);
        }
        else if(eingabe== 19)
        {
            printf("Programm %d wird gestartet\n", eingabe);
            Sortierenstringarray();
        }
        else if(eingabe== 20)
        {
            printf("Programm %d wird gestartet\n", eingabe);
            reverseprint(&Liste1);
        }
        else if(eingabe== 21)
        {
            char namenstring[5][100]= {"Wenske","Becker","Schalter","Zajkowski","Bartnick"};
            printf("Programm %d wird gestartet\n", eingabe);
            stringsortieren(namenstring, 5);
        }
        else if(eingabe== 22)
        {

            int aarray[5] = {7, 13, 24, 49, 55};
            int barray[7] = {2, 12, 16, 29, 33, 46, 54};
            int*abarray = (int*)malloc(12*sizeof(int));
            printf("Programm %d wird gestartet\n", eingabe);
            abarray = mergearray(aarray, 5, barray, 7);

            for(int i = 0; i<12; i++)
            {
            printf("Array neu: %d\n", abarray[i]);
            }
        free(abarray);
        }
        else if(eingabe== 23)
        {
            printf("Programm %d wird gestartet\n", eingabe);
            reverseprintbackt(&Listeone1);
        }
        else if(eingabe== 24)
        {
            printf("Programm %d wird gestartet\n", eingabe);
            uhrzeitalles(zeit1, zeit2, zeit3);
        }
        else
        {
            printf("Eingabe war: %d \n", eingabe);
            printf("Eingabe nicht richtig. Wollen Sie beenden? Wenn ja, dann geben Sie 0 ein. Oder 1 fuer eine erneute EIngabe: \n");
            scanf("%d",&schleife);
        }
        Trennliniezeichnen();
        fflush(stdin);
    }
    return EXIT_SUCCESS;

}
void Notenschreibenarray()
{
    int student[STUDENT] = {0};
    int anzahleintragen = 0;
    int studentennummer = 0;

    int eingabe =0;
    while(eingabe != 5)
    {
        Trennliniezeichnen();
        printf("Was wollen Sie tun: \n");
        printf("1: Noten der Studenten eintragen \n");
        printf("2: Noten von Studenten aendern \n");
        printf("3: Noten ausgeben \n");
        printf("4: Statistik ausgeben \n");
        printf("5: Programm beenden \n");
        printf("Geben Sie die Nummer ein: \n");
        scanf("%d",&eingabe);
        if(eingabe== 1)
            {
                printf("1: Noten der Studenten eintragen gewaehlt. \n");
                printf("Wie viele Studenten wollen Sie eintragen?. \n");
                scanf("%d",&anzahleintragen);
                Notenschreibenarrayeintrag(student, anzahleintragen);
               // printf("test ok \n");
            }
        else if(eingabe== 2)
            {


            }
        else if(eingabe== 3)
            {
                int ausgeben = 0;
                printf("Programm %d wird gestartet\n", eingabe);
                printf("1: Wollen SIe alle Noten ausgeben? \n");
                printf("2: Wollen Sie Noten einzelnd ausgeben? \n");
                printf("Eingabe: ");
                scanf("%d", &ausgeben);
                if(ausgeben== 1)
                {
                 Notenschreibenarrayausgabealle(student);
                }
                else if(ausgeben == 2)
                {
                 Notenschreibenarrayausgabe(student);
                }
            }
        else if(eingabe== 4)
            {
                printf("Programm %d wird gestartet\n", eingabe);
                //KundenEingabe();
            }
        else if(eingabe== 5)
            {
                printf("Programm beendet\n", eingabe);
                //KundenEingabe();
                Trennliniezeichnen();
            }

    }
}
void Notenschreibenarrayeintrag(int student[], int anzahleintragen)
{
    printf("test ok \n");

    for(int i = 0; i < anzahleintragen; i++)
    {
        int studentnummer = 0;
        int studentnote = 0;
        printf("Welchen Studenten wollen Sie etwas eintragen: \n");
        scanf("%d", &studentnummer-1);
        printf("Welche Note soll Student %d bekommen?: \n", studentnummer);
        scanf("%d", &studentnote);
        student[studentnummer]= studentnote;
        printf("Student: %d hat die Note: %d \n", studentnummer ,student[studentnummer]);
    }
    Trennliniezeichnen();
}
void Notenschreibenarrayausgabe(int student[])
{
    int studentnummer = 0;
    int zuende = 0;
    while(zuende == 0)
    {
        printf("Von welchem Studenten wollen Sie die Note einsehen?: ");
        scanf("%d",&studentnummer);
        printf("\n");
        printf("Der Student %d hat die Note: %d \n", studentnummer+1, student[studentnummer]);
        printf("Wollen Sie noch eine Note betrachten? Geben Sie 0 ein. Sonst eine andere Nummer: ");
        scanf("%d",&zuende);
    }
}
void Notenschreibenarrayausgabealle(int student[STUDENT])
{
    for (int i= 0; i< STUDENT; i++)
    {
        printf("Student: %d hat die Note: %d  \n", i+1, student[i]);
    }
}
int Notenschreibenarraystatistik(int student)
{
 return 1;
}
int Notenschreibenarrayaendern(int student, int note)
{
 return 1;
}
void initKUNDEN(KUNDENPAKET *pstart)
{
*pstart = NULL;
}

/*

void KundenAusgabe(struct Kunde customer)
{
    printf("Name:                %40s \n", customer.Nachname);
    printf("Vorname:             %30s \n", *pstart.Vorname);
    printf("Adresse:             %40s\n", *pstart.Adresse);
    printf("Postleitzahl:        %15s\n", *pstart.Postleitzahl);
    printf("Ort:                 %15s\n", *pstart.Ort);
    printf("Telefon:             %15s\n", *pstart.Telefon);
    printf("Mobil:               %15s\n", *pstart.Mobil);
    printf("Email:               %15s\n", *pstart.Email);
    printf("Geburtsdatum:        %15s\n", *pstart.Geburtsdatum);
    printf("Kundennummer:        %15s\n", *pstart.Kundennummer);
}
    */
    /*
void KundenAusgabe(KUNDENPAKET *pstart)
{
    printf("Name:                %40d \n", (*pstart)->testzahl);
    if (*pstart!= NULL)
    {
    printf("Name:                %40s \n", (*pstart)->testzahl);

    KundenAusgabe(&(*pstart)->next);
    }
*/

   // das ist hier gut, check auch typen.h

void KundenAusgabe(struct Kundenpaket *pstart)
{

    if (pstart!= NULL)
    {
    printf("Name:                %40s \n", (*pstart).data.Nachname);

    KundenAusgabe(pstart->next);
    }

   /*
    printf("Vorname:             %30s \n", *pstart.Vorname);
    printf("Adresse:             %40s\n", *pstart.Adresse);
    printf("Postleitzahl:        %15s\n", *pstart.Postleitzahl);
    printf("Ort:                 %15s\n", *pstart.Ort);
    printf("Telefon:             %15s\n", *pstart.Telefon);
    printf("Mobil:               %15s\n", *pstart.Mobil);
    printf("Email:               %15s\n", *pstart.Email);
    printf("Geburtsdatum:        %15s\n", *pstart.Geburtsdatum);
    printf("Kundennummer:        %15s\n", *pstart.Kundennummer);
    */
}

void KundenEingabe(KUNDENPAKET*pstart)
{
    int kundeneingabevariable = 0;
    int scankundeneingabe = 0;
    int weitereingeben = 0;
    printf("Kundeneingabefunktion.");
    printf("Wenn Sie einen Kunden eingeben wollen, geben Sie 1 ein:\n");
    printf("Wenn Sie diese Funktion beenden wollen, geben Sie 2 ein: \n");
    printf("Eingabe: ");
    scanf("%d",&kundeneingabevariable);
    if(kundeneingabevariable== 1 )
    {
        printf("\n Eingabe wird ausgefuehrt\n");
        do {
            struct Kunde enterkunde;
            char Nachname[KUNDENNAME];
            char Vorname[KUNDENVORNAME];
            char Adresse[STRASSEHAUSNUMMER];
            char Postleitzahl[ALLESANDEREKUNDE];
            char Ort[ALLESANDEREKUNDE];
            char Telefon[ALLESANDEREKUNDE];
            char Mobil[ALLESANDEREKUNDE];
            char Email[ALLESANDEREKUNDE];
            char Geburtsdatum[ALLESANDEREKUNDE];
            char Kundennummer[ALLESANDEREKUNDE];
            fflush(stdin);
            // mit sichere Methode eingeben lassen!
            printf("Nachname des Kunden: ");
            fgets(Nachname, KUNDENNAME, stdin);
            fflush(stdin);
            printf("Vorname des Kunden: ");
            fgets(Vorname, KUNDENVORNAME, stdin);
            fflush(stdin);
            printf("Adresse des Kunden: ");
            fgets(Adresse, ALLESANDEREKUNDE, stdin);
            fflush(stdin);
            printf("Postleitzahl des Kunden: ");
            fgets(Postleitzahl, ALLESANDEREKUNDE, stdin);
            fflush(stdin);
            printf("Ort des Kunden: ");
            fgets(Ort, ALLESANDEREKUNDE, stdin);
            fflush(stdin);
            printf("Telefon des Kunden: ");
            fgets(Telefon, ALLESANDEREKUNDE, stdin);
            fflush(stdin);
            printf("Mobil des Kunden: ");
            fgets(Mobil, ALLESANDEREKUNDE, stdin);
            fflush(stdin);
            printf("Email des Kunden: ");
            fgets(Email, ALLESANDEREKUNDE, stdin);
            fflush(stdin);
            printf("Geburtsdatum des Kunden: ");
            fgets(Geburtsdatum, ALLESANDEREKUNDE, stdin);
            fflush(stdin);
            printf("Kundennummer des Kunden: ");
            fgets(Kundennummer, ALLESANDEREKUNDE, stdin);
            fflush(stdin);

            strcpy(enterkunde.Nachname, Nachname);
            strcpy(enterkunde.Vorname, Vorname);
            strcpy(enterkunde.Ort, Ort);
            strcpy(enterkunde.Email, Email);
            strcpy(enterkunde.Adresse, Adresse);
            strcpy(enterkunde.Postleitzahl, Postleitzahl);
            strcpy(enterkunde.Telefon, Telefon);
            strcpy(enterkunde.Mobil, Mobil);
            strcpy(enterkunde.Geburtsdatum, Geburtsdatum);
            strcpy(enterkunde.Kundennummer, Kundennummer);

            Kundenanhaengen(&(*pstart), enterkunde); // was für pstart eingeben?
            printf("Weiter eingeben?: 3 fuer beenden");
            scanf("%d",&weitereingeben);
        }while(weitereingeben == 0);
    }
    else if(kundeneingabevariable== 2 )
    {
        printf("Programm %d wird gestartet\n", kundeneingabevariable);
    }
    else if(kundeneingabevariable== 3 )
    {
        printf("Programm wird beendet\n");
    }
}
void Kundenanhaengen(KUNDENPAKET*pstart, struct Kunde dataeingabe)
{
/*
struct Kundenpaket
{
    struct Kunde data;
    int testzahl;
    struct Kundenpaket *next;
};
*/
    //printf(" SInd in Funktion vor if Pstart ist: %d \n", *pstart);
    printf(" SInd in Funktion vor if\n");

    if(*pstart == NULL)
    {
        printf(" SInd in Funktion if\n");
        *pstart = (struct Kundenpaket*)malloc(1*sizeof(struct Kundenpaket));
        //check, ob funktioniert hat
        (*pstart)->testzahl = 111;
        strcpy((*pstart)->data.Nachname, dataeingabe.Nachname);
        strcpy((*pstart)->data.Vorname, dataeingabe.Vorname);
        strcpy((*pstart)->data.Adresse, dataeingabe.Adresse);
        strcpy((*pstart)->data.Email, dataeingabe.Email);
        strcpy((*pstart)->data.Geburtsdatum, dataeingabe.Geburtsdatum);
        strcpy((*pstart)->data.Mobil, dataeingabe.Mobil);
        strcpy((*pstart)->data.Ort, dataeingabe.Ort);
        strcpy((*pstart)->data.Telefon, dataeingabe.Telefon);
        (*pstart)->next = NULL;
        printf("testzahl ist: %d\n",(*pstart)->testzahl);
        return;
    }
    printf(" SInd in Funktion nach if\n");
    Kundenanhaengen(&(*pstart)->next, dataeingabe);
}
/*
void Trennliniezeichnen(void)
{
    char trennzeichen = '*';
    for (int k=0; k<TRENNLINIE; k++)
    {
        printf("%c",trennzeichen);
    }
    printf("\n\n");
}
*/
void waehrungeurchr(void)
{
    int i = 0;
    char waehrung[3];
    float betrag = 0;
    float betrag_inwaehrung = 0;
    while(i == 0){
    printf("Geben Sie den Geldbetrag mit der Waehrung ein: \n Beispiel: 10 EUR\n 10 CHF\n Eingabe: ");
    scanf("%f%s", &betrag, &waehrung);
    // fgets(waehrung, 4, stdin);
    printf("Die Waehrung ist: %s\n", waehrung);
    if (strcmp(waehrung, "EUR")== 0 || strcmp(waehrung, "eur")==0){
        betrag_inwaehrung = betrag* eur_to_chf;
        i = 1;
        printf("Geldbetrag: %f CHF", betrag_inwaehrung);
    } else if (strcmp(waehrung, "CHF")== 0 || strcmp(waehrung, "chf")== 0){
        betrag_inwaehrung = betrag* chf_to_eur;
        printf("Geldbetrag: %f EUR", betrag_inwaehrung);
        i = 1;
    } else {
        printf("Leider stimmt die Eingabe nicht");
        fflush(stdin);
    }
    }
}
void Taschenrechner(void)
{
    float eingabe1, eingabe2;
    char rechenoperation;
    int eingabe = 0;
        while(eingabe == 0){
            printf("Bitte geben Sie die Gleichung ohne Leerzeichen ein. Bitte geben Sie die Rechenoperation als Buchstaben ein: \n a fuer Addition. \n s fuer Subtraktion. \n m fuer Multiplikation. \n d fuer Division.\n Beispiel: 12m12 \n Eingabe: ");
            scanf("%f  %c  %f", &eingabe1, &rechenoperation, &eingabe2);
            printf("Eingabe war: Erste Zahl: %f  Rechenoperator: %c  Zweite Zahl: %f \n", eingabe1, rechenoperation, eingabe2);
            fflush(stdin);
            if (rechenoperation == 'a'){
                printf("Addition ausgewaehlt. \n");
                float addi = eingabe1 + eingabe2;
                printf("Ergebnis Addition: %f\n", addi);
                eingabe = 1;
            } if(rechenoperation == 's'){
                printf("Subtraktion ausgewaehlt. \n");
                float subtr = eingabe1 - eingabe2;
                printf("Ergebnis Subtraktion: %f \n", subtr);
                eingabe = 1;
            } if(rechenoperation == 'm'){
                printf("Multiplikation ausgewaehlt. \n");
                float multi = eingabe1 * eingabe2;
                printf("Ergebnis Multiplikation: %f\n", multi);
                eingabe = 1;
            } if(rechenoperation == 'd'){
                printf("Division ausgewaehlt. \n");
                float divi = eingabe1 / eingabe2;
                printf("Ergebnis Division: %f\n", divi);
                eingabe = 1;
                printf("Eingabe_Test: %d\n", eingabe);
            } if(eingabe == 0){
                printf("\n Eingabe war nicht korrekt. Versuchen Sie es erneut.\n\n");
            }
        }
}
void Variablentausch(int *px, int *py)
{
    int hilfsvariable = *px;
    *px = *py;
    *py = hilfsvariable;

    printf("Programm beendet.\n\n");
    Trennliniezeichnen();
}
void Notenschreiben(void)
{
    int i, anzahl = 0;
    int punkte[MAXANZAHL];

    for (i=0; i<MAXANZAHL; i++)
    {
        punkte[i] = UNBELEGT;
    }
    printf("Hinweis: Das Beenden der Eingabe wird durch %d angegeben. \n nciht mitgebschrieben mit %d \n", UNBELEGT,NICHTMITGESCHRIEBEN);
    while(anzahl < MAXANZAHL)
    {
        printf("Bitte Punktezahl fuer Teilnehmer Nr. %2d: ", anzahl+1);
        scanf("%d",&punkte[anzahl]);
        if (punkte[anzahl] == UNBELEGT)
        {
            break;
        }
        anzahl++;
    }
    printf("Eingegebene Punktzahlen: \n");
    for (i=0; i<anzahl; i++)
    {
        printf("%2d: %3d\n",i+1,punkte[i]);
    }
}
double MinimumMaximum(double zahl1,double zahl2)
{
    if(zahl1<zahl2)
    {
        return zahl2;
    }
    else if(zahl1>zahl2)
    {
        return zahl1;
    }
    else if(zahl1==zahl2)
    {
        return -1;
    }
    else
    {
        printf("Eingabe ungueltig. \n");
    }
    printf("Programm abgeschlossen.\n \n");
    Trennliniezeichnen();
}
double MinimumMaximum4(double zahl1,double zahl2, double zahl3, double zahl4)
{
    if(zahl1>zahl2 && zahl1>zahl3 && zahl1>zahl4)
    {
        return zahl1;
    }
    else if(zahl2>zahl1 && zahl2>zahl3 && zahl2>zahl4)
    {
        return zahl2;
    }
    else if(zahl3>zahl1 && zahl3>zahl2 && zahl3>zahl4)
    {
        return zahl3;
    }
    else if(zahl4>zahl1 && zahl4>zahl3 && zahl4>zahl2)
    {
        return zahl4;
    }
    else
    {
        printf("Eingabe ungueltig. Oder die groessten Zahlen sind gleich gross. \n");
    }
    return 0;
}
float Notenspiegel(int punktzahl)
{
    printf("eingegebene Punktzahl: %d \n", punktzahl);
    if(97<= punktzahl && 100>= punktzahl) // und-verknuepfung wenn interval-check
    {
        return 1.0;
    }
    else if(92<=punktzahl)
    {
        return 1.3;
    }
    else if(89<=punktzahl)
    {
        return 1.7;
    }
    else if(85<=punktzahl)
    {
        return 2.0;
    }
    else if(81<=punktzahl)
    {
        return 2.3;
    }
    else if(77<=punktzahl)
    {
        return 2.7;
    }
    else if(72<=punktzahl)
    {
        return 3.0;
    }
    else if(67<=punktzahl)
    {
        return 3.3;
    }
    else if(59<=punktzahl)
    {
        return 3.7;
    }
    else if(50<=punktzahl)
    {
        return 4.0;
    }
    else if(0<=punktzahl)
    {
        return 5.0;
    }
    else
    {
        printf("eingabe ist nicht falsch.\n");
    }
    printf("Programm beendet.\n\n");
    Trennliniezeichnen();
    return 0;
}
int Teilt(int erstez, int zweitez)
{
/*
a=b++=c++;    //a = b+1 = c+1  // 1 = 0+1 = 0+1 fehler
a+=b++;       //a = a+b+1      // 2 = 1+0+1
a+=--b;       //a = a+(b-1)   * erst b-1  // 2 = 2-0
if (++a == b++)
{
    printf("ok.\n);
}
if (a || b)
{
    printf("Ok.\n");
}
*/

    if(erstez%zweitez == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int Summe(int summenzahleingabe)
{
    int summenatruerlichzahl = 0;
    for(int i = 0; i<=summenzahleingabe; i++)
    {
        summenatruerlichzahl+= i;
    }
    return summenatruerlichzahl;
}
int Summe2(int summengeradezahleingabe)
{
    int summegernatruerlichzahl = 0;
    for(int i = 0; i<=summengeradezahleingabe; i++)
    {
        if(i%2 == 0)
        {
            //printf("%d", i);
            summegernatruerlichzahl+= i;
        }
    }
    return summegernatruerlichzahl;
}
int MaxofArray(int arraynummern[], int i)
{
int groessterwert = 0;
    for(int k=0; k<i; k++)
    {
        printf("derzeit k: %d\n", k);
        if(groessterwert < arraynummern[k])
        {
            groessterwert = arraynummern[k];

            printf("derzeit groesste Zahl: %d\n", groessterwert);
        }
    }
    return groessterwert;
}























