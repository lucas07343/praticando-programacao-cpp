#include <bits/stdc++.h>

using namespace std;

int main()
{   
    int idade, qte, soma;
    double media;

    cout << "Digite as idades:" << endl;
    cin >> idade;

    if (idade < 0) {
        cout << endl << "IMPOSSIVEL CALCULAR";
    }
    else {
        qte = 0;
        soma = 0;
        while (idade >= 0) {
            qte++;
            soma = soma + idade;
            cin >> idade;
        }

        media = (double)soma / qte;
        cout << fixed << setprecision(2);
        cout << endl << "MEDIA = " << media;
    }  

    return 0;
}