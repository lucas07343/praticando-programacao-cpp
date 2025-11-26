#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i;
    long long int fatorial;

    cout << "Digite o valor de N:(maximo 15) ";
    cin >> n;

    do {
        if (n > 15) {
            cout << endl << "VALOR MAXIMO EXCEDIDO!\nfavor, digitar o valor de N novamente: ";
            cin >> n; 
        }
        else if (n < 0) {
            cout << endl << "NAO E POSSIVEL CALCULAR FATORIAL COM UM NUMERO NEGATIVO!\nFavor, digitar o valor de N novamente: ";
            cin >> n;
        }
    } while (n > 15 || n < 0);
    if (n == 0 || n == 1) {
        fatorial = 1;
    }
    else {
        fatorial = 1;
        for (i = 2; i <= n; i++) {
            fatorial *= i;
        }
    }

    cout << endl << "FATORIAL = " << fatorial;

    return 0;
}