#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, j, maior;

    cout << "Qual a ordem da matriz? ";
    cin >> n;

    int mat[n][n];
    int vet[n];

    for (i = 0; i < n; i++) {
        cout << endl;
        for (j = 0; j < n; j++) {
            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> mat[i][j];
        }
    }

    for (i = 0; i < n; i++) {
        maior = 0;
        for (j = 0; j < n; j++) {
            if (mat[i][j] > maior) {
                maior = mat[i][j];
            }
        }
        vet[i] = maior;
    }

    cout << endl << "MAIOR ELEMENTO DE CADA LINHA:" << endl;
    for (i = 0; i < n; i++) {
        cout << vet[i] << endl;
    }

    return 0;
}