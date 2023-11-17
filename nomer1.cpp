#include <iostream>

using namespace std;


    int batas;
    int jumlahBilanganGanjil = 0;
    int jumlahBilanganGenap = 0;
    int jumlahBilanganPrima = 0;


    // Function Proses Menghitung Bilangan Ganjil
    void BilanganGanjil ( int batas, int & jumlahBilanganGanjil ) {
    cout << "Bilangan Ganjil :";
    for ( int i = 0; i <= batas; i++ ) {
    if ( i % 2 != 0 ) {
    cout << i << " ";
    jumlahBilanganGanjil += i; }} cout << endl; }


    // Function Proses Menghitung Bilangan Genap
    void BilanganGenap ( int batas, int & jumlahBilanganGenap ) {
    cout << "Bilangan Genap: ";
    for ( int i = 0; i <= batas; i += 2 ) {
    cout << i << " ";
    jumlahBilanganGenap += i; } cout << endl; }


    // Function Proses Menghitung Bilangan Prima
    void BilanganPrima( int batas, int & jumlahBilanganPrima) {
    cout << "Bilangan Prima: ";
    for ( int i = 2; i <= batas; i++) {
    int j;
    for (j = 2; j * j <= i && i % j != 0; j++) { }
    if (j * j > i) {
    cout << i << " ";
    jumlahBilanganPrima += i; } }
    cout << endl; }


    // Forum Pengisian Bilangan Ganjil
    void faktorBilanganGanjil (int jumlahBilanganGanjil) {
    cout << "Hasil Faktor Bilangan Ganjil: ";
    for (int i = 1; i <= jumlahBilanganGanjil; i++) {
    if (jumlahBilanganGanjil % i == 0) {
    cout << i << " "; } } cout << endl; }


    // Forum Pengisian Bilangan Genap
    void faktorBilanganGenap (int jumlahBilanganGenap) {
    cout << "Hasil Faktor Bilangan Genap: ";
    for (int i = 1; i <= jumlahBilanganGenap; i++) {
    if (jumlahBilanganGenap % i == 0) {
    cout << i << " "; } } cout << endl; }


    // Forum Pengisian Bilangan Prima
    void faktorBilanganPrima(int jumlahBilanganPrima) {
    cout << "Hasil Faktor Bilangan Prima: ";
    for (int i = 1; i <= jumlahBilanganPrima; i++) {
    if (jumlahBilanganPrima % i == 0) {
    cout << i << " "; }} cout << endl; }


int main() {

    int batas;
    int jumlahBilanganGanjil = 0;
    int jumlahBilanganGenap = 0;
    int jumlahBilanganPrima = 0;


    // Output
    cout << "[ BILANGAN GANJIL, GENAP, DAN PRIMA ]" << endl << endl;
    cout << "Masukkan batas bilangan positif: ";
    cin >> batas;
    cout << endl;


    cout << "A. Bilangan" << endl;
    BilanganGanjil( batas, jumlahBilanganGanjil );
    BilanganGenap( batas, jumlahBilanganGenap );
    BilanganPrima( batas, jumlahBilanganPrima );
    cout << endl;


    cout << "B. Jumlah Hasil Bilangan" << endl;
    cout << "Jumlah Bilangan Ganjil: " << jumlahBilanganGanjil << endl;
    cout << "Jumlah Bilangan Genap: " << jumlahBilanganGenap << endl;
    cout << "Jumlah Bilangan Prima: " << jumlahBilanganPrima << endl;
    cout << endl;


    cout << "C. Faktor Bilangan" << endl;
    faktorBilanganGanjil ( jumlahBilanganGanjil );
    faktorBilanganGenap ( jumlahBilanganGenap );
    faktorBilanganPrima ( jumlahBilanganPrima );


    return 0;
}
