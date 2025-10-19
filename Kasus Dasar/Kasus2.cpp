#include <iostream>
#include <cmath>

using namespace std; //agar tidak selalu menuliskan std:: pada coding kita

int main() { //fungsi main

    float a = 10;
    float b = 6;

    cout<<"Kasus 1"<<endl;
    cout<<"================"<<endl;
    cout<<endl;

    cout<<"Masukkan Angka Pertama (default 10): ";
    cin>>a;
    cout<<endl;
    cout<<"Masukkan Angka Kedua (default 6): ";
    cin>>b;
    cout<<endl;

    cout<<"Hasil Penjumlahan:"<<a+b<<endl;
    cout<<endl;
    cout<<"Hasil Pengurangan:"<<a-b<<endl;
    cout<<endl;
    cout<<"Hasil Perkalian:"<<a*b<<endl;
    cout<<endl;
    cout<<"Hasil Pembagian:"<<a/b<<endl;
    cout<<endl;

    return 0;
}
