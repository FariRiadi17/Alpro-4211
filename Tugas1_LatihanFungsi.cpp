#include <iostream>
using namespace std;

int tambah(int a, int b)
{
    return a+b;
}
int kurang(int a, int b)
{
    return a-b;
}
int jumlah (int a[]) {
    int z = 0;
    for (int i = 0;i < 5;i++) {
        z = z + a[i];
    }
    return z;
}

float rata (int a[]) {
    float z = 0;
    for (int i = 0;i < 5;i++) {
        z = z + a[i];
    }
    float y = z / 5;
    return y;
}

int main()
{
    cout << "Pertambahan" <<endl;
    int a,b;
    cout << "Masukkan Nilai Pertama = " <<endl;
    cin >> a;
    cout << "Masukkan Nilai Kedua = " <<endl;
    cin >> b;
    cout << "Hasilnya adalah = " << tambah(a,b) <<endl<<endl;

    cout << "Pengurangan" <<endl;
    int q,w;
    cout << "Masukkan Nilai Pertama = " <<endl;
    cin >> q;
    cout << "Masukkan Nilai Kedua = " <<endl;
    cin >> w;
    cout << "Hasilnya adalah = " << kurang(q,w) <<endl<<endl;

    cout << "Penjumlahan 5 angka menggunakan fungsi" << endl;
    cout << "Masukkan 5 angka" << endl;
    int arr[5], h = 0;
    for (int i = 0;i < 5;i++) {
        cin >> arr[i];
    }
    cout << "Jumlah bilangan tersebut adalah = " << jumlah(arr) << endl;

    cout << "Rata-rata bilangan tersebut adalah = " << rata(arr) << endl;
}
