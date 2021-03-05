#ifndef TYPEN_H_INCLUDED
#define TYPEN_H_INCLUDED

/*Konstante*/
#define MAXANZAHL 30
#define UNBELEGT -2
#define NICHTMITGESCHRIEBEN -1
#define TRENNLINIE 60
#define KUNDENNAME 40
#define KUNDENVORNAME 30
#define STRASSEHAUSNUMMER 60
#define ALLESANDEREKUNDE 20
#define STUDENT 30
#define chf_to_eur 0.88
#define eur_to_chf 1.13
struct zeichenkette
{
    char zeichen;
    struct zeichenkette*next;
};

struct Uhrzeit
{
    int stunde;
    int minute;
};

struct Listenknoten
{
    float data;
    struct Listenknoten * next;
    struct Listenknoten * prev;
};
struct Listenknotenone
{
    float data;
    struct Listenknotenone * next;
};


struct Kunde
{
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
    // struct Kunden * next;
};

struct Kundenpaket
{
    struct Kunde data;
    int testzahl;
    struct Kundenpaket *next;
};

/*typedef-Deklaration*/
typedef struct Kunde KUNDEN;
typedef struct Kunde* PKUNDEN;
typedef struct Kundenpaket* KUNDENPAKET;
typedef struct zeichekette* STRINGKETTE;


#endif // TYPEN_H_INCLUDED

/*Function section*/
// void Trennliniezeichnen(void);
void Variablentausch(int *, int *);
void Notenschreiben(void);
double MinimumMaximum(double zahl1, double zahl2);
double MinimumMaximum4(double zahl1, double zahl2, double zahl3, double zahl4);
float Notenspiegel(int punktzahl);
int Teilt(int erstez, int zweitez);
int Summe(int summenzahleingabe);
int Summe2(int summengeradezahleingabe);
int MaxofArray(int arraynummern[], int i);
void Taschenrechner(void);
void waehrungeurchr(void);

void initKUNDEN(KUNDENPAKET *);
void Kundenanhaengen(KUNDENPAKET *, struct Kunde);
void KundenEingabe();
void KundenAusgabe(struct Kundenpaket *pstart);

void KundenListe(struct Kunde);

void Notenschreibenarray();
void Notenschreibenarrayeintrag(int student[], int anzahleintragen);
void Notenschreibenarrayausgabe(int student[]);
void Notenschreibenarrayausgabealle(int student[]);
int Notenschreibenarraystatistik(int student);
int Notenschreibenarrayaendern(int student, int note);
