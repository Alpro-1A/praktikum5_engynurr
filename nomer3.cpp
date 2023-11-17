#include <iostream>

using namespace std;


    int a = 0;
    int b = 1;
    int c = 0;


    void Fibonacci( int fibonacci ){
    cout << "Deret Fibonacci: ";


    for (int i = 0; i < fibonacci; i++) {
    if (i <= 1) {
    c = i;
    } else {
    c = a + b;
    a = b;
    b = c; }
    cout << c << " "; }
    cout << endl; }


    int main () {
    int fibonacci ;


    cout << "Masukkan jumlah bilangan dalam deret fibonacci: ";
    cin >> fibonacci;
    cout << endl;
    Fibonacci ( fibonacci );

    return 0; }
