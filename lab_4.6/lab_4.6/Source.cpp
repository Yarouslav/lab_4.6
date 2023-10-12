#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double S, P;
    int k, i;
    P = 1;
    i = 1;
    while (i <= 15)

    {
        S = 0;
        k = 1;
        while (k <= 20 - i)

        {
            S += (i * k) / (pow(i, 2) + pow(k, 2));

            k++;

        }
        S += P;
        i++;

    }
    cout << S << endl;
    P = 1;
    i = 1;
    do
    {
        S = 0;
        k = 1;
        do
        {
            S += (i * k) / (pow(i, 2) + pow(k, 2));
            k++;
        } while (k <= 20 - i);
        S += P;
        i++;
    } while (i <= 15);
    cout << S << endl;
    P = 1;
    for (i = 1; i <= 15; i++)

    {
        S = 0;
        for (k = 1; k <= 20 - i; k++)

        {
            S += (i * k) / (pow(i, 2) + pow(k, 2));

        }
        S += P;
    }
    cout << S << endl;
    P = 1;
    for (i = 15;i <= 1; i--)


    {
        S = 0;
        for (k = 20 - i; k >= 1; k--)
        {
            S += (i * k) / (pow(i, 2) + pow(k, 2)) ;
        }
        S += P;
    }
    cout << S << endl;
    return 0;
}