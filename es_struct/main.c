#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 20

    typedef struct llibro{
        char titolo[N];
        char autore[N];
        int prezzo;
        int pagine;
        char casa_editrice[N];
    }libro;

    int main()
    {
        libro libri[5];
        aggiungi(libri);
        Titolo_da_trovare(libri);
        Autore_sort(libri);
        Titolo_sort(libri);
        piu_pagine(libri);
        economico(libri);

        return 0;
    }

    void aggiungi(libro* libri){
        int i;
        for(i=0;i<5;i++){
                printf("Inserisci il titolo del libro:");
                scanf("%s",(libri+i)->titolo);
                printf("Inserisci l'autore del libro:");
                scanf("%s",(libri+i)->autore);
                printf("Inserisci la casa editrice del libro:");
                scanf("%s",(libri+i)->casa_editrice);
                printf("Inserisci il prezzo del libro:");
                scanf("%d",&(libri+i)->prezzo);
                printf("Inserisci il numero di pagine del libro:");
                scanf("%d",&(libri+i)->pagine);
                printf("===================================================\n");
            }
    }
    void Titolo_da_trovare(libro* libri){
        char title[N];
        printf("Inserisci il titolo da trovare:");
        scanf("%s",title);
        int i,cond,k;
        for(i=0;i<5;i++){
            for(k=0;k<N;k++){
                cond=(libri+i)->titolo[k] == title[k] ? 1 : 0;
            }

        }
        printf(cond==1 ? "\nTrovato!\n" : "\nTitolo assente.\n");
    }



    void piu_pagine(libro* libri){
    int i,max = 0,j=0;
        for(i=0;i<5;i++){
            if(((libri+i)->pagine)>max){
                max=(libri+i)->pagine;
                j=i;
            }

        }
        printf("Il libro con piu' pagine e' %s\n",((libri+j)->titolo));
    }

    void economico(libro* libri){
    int i,min = 99999999999,h=0;
        for(i=0;i<5;i++){
            if(((libri+i)->prezzo) < min){
                min=(libri+i)->prezzo;
                h=i;
            }

        }
        printf("Il libro piu' economico e' %s\n",((libri+h)->titolo));
    }

    void Titolo_sort(libro* libri)
    {
        int i;
        for(i = 1; i < 3; i++)
        {
            while((libri+i)->titolo[0] < (libri+(i-1))->titolo[0] && i > 0)
            {
                libro tmp = libri[i];
                libri[i] = libri[i-1];
                libri[i-1] = tmp;
                i--;
            }

        }
    }

    void Autore_sort(libro* libri)
    {
        int i;
        for(i = 1; i < 3; i++)
        {
            while((libri+i)->autore[0] < (libri+(i-1))->autore[0] && i > 0)
            {
                libro tmp = libri[i];
                libri[i] = libri[i-1];
                libri[i-1] = tmp;
                i--;
            }

        }
    }
