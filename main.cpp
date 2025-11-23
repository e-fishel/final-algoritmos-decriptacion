#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector <ll>;
using ii = pair <ll, ll>;
using vii = vector <ii>;

string decode_function (string str) {
    for (ll i = 0; i < str.size(); i++) {
        str[i] -= i*i%5;
    }
    return str;
}

int main () {
    string str = "qvi$oot";
    cout << "El string codificado es  : " << str << '\n';
    string decoded = ""; // todo: change to function output
    cout << "El string decodificado es: " << decoded << '\n';
    return 0;
}
