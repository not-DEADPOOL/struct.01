#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 20

    typedef struct libro{
        char titolo[N];
        char autore[N];
        double prezzo;
        int pagine;
        char casa_editrice[N];
    }libro;

    int main()
    {
        libro libri[5];
        int i;
        for(i=0;i<strlen(libri);i++){
            printf("Inserisci il titolo del libro:");

            printf("Inserisci l'autore del libro:");

            printf("Inserisci la casa editrice del libro:");

            printf("Inserisci il prezzo del libro:");

            printf("Inserisci il numero di pagine del libro:");
        }
        return 0;
    }

    void aggiungi(libro libri){

        for(i=0;i<strlen(libri);i++){
                printf("Inserisci il titolo del libro:");
                gets(libri[i].titolo);
                printf("Inserisci l'autore del libro:");
                gets(libri[i].autore);
                printf("Inserisci la casa editrice del libro:");
                gets(libri[i].casa_editrice);
                printf("Inserisci il prezzo del libro:");
                gets(libri[i].prezzo);
                printf("Inserisci il numero di pagine del libro:");
                gets(libri[i].pagine);
            }
    }
