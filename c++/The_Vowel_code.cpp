/*
Step 1: Create a function called encode() to replace all the lowercase vowels in a given string with numbers according to the following pattern :

a -> 1
e -> 2
i -> 3
o -> 4
u -> 5
For example, encode("hello") would return "h2ll4".There is no need to worry about uppercase vowels in this kata.

Step 2: Now create a function called decode() to turn the numbers back into vowels according to the same pattern shown above.

For example, decode("h3 th2r2") would return "hi there".

For the sake of simplicity, you can assume that any numbers passed into the function will correspond to vowels.
*/

#include <string>
using namespace std;

string encode(const string& str) {
    string str_two = str;
    int n = str_two.length() - 1;
    while (n >= 0) {

        switch (str_two[n]) {
        case 'a':
            str_two[n] = '1';
            break;
        case 'e':
            str_two[n] = '2';
            break;
        case 'i':
            str_two[n] = '3';
            break;
        case 'o':
            str_two[n] = '4';
            break;
        case 'u':
            str_two[n] = '5';
            break;
        default:
            break;
        }
        n = n - 1;
    }
    return str_two;
}

string decode(const string& str) {
    string str_two = str;
    int n = str_two.length() - 1;
    while (n >= 0) {

        switch (str_two[n]) {
        case '1':
            str_two[n] = 'a';
            break;
        case '2':
            str_two[n] = 'e';
            break;
        case '3':
            str_two[n] = 'i';
            break;
        case '4':
            str_two[n] = 'o';
            break;
        case '5':
            str_two[n] = 'u';
            break;
        default:
            break;
        }
        n = n - 1;
    }
    return str_two;
}
