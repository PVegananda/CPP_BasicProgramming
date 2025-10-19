#include <iostream> // menambahkan package
#include <iomanip> // pembulatan double / float
#include <sstream> // untuk string
#include <cmath> // lib. matematika

using namespace std;

int main() {

    double harga_satuan, diskon = 0;
    double harga_akhir, harga_diskon, total_harga;
    int jenis_barang, jumlah_barang;
    string bonus = "TIDAK ADA BONUS";
    string nama_barang = "TIDAK ADA BARANG";

    cout << "--------------------TOKO BABA SLAMET----------------------" << endl;
    cout << "==========================================================" << endl;
    cout << "-------------------PVEGANANDA CHANNEL---------------------" << endl;
    cout << endl;
    cout << endl;

    cout << "Masukkan Barang yang di beli  : " << endl;
    cout << "1. 1 PACK HVS MA$ (80 Gram)" << endl;
    cout << "2. TINTA EPSON merk INKQ" << endl;
    cout << "3. Flash Disk SUNDRIVE 64 GB" << endl;
    cout << "Jenis Barang(1/2/3) = ";
    cin >> jenis_barang;

    system("cls");

    cout << "--------------------TOKO BABA SLAMET----------------------" << endl;
    cout << "==========================================================" << endl;
    cout << "-------------------PVEGANANDA CHANNEL---------------------" << endl;
    cout << endl;
    cout << endl;

    cout << "Masukkan Jumlah Barang yang di beli  : ";
    cin >> jumlah_barang;

    cout << endl;
    cout << endl;

    cout << fixed << setprecision(0);

    if (jenis_barang == 1) {
        harga_satuan = 55000;
        nama_barang = "1 PACK HVS MA$ (80 Gram)";
        total_harga = harga_satuan * jumlah_barang;

        if (jumlah_barang >= 3 && jumlah_barang <= 5){ // diantara 3 dan 5 , {3,4,5}
            diskon = 0.05; // 5%
        } else if ( jumlah_barang >= 6 && jumlah_barang <= 10) {
            diskon = 0.10; // 10 %
        } else if ( jumlah_barang >= 11 && jumlah_barang <= 15) {
            diskon = 0.15; // 15%
        } else if ( jumlah_barang >= 16) {
            diskon = 0.20; // 20%
            bonus = "FREE 1 BOBA MILK TEA";
        } else {
            diskon = 0;
        }
    } else if (jenis_barang == 2){
        harga_satuan = 55000;
        nama_barang = "TINTA EPSON merk INKQ";
        total_harga = harga_satuan * jumlah_barang;

        if (jumlah_barang >= 3 && jumlah_barang <= 10){ // diantara 3 dan 5 , {3,4,5}
            diskon = 0.10; // 10%
            bonus = "FREE 1 BOTOL TINTA EPSON (100ML)";
        } else if ( jumlah_barang >= 11) {
            diskon = 0.20; // 20 %
            bonus = "FREE 1 PACK + POTONGAN 2000";
            total_harga -= 2000; // total_harga = total_harga - 2000
        } else {
            diskon = 0;
        }
    } else if (jenis_barang == 3){
        harga_satuan = 180000;
        nama_barang = "Flash Disk SUNDRIVE 64 GB";
        total_harga = harga_satuan * jumlah_barang;

        if (total_harga >= 1800000 && total_harga < 5000000){ // diantara 3 dan 5 , {3,4,5}
            harga_diskon = 250000;
            harga_akhir = total_harga - harga_diskon;
            diskon = harga_diskon / total_harga;
            bonus = "FREE 1 MINI BAG";
        } else if ( total_harga >= 5000000) {
            harga_diskon = 750000;
            harga_akhir = total_harga - harga_diskon;
            diskon = harga_diskon / total_harga;
            bonus = "FREE 1 REGULAR BAG DAN 1 GANTUNGAN KUNCI";
        } else {
            diskon = 0;
            harga_akhir = total_harga;
            harga_diskon = 0;
        }
    } else {
        harga_satuan = 0;
        total_harga = 0;
        diskon = 0;
        harga_diskon = 0;
        harga_akhir = 0;
    }

    if (jenis_barang != 3) { // akan di jalankan jika input 1,2 .... 4, dst
        harga_diskon = diskon * total_harga;
        harga_akhir = total_harga - harga_diskon;
    }

    cout << "Nama Barang    : " << nama_barang << endl;
    cout << "Jumlah Barang  : " << jumlah_barang << endl;
    cout << "Total Harga    : Rp." << total_harga << endl;
    cout << "Diskon         : Rp." << diskon * 100 << "%" << endl;
    cout << "Harga Diskon   : Rp." << harga_diskon << endl;
    cout << "Harga Akhir    : Rp." << harga_akhir << endl;
    cout << "Bonus          : " << bonus << endl;


    return 0;
}
