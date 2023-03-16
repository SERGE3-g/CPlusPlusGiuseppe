//
// Created by SERGE GUEA on 13/03/23.
//

/*  Scrivere un programma che legge un intero N seguito da una lista di N punti (coppia di coordinate intere X e Y),
 * e che determina se esiste un punto della lista ha entrambe le coordinate X e Y uguali a quelle di un altro punto della lista.
  Usare preferibilmente un sottoprogramma di tipo funzione che svolge il seguente compito:
  riceve una coppia di punti (con coordinate intere) e restituisce un valore logico che indica
  se i due punti hanno entrambe le coordinate (X e Y) uguali
  Dati di ingresso e dati di uscita
 Casi di test
-   Schemi da usare per: input, calcolo, output
-  Variabili che servono
   Scrivere il codice
 *
 */

#include <iostream>
#include <array>

using namespace std;

bool check(int matrice[][2], int N, int i, int j)
{
    if (matrice[i][0] == matrice[j][0] && matrice[i][1] == matrice[j][1] )
    {
        return true;
    }
    return false;
}
void inizializza(int matrice[][2], int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            matrice[i][j] = 0;
        }
    }
}

int main (){

    int N = 5;
    int matrice[N][2];
    int contatore = 0;

    for (int i = 0; i < N; i++)
    {

        for (int j = 0; j < 2; j++)
        {

           // cout << "Inserisci il valore della matrice in posizione " << i << " " << j << endl;
            //cin >> matrice[i][j];
            matrice[i][j] = rand() % 10;
            cout << matrice[i][j] << " ";
        }
    }
     cout << endl;
    cout << "---------------------" << endl;

    for (int i = 0; i < N; i++)
    {
        for (int j = +1; j < N; j++)
        {
            if (matrice[i][0] == matrice[j][0] && matrice[i][1] == matrice[j][1])
            {
                contatore++;
            }
        }
    }
    cout << contatore << endl;
    cout << "---------------------" << endl;

    return 0;
}


