#include <iostream>
using namespace std;

int penjumlahan(int a, int b);
int pengurangan(int a, int b);
int perkalian (int a, int b);
float pembagian (int a, int b);
int pangkat (int a, int b);

int penjumlahan(int a, int b){
    if(b == 0){
        return a;
    }
    else
    return 1 + penjumlahan(a, b-1);
}
int pengurangan(int a, int b){
    if(a == 0){
        return b;
    }

    else
    return a - pengurangan(a-a, b);
}
int perkalian(int a, int b){
    if(b == 1){
        return a;
    }
    else if(b== 0){
        return 0;
    }
    else
    return b * perkalian(a, b-1);

}
float pembagian(int a, int b){
    if(a==1){
        return b;
    }
    else if(a==0){
       return 0;
    }
    else
    return a / pembagian(a/a, b);
}
int pangkat (int a, int b){
    if(b==0){
        return 1;
    }
    else
    return a * pangkat(a, b-1);
}
int main(){
    cout << "Penjumlahan 2 bilangan = "<< penjumlahan (7, 9)    <<endl;
    cout << "Pengurangan 2 bilangan = "<< pengurangan (9, 2)    <<endl;
    cout << "Perkalian   2 bilangan = "<< perkalian   (12, 2)   <<endl;
    cout << "Pembagian   2 bilangan = "<< pembagian   (18, 2)   <<endl;
    cout << "Perpangkatan bilangan  = "<< pangkat     (3, 2);
}
