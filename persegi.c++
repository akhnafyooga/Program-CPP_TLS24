#include <iostream> //Library IOSTREAM
#include <cmath> //Library CMATH

using namespace std; 

int main () {
    double p, l; // Input 2 variabel, P untuk Panjang dan L untuk lebar dalam double (decimal)

    cout << "Masukkan panjang dan lebar persegi: "; // Print kata didalam petik
    cin >> p >> l; // Code untuk input p dan l

    double keliling = (p + l)*2; // rumus keliling persegi
    double luas = (p*l); // rumus luas persegi

    cout << "Keliling = " << keliling <<endl; // Print keliling persegi
    cout << "Luas = " << luas <<endl; // Print luas persegi

    return 0;
}