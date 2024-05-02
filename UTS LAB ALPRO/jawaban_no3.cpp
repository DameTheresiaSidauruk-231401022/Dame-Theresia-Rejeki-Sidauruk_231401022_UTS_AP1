#include <iostream>

using namespace std;

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int angka;
    int jumlahPrima = 0;

    cout << "Masukkan angka: ";
    cin >> angka;

    int temp = angka;
    while (temp > 0) {
        int digit = temp % 10;
        if (isPrime(digit)) {
            jumlahPrima += digit;
        }
        temp /= 10;
    }
    cout << "Jumlah angka prima dalam angka yang dimasukkan: " << jumlahPrima << endl;

    return 0;
}