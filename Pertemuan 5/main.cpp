#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    printf("Hello world!");

    int a;
    cout << "\nMasukkan Angka: " << endl;
    cin >> a;
    cout << "Angka Anda: " << a;

    cout << "\nMasukkan Angka kedua: " << endl;
    scanf("%d", &a);
    printf("Angka Kedua Anda: %d", a);

    float p;
    float r;
    float hasil;

    p = 22/7;
    r = 14;

    cout << p * r * r << endl;
    hasil = p * r * r;
    cout << "Hasil luas lingkaran: " << hasil;
    return 0;

}
