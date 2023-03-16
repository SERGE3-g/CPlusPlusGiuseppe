//
// Created by SERGE GUEA on 13/03/23.
//

/*
 *  Scrivere un programma che riceve in ingresso due liste di numeri, ciascuna terminata dal valore speciale - 1000, e che stampa per ogni numero della prima lista quante volte è presente nella seconda.
    -  Dati di ingresso e dati di uscita
    -  Casi di test
    -   Schemi da usare per: input, calcolo, output
    -   Variabili che servono
    -   Scrivere il codice


 */

#include <iostream>

using namespace std;



int main(){

    int num;
    int i;
    int j;
    int k;

    int a1[100];
    int a2[100];

    for (i = 0; i < 100; i++) {
        a1[i] = 0;
        a2[i] = 0;
    }

    for (i = 0; i < 100; i++) {
        cout << "Inserisci numero primo array (termina con -1000): ";
        cin >> num;
        if (num == -1000) {
            break;
        }
        a1[i] = num;
    }

    if (i == 100) {
        cout << "Hai inserito troppi numeri" << endl;
        return 0;
    }

    for (j = 0; j < 100; j++) {
        cout << "Inserisci numero secondo array (termina con -1000): ";
        cin >> num;
        if (num == -1000) {
            break;
        }
        a2[j] = num;
    }

    if (j == 100) {
        cout << "Hai inserito troppi numeri" << endl;
        return 0;
    }

    for (k = 0; k < i; k++) {
        int count = 0;
        for (int l = 0; l < j; l++) {
            if (a1[k] == a2[l]) {
                count++;
            }
        }
        cout << "Il numero " << a1[k] << " compare " << count << " volte" << endl;
    }

    return 0;
}
