#include <bits/stdc++.h>

using namespace std;

int main()
{
    int senha;

    cout << "Digite a senha: ";
    cin >> senha;

    while (senha != 2002) {
        cout << "Senha Invalida! Tente novamente: ";
        cin >> senha;
    }

    cout << endl << "Acesso permitido!";

    return 0;
}