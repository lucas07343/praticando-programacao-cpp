#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x, y;

    do {
        cout << "Digite os valores das coordenadas X e Y:" << endl;
        cin >> x >> y;

        if (x > 0 && y > 0) {
            cout << "QUADRANTE Q1" << endl;
        }
        else if (x < 0 && y > 0) {
            cout << "QUADRANTE Q2" << endl;
        }
        else if (x < 0 && y < 0) {
            cout << "QUADRANTE Q3" << endl;
        }
        else if (x > 0 && y < 0) {
            cout << "QUADRANTE Q4" << endl;
        }
    } while (x != 0 && y != 0);

    return 0;
}