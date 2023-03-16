//
// Created by SERGE GUEA on 13/03/23.
//

/*   Scrivere un programma che legge tre numeri interi positivi N, M e Q, seguiti da una matrice NxM e da una lista di Q di numeri interi,
 * e che stampa quanti elementi della matrice non sono presenti nella lista letta.
   Usare preferibilmente un sottoprogramma di tipo funzione che svolge il seguente compito:
  riceve come parametri un intero relativo X e una lista con il suo riempimento, e restituisce un valore logico che indica se X è presente nella lista.

 *
 */

#include <iostream>
#include <array>


using namespace std;
bool presente(int X, int lista[], int Q)
{
    for (int i = 0; i < Q; i++)
    {
        if (X == lista[i])
        {
            return true;
        }
    }
    return false;
}


int main (){

    int N = 5;
    int M = 5;
    int Q = 5;
    int matrice[N][M];
    int lista[Q];
    int contatore = 0;


    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            //cout << "Inserisci un numero: ";
            //cin >> matrice[i][j];
            matrice[i][j] = rand() % 10;
            cout << matrice[i][j] << " ";

        }
    }
    cout << endl;
    for (int i = 0; i < Q; i++)
    {

        for (int j = 0; j < Q; j++)
        {
            if (lista[i] == lista[j])
            {
                lista[i] = rand() % 10;
            }
        }
        lista[i] = rand() % 10;
        cout << lista[i] << " ";
    }
    cout << endl;
    cout << "------------------------------------"<<endl;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (presente(matrice[i][j], lista, Q))
            {
                cout <<"  " << matrice[i][j] << "| ";
                cout << "Il numero " << matrice[i][j] << " è presente nella lista" << endl;
            }
            {
                if (matrice[i][j] == lista[N])
                {
                    cout << "Il numero " << matrice[i][j] << " è presente nella lista" << endl;
                }
            }
        }
    }
    contatore = N*M - Q;
    cout << "Il numero di elementi della matrice non presenti nella lista è: " << contatore << endl;
cout << "------------------------------------"<<endl;
    return 0;
}
