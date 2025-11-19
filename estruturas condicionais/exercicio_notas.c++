#include <bits/stdc++.h>

using namespace std;

int main()
{
    double nota1, nota2, notaFinal;

    cout << "Digite a primeira nota: ";
    cin >> nota1;
    cout << "Digite a segunda nota: ";
    cin >> nota2;

    notaFinal = nota1 + nota2;

    cout << endl << "NOTA FINAL = " << notaFinal << endl;

    if (notaFinal < 60) {
        cout << "REPROVADO";
    }

    return 0;
}