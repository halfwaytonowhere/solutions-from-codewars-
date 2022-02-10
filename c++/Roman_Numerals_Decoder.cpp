#include <iostream>
#include <string>
#include<map>

using namespace std;

int solution(string roman) {
    map<char, int> wart;
    wart['I'] = 1;
    wart['V'] = 5;
    wart['X'] = 10;
    wart['L'] = 50;
    wart['C'] = 100;
    wart['D'] = 500;
    wart['M'] = 1000;

    int wynik = 0;
    char poprzednia;
    int dlugosc_stringa = roman.length();
    for (int i = 0; i <= dlugosc_stringa; i++)
    {
        if (wart[roman[i]] >= wart[roman[i + 1]]) {
            poprzednia = roman[i - 1];

            if (roman[i] == 'M')
            {
                if (poprzednia == 'C') {
                    wynik += 900;
                }
                else
                    wynik += 1000;
            }
            if (roman[i] == 'D')
            {
                if (poprzednia == 'C') {
                    wynik += 400;
                }
                else
                    wynik += 500;
            }
            if (roman[i] == 'C') {

                if (poprzednia == 'X') {
                    wynik += 90;
                }
                else
                    wynik += 100;
            }
            if (roman[i] == 'L')
            {
                if (poprzednia == 'X') {
                    wynik += 40;
                }
                else wynik += 50;
            }
            if (roman[i] == 'X') {
                if (poprzednia == 'I') {
                    wynik += 9;
                }
                else wynik += 10;
            }
            if (roman[i] == 'V')
            {
                if (poprzednia == 'I') {
                    wynik += 4;
                }
                else
                    wynik += 5;
            }
            if (roman[i] == 'I') {
                wynik += 1;
            }

        }
        else
            continue;
    }
    return wynik;

}