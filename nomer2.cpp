#include <iostream>

using namespace std;


    int Tinggi;

    // Proses Membuat Segitiga
    void Segitiga ( int Tinggi ) {
    for (int i = 1; i <= Tinggi; i++) {

    // Proses Membuat Jarak
    for (int j = 1; j <= Tinggi - i; j++) {
    cout << " "; }

    // Proses Membuat Bintang
    for (int k = 1; k <= 2 * i - 1; k++) {
    cout << "*"; }
    cout << endl; } }


int main() {

    int Tinggi;

    cout << " [ SEGITIGA PIRAMIDA ] " << endl;
    cout << "Input Tinggi Segitiga: ";
    cin >> Tinggi;
    cout << endl;
    Segitiga ( Tinggi );


    return 0; }
