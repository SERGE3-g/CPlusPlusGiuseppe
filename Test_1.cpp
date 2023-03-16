//
// Created by SERGE GUEA on 13/03/23.
//

/*
 * Scrivere un programma che riceve in ingresso una lista di numeri relativi non nulli terminata da uno zero e che stampa un messaggio che indica se per ogni numero della lista e presente anche il valore di segno opposto.
Usare un sottoprogramma procedura che:
Ha come parameteri una lista L di numeri relativi (rappresentata con array e informazione tappo uguale a 0) e restituisce, sempre in un parametro un valore logico che indica se per ogni numero presente in L è presente anche il suo opposto
-   Dati di ingresso e dati di uscita
-   Casi di test
-   Schemi da usare per: input, calcolo, output
-   Variabili che servono
- Scrivere il codice

 */

#include <iostream>
#include <array>

using namespace std;

void inizializza (int arr[], int lung)
{
    for (int i = 0; i < lung; i++)
    {
        arr[i] = (int)NULL;
    }
}

bool presente(int num, int arr[], int lung)
{
    for (int i = 0; i < lung; i++)
    {
        if (num == arr[i])
        {
            return true;
        }
    }
    return false;
}

bool check(int arr[], int lung)
{
    for (int i = 0; arr[i] != 0; i++)
    {
        if (!presente(arr[i] * -1, arr, lung))
        {
            return false;
        }
    }
    return true;
}

bool cercaOpposti(int arr[], int lung)
{
    int i = 0;
    int input = 1;
    while (input != 0 and i < lung)
    {
        cout << "Inserisci numero (0 per terminare): ";
        cin >> input;
        arr[i] = input;
        i++;
    }
    return check(arr, i-1);
}

int main()
{
    int dim = 100;
    int array[dim];
    (cercaOpposti(array, dim)) ? cout << "\nOgni elemento ha il suo opposto" : cout << "\nNon tutti gli elementi hanno il loro opposto";
}
