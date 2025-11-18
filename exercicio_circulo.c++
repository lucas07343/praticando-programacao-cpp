#define _USE_MATH_DEFINES

#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main()
{
    double r, area;

    cout << "Digite o valor do raio do circulo: ";
    cin >> r;

    area = M_PI * pow(r, 2);

    cout << fixed << setprecision(3);
    cout << "\nAREA = " << area;

    return 0;
}