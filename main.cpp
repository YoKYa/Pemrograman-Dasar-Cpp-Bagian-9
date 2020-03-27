#include <iostream>

using namespace std;

int main(){
    // Perbandingan Atau Komparasi

    int Angka1, Angka2; // Deklarasi
    bool Hasil;
    cout << "Masukkan Angka Pertama : ";
    cin >> Angka1;
    cout << "Masukkan Angka Kedua : ";
    cin >> Angka2;

    // == Sama Dengan
    Hasil = (Angka1 == Angka2);
    cout << Angka1 << " == " << Angka2 << " = " << Hasil << endl << endl;

    // != Tidak Sama Dengan
    Hasil = (Angka1 != Angka2);
    cout << Angka1 << " != " << Angka2 << " = " << Hasil << endl << endl;
    
    // > Lebih Besar Dari
    Hasil = (Angka1 > Angka2);
    cout << Angka1 << " > " << Angka2 << " = " << Hasil << endl << endl;

    // >= Lebih Besar Sama Dengan
    Hasil = (Angka1 >= Angka2);
    cout << Angka1 << " >= " << Angka2 << " = " << Hasil << endl << endl;

    // < Lebih Kecil Dari
    Hasil = (Angka1 < Angka2);
    cout << Angka1 << " < " << Angka2 << " = " << Hasil << endl << endl;

    // <= Lebih Kecil Sama Dengan
    Hasil = (Angka1 <= Angka2);
    cout << Angka1 << " <= " << Angka2 << " = " << Hasil << endl << endl;

    cin.get();
    return 0;
}