#include <iostream>
#include <string>
#include <locale>

using namespace std;

int main() {
    string kalimat;

    cout << "Masukkan kalimat: ";
    getline(cin, kalimat);

    for (char &c : kalimat) {
        c = toupper(c);
    }

    cout << "Kalimat dalam huruf kapital: " << kalimat << endl;

    return 0;
}