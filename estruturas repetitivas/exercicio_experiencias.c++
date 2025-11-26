#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, quantidadeCobaias, totalCobaias, totalCoelhos, totalRatos, totalSapos;
    double percentualCoelhos, percentualRatos, percentualSapos;
    char tipoCobaia;

    cout << "Quantos casos de teste serao digitados? ";
    cin >> n;

    totalCoelhos = 0;
    totalRatos = 0;
    totalSapos = 0;
    for (i = 0; i < n; i++) {
        cout << "Quantidade de cobaias: ";
        cin >> quantidadeCobaias;
        cout << "Tipo de cobaia: ";
        cin >> tipoCobaia;
        tipoCobaia = toupper(tipoCobaia);

        switch (tipoCobaia) {
            case 'C' :
                totalCoelhos += quantidadeCobaias;
                break;

            case 'R' :
                totalRatos += quantidadeCobaias;
                break;

            case 'S' :
                totalSapos += quantidadeCobaias;
                break;
        }
    }

    totalCobaias = totalCoelhos + totalRatos + totalSapos;

    percentualCoelhos = (double)totalCoelhos / totalCobaias * 100;
    percentualRatos = (double)totalRatos / totalCobaias * 100;
    percentualSapos = (double)totalSapos / totalCobaias * 100;

    cout << endl << "RELATORIO FINAL:" << endl;
    cout << "Total: " << totalCobaias << " cobaias" << endl;
    cout << "Total de coelhos: " << totalCoelhos << endl;
    cout << "Total de ratos: " << totalRatos << endl;
    cout << "Total de sapos: " << totalSapos << endl;

    cout << fixed << setprecision(2);
    cout << "Percentual de coelhos: " << percentualCoelhos << endl;
    cout << "Percentual de ratos: " << percentualRatos << endl;
    cout << "Percentual de sapos: " << percentualSapos << endl;

    return 0;
}