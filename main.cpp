#include <bits/stdc++.h>
using namespace std;

string decode_function (string str) {
    for (int i = 0; i < str.size(); i++) {
        str[i] -= i*i%5;
    }
    return str;
}

int main () {
    string str = "qvi$oot";
    cout << "El string codificado es  : " << str << '\n';
    string decoded = decode_function(str);
    cout << "El string decodificado es: " << decoded << '\n';
    return 0;
}
