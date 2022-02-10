#include<cmath>
bool narcissistic(int value) {

    int suma = 0;
    int ilosc_cyfr = 0;
    int kopia1 = value;
    int kopia2 = value;

    do {
        ++ilosc_cyfr;
        kopia1 /= 10;
    } while (kopia1);

    int ilosc_cyfr2 = ilosc_cyfr;

    while (ilosc_cyfr != 0)
    {
        suma = suma + pow(kopia2 % 10, ilosc_cyfr2);
        kopia2 /= 10;
        ilosc_cyfr--;
    }

    if (value != suma)
        return false;
    else
        return true;
}