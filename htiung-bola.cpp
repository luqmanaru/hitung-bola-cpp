#include <iostream>
using namespace std;

int main() {
    float k, r, volume, luas;
    const float pi = 3.14;

    cout << "Program untuk menghitung Keliling, Luas Permukaan dan Volume sebuah bola" << endl;
    cout << "\nMasukkan panjang jari-jari bola: ";
    cin >> r;

    // Rumus perhitungan bola
    k = 2 * pi * r;
    luas = 4 * pi * r * r;
    volume = (4.0 / 3.0) * pi * r * r * r;

    cout << "\nHasil Perhitungan:" << endl;
    cout << "Keliling       : " << k << endl;
    cout << "Luas Permukaan : " << luas << endl;
    cout << "Volume         : " << volume << endl;

    return 0;
}
