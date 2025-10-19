#include <iostream> // menambahkan package
#include <iomanip> // pembulatan double / float
#include <sstream> // untuk string
#include <cmath> // lib. matematika

using namespace std;

int main() {

    double harga_satuan, diskon, harga_akhir, harga_diskon, jumlah_barang, total_harga = 0;
    string nama_barang;

    cout << "------------------TOKO UD MURAH MERIAH--------------------" << endl;
    cout << "==========================================================" << endl;
    cout << "-------------------PVEGANANDA CHANNEL---------------------" << endl;
    cout << endl;
    cout << endl;

    cout << "Masukkan Nama Barang   : ";
    cin.ignore();
    getline(cin, nama_barang);
    cout << "Masukkan Harga Barang  : ";
    cin >> harga_satuan;
    cout << "Masukkan Jumlah Barang : ";
    cin >> jumlah_barang;

    system("cls");

    cout << endl;

    cout << fixed << setprecision(0);

    //percabangan

    if (jumlah_barang >= 3 && jumlah_barang <= 5){ // diantara 3 dan 5 , {3,4,5}
        diskon = 0.02; // 2%
    } else if ( jumlah_barang >= 6 && jumlah_barang <= 10) {
        diskon = 0.05; // 5 %
    } else if ( jumlah_barang >= 11 && jumlah_barang <= 17) {
        diskon = 0.10; // 10%
    } else if ( jumlah_barang >= 18) {
        diskon = 0.20; // 20%
    } else {
        diskon = 0;
    }

    total_harga = harga_satuan * jumlah_barang;
    harga_diskon = diskon * total_harga;
    harga_akhir = total_harga - harga_diskon;

    cout << "Nama Barang    : " << nama_barang << endl;
    cout << "Jumlah Barang  : " << jumlah_barang << endl;
    cout << "Total Harga    : Rp." << total_harga << endl;
    cout << "Diskon         : Rp." << diskon * 100 << "%" << endl;
    cout << "Harga Diskon   : Rp." << harga_diskon << endl;
    cout << "Harga Akhir    : Rp." << harga_akhir << endl;

    return 0;
}
