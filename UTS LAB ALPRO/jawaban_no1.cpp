#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int totalDetik;
    
    cout << "Masukkan waktu dalam detik: ";
    cin >> totalDetik;
    
    if (totalDetik < 0) {
        cout << "Input tidak boleh negatif." << endl;
        return 1;
    }
    
    int jam = totalDetik / 3600;
    int sisaDetik = totalDetik % 3600;
    int menit = sisaDetik / 60;
    int detik = sisaDetik % 60;
    
    cout << "Waktu: " << setfill('0') << setw(2) << jam << ":" << setw(2) << menit << ":" << setw(2) << detik << endl;
    
    return 0;
}