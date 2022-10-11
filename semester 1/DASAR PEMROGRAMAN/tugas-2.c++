// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main()
{
    // Write C++ code here
    cout << "Nama: Fraza Aditya Wiguna" << endl;
    cout << "Nim: 2211310027" << endl;
    cout << "Kelas: 1b Malam" << endl;
    cout << "Tugas pertemuan ke - 2" << endl;
    cout << "Dosen: Nurul Fajriyah. S,kom. ,M.Kom" << endl;
    cout << "====================================" << endl;
    cout << endl;

    float alas, tinggi, luas;
    cout << "Masukan alas segitiga: ";
    cin >> alas;
    cout << "Masukan tinggi segitiga: ";
    cin >> tinggi;

    luas = 0.5 * alas * tinggi;

    cout << "Luas Segitiga adalah " << luas;

    return 0;
}