#include <iostream>
using namespace std;

void genapkecil(int arr[], int n);
string ganjil(int arr[], int n);
void quicksort(int Arr[], int left, int right);
void BubbleSort(int myarr[], int n);
int *SortA(int myarr[], int n);
int main()
{
    int arr[] = {6, 7, 4, 3, 2};
    int Arr[] = {5, 4, 9, 2, 7};
    int myarr[] = {1, 9, 5, 3, 8};
    int n = sizeof(arr) / sizeof(*arr);
    //Tugas 1
    cout << "Array :";
    for(int i=0; i < n; i++){
        cout <<arr[i] << " ";
    }cout << endl;
    genapkecil(arr, n);
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 1)
        {
            cout << arr[i] << " " << ganjil(arr, n) << endl;
        }
    }
    cout << endl;
    //Tugas 2
    cout << "Menggunakan QuickSort :" << endl;
    cout << "Sebelum : ";
    for (int i = 0; i < n; i++)
    {
        cout << Arr[i] << " ";
    }
    cout << endl;
    cout << "Sesudah : ";
    quicksort(Arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << Arr[i] << " ";
    }
    cout << endl << endl;

    cout << "Menggunakan BubbleSort : " << endl;
    cout << "Sebelum : ";
    BubbleSort(myarr, n);
    cout << "\nSesudah : ";
    *SortA(myarr, n);
    BubbleSort(myarr, n);
}

void genapkecil(int arr[], int n)
{
    int minimal = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            if (arr[i] < minimal)
            {
                minimal = arr[i];
            }
        }
    }
    cout << "Angka genap terkecil adalah " << minimal << endl;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == minimal)
        {
            cout << "ketemu di index : " << i;
        }
    }
}
string ganjil(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        return "Bilangan termasuk ganjil";
    }
}

void quicksort(int Arr[], int left, int right)
{
    int i = left;
    int j = right;
    int tmp;
    int pivot = Arr[left];

    // partition
    while (i <= j)
    {
        while (Arr[i] > pivot)
        {
            i++;
        }
        while (Arr[j] < pivot)
        {
            j--;
        }
        if (i <= j)
        {
            tmp = Arr[i];
            Arr[i] = Arr[j];
            Arr[j] = tmp;
            i++;
            j--;
        }
    }
    // rekursif
    if (left < j)
        quicksort(Arr, left, j);
    if (i < right)
        quicksort(Arr, i, right);
}

void BubbleSort(int myarr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << myarr[i]<< " ";
    }
}
int *SortA(int myarr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (myarr[i] > myarr[j])
            {
                int temp = myarr[i];
                myarr[i] = myarr[j];
                myarr[j] = temp;
            }
        }
    }
    return myarr;
}
