#include <iostream>
using namespace std;

int main () {
    int beras;
    int telur;
    int minyak;
    int uang;
    bool pecahan;

    cout << "harga beras (IDR)  : ";
    cin >> beras;

    cout << "harga telur (IDR)  : ";
    cin >> telur;

    cout << "harga minyak (IDR) : ";
    cin >> minyak;

    int totalBelanja_mentah = beras + telur + minyak;
    int totalPajak = totalBelanja_mentah * 25/100;
    int totalBelanja_pajak = totalPajak + totalBelanja_mentah;

    cout << "total belanja (+PPN 25%) : " << totalBelanja_pajak << endl;

    cout << "jumlah uang : ";
    cin >> uang;

    int kembalian = uang - totalBelanja_pajak;
    cout << "kembalian  : " << kembalian << endl;

    int pertama = kembalian - 100.000;
    bool satu = 0;
    cout << "Rp.100.000 : " << 100000 % kembalian << endl;
    cout << "Rp. 50.000 : " << 50000 % kembalian << endl;
    cout << "Rp. 20.000 : " << 20000 % kembalian << endl;
    cout << "Rp. 10.000 : " << 10000 % kembalian << endl;
    cout << "Rp. 5.000 : " <<  5000 % kembalian << endl;
    cout << "Rp. 1.000  : " << 1000 % kembalian << endl;






    return 0;
}