#include <bits/stdc++.h>

using namespace std;

int main()
{   
    int n, i;
    double soma, media; 

    cout << "Quantos numeros voce vai digitar? ";
    cin >> n;

    double vet[n];

    for (i = 0; i < n; i++) {
        cout << "Digite um numero: ";
        cin >> vet[i];
    }

    cout << endl << "VALORES = ";
    for (i = 0; i < n; i++) {
        cout << fixed << setprecision(1);
        cout << vet[i] << " ";
    }

    soma = 0;
    for (i = 0; i < n; i++) {
        soma += vet[i];
    }

    media = soma / n;

    cout << fixed << setprecision(2);
    cout << endl << "SOMA = " << soma << endl;
    cout << "MEDIA = " << media;

    return 0;
}