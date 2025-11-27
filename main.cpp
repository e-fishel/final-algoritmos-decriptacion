#include <bits/stdc++.h>
using namespace std;

string decode_function (string str) { // shallow copy del string
    for (int i = 0; i < str.size(); i++) {
        str[i] -= i*i%5; // para cada caracter del string, restarle en ascii i^2 mod 5
    }
    return str; // retornar el string
}

int main () {
    string str = "qvi$oot"; // string original
    cout << "El string codificado es  : " << str << '\n';
    string decoded = decode_function(str);
    cout << "El string decodificado es: " << decoded << '\n';
    return 0;
}
