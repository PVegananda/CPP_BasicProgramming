#include <iostream>
#include <cmath>

using namespace std; //agar tidak selalu menuliskan std:: pada coding kita

int main() { //fungsi main

    // Kasus Pertama
    cout<<"Kasus Persamaan Matematika"<<endl;
    cout<<"=========================="<<endl;

    cout<<endl;

    float y;
    float a;
    cout<<"Masukkan Nilai dari a = ";
    cin>>a;

    float x = pow(a, 3);
    cout<<"Hasil persamaan dari y = a^3 +7 adalah"<<endl;
    cout<<"y = "<<x<<" + 7 adalah = "<<x+7<<endl;
    cout<<endl;

    system("pause");
    system("cls");

    float b;
    float c;
    cout<<"Kasus Persamaan Matematika Kedua"<<endl;
    cout<<"================================"<<endl;
    cout<<"Masukkan Nilai dari a = ";
    cin>>a;
    cout<<endl;
    cout<<"Masukkan Nilai dari b = ";
    cin>>b;
    cout<<endl;
    cout<<"Masukkan Nilai dari c = ";
    cin>>c;
    cout<<endl;

    cout<<"Hasil persamaan dari y = a^2 + bx + c adalah"<<endl;
    cout<<"y = "<<pow(a, 2)<<" + "<<b<<"x + "<<c<<endl;
    cout<<endl;

    system("pause");
    system("cls");

    float d;
    float e;

    cout<<"Kasus Penjumalahan dan Rata-rata"<<endl;
    cout<<"================================"<<endl;
    cout<<"Masukkan Nilai dari a = ";
    cin>>a;
    cout<<"Masukkan Nilai dari b = ";
    cin>>b;
    cout<<"Masukkan Nilai dari c = ";
    cin>>c;
    cout<<"Masukkan Nilai dari d = ";
    cin>>d;
    cout<<"Masukkan Nilai dari e = ";
    cin>>e;
    cout<<endl;

    cout<<"Hasil dari Pejumlahan Seluruh bilangan = "<<a+b+c+d+e<<endl;
    cout<<"Hasil dari Rata - rata Seluruh bilangan = "<<(a+b+c+d+e)/5<<endl;

    system("pause");
    system("cls");

    cout<<"Konversi Suhu Dari Celcius"<<endl;
    cout<<"=========================="<<endl;

    cout<<"Masukkan Nilai dari Celcius = ";
    cin>>c;

    cout<<endl;
    cout<<"Hasil Konversi Ke Farenheit = "<<(9*c/5)+32<<"F"<<endl;
    cout<<"Hasil Konversi Ke Kelvin = "<<c+273<<"K"<<endl;
    cout<<"Hasil Konversi Ke Reamur = "<<(4*c)/5<<"R"<<endl;

    return 0;
}
