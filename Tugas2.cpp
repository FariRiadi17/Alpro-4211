//judul  : Fungsi Max, Min, MaxArray, MinArray, IsEven, IsOdd, IsFactor, SumEven, SumOdd

#include <iostream>
using namespace std;

//deklarasi
int maxarray(int arr[],int n);
int minarray(int arr[],int n);
bool isgenap (int a);
bool isganjil (int a);
bool isfactor(int a,int b);
int sumgenap (int arr[],int n);
int sumganjil (int arr[],int n);

int main()
{
    //perbandingan 2 bilangan
    int a,b;
    cout << "Masukkan bilangan pertama : ";
    cin >> a;
    cout << "Masukkan bilangan kedua : ";
    cin >> b;
    cout << endl;

    cout << "Bilangan terbesarnya  = " << max(a,b) << endl;
    cout << "Bilangan terkecilnya = " << min(a,b) << endl;
    cout << endl;

    //memasukkan bilagan array
    int i;
    cout << "Masukkan jumlah array : " ;
    cin >> i;
    int arr[i];
    cout << "Masukkan array bilangan : " << endl;
    for(int j=0 ; j<i ; j++ )
    {
        cin >> arr[j];
    }
    cout << endl;

    cout << "Yang terbesar dalam array tersebut adalah : " << maxarray( arr , i ) << endl;
    cout << "Yang terkecil dalam array tersebut adalah : " << minarray( arr , i ) << endl;
    cout << "Jumlah pada bilangan genap saja pada array : " << sumgenap( arr , i ) << endl; //menambah bilangan genap saja pada array
    cout << "Jumlah pada bilangan ganjil saja pada array : " << sumganjil( arr , i ) << endl; //menambah bilangan ganjil saja pada array
    cout << endl;

    //apa ini bilangan genap / ganjil ?
    int gnp;
    cout << "Masukkan bilangan genap / ganjil : " ;
    cin >> gnp;
    cout << "1 = Benar & 0 = Salah " << endl;
    cout << "Apakah Genap ? : " << isgenap( gnp ) << endl;
    cout << "Apakah Ganjil ? : " <<  isganjil( gnp ) << endl;

    //bilangan faktor
    //disini saya menggunakan inputan pada max dan min
    cout << "Apakah " << b << " adalah faktor dari " << a << " : " << isfactor(a,b) << endl;


    return 0;
}

//definisi fungsi
int maxarray(int arr[],int n)
{
    int temp = arr[0];
    for( int i = 0; i < n; i++ )
    {
        if ( arr[i] > temp )
        {
            temp = arr[i];
        }
    }
    return temp;
}

int minarray(int arr[],int n)
{
    int temp = arr[0];
    for( int i = 0; i < n; i++ )
    {
        if ( arr[i] < temp )
        {
            temp = arr[i];
        }
    }
    return temp;
}

bool isgenap (int a)
{
    if (a % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool isganjil (int a)
{
    if (a % 2 != 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool isfactor(int a, int b)
{
    if( a % b == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int sumgenap (int arr[],int n)
{
    int sum = 0;
    for(int i = 0; i < n ; i++)
    {
        if (arr[i] % 2 == 0)//jika bilangan genap
        {
            sum += arr[i];
        }
    }
    return sum;
}

int sumganjil (int arr[],int n)
{
    int sum = 0;
    for(int i = 0; i < n ; i++)
    {
        if (arr[i] % 2 != 0)//jika bilangan ganjil
        {
            sum += arr[i];
        }
    }
    return sum;
}
