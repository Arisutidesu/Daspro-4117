#include <iostream>

using namespace std;

int main()
{
    /*
Loop 1
    int i, j;
    for(i = 100, j = 1; j <= 100; i--, j++) {
    cout << "i="<< i << " " << "dan" << " " << "j=" << j << endl;
    }
    */
    /*
Loop 2
    int i;
    for(i = 100; i > 0; i--) {
        if(i % 2 == 1) {
            continue;
        }
    cout << "Nilai Genap Adalah " << i << endl;
    }
    */
    /*
Loop 3
    int i;
    for(i = 100; i > 0; i--) {
        if(i == 54) {
            break;
        }
    cout << i << endl;
    }
    */
    /*
    int n, i;
    float sum = 0.0, avg;
    n = size of (i) / size of (i[0]);
    for(i = 0; i < 21; i++) {
        for(i = 0; i < n; i++)
            sum += num[i];
        }
    avg = sum / n; {
        cout << i << endl;
    }
    */
    /*
Loop 4
    int limit,input;
    int sum=0;
    int i;
    std::cout << "Masukkan ada berapa angka: ";
    std::cin >> limit;
    for(i = 0; i < limit; i++)
    {
        std::cout << "Masukkan angka: ";
        std::cin >> input;
        sum+=input;
    }
    std::cout << "Jumlah angka: " << sum;
    std::cout << std::endl;
    std::cout << "Rata-rata: " << sum / i;
    */
    /*
Loop 5
    int i = 0;
    while(i != -99){
    cout << "Masukkan nilai Anda ";
    cin >> i;
    }
    */
    /*
Loop 6
    int limit,input;
    int i;
    std::cout << "Masukkan ada berapa angka: ";
    std::cin >> limit;
    int min = 0;
    int max = 0;
    for(i=0;i<limit;i++)
    {
    std::cout << "Masukkan angka: ";
    std::cin >> input;

    if(i == 0)
    {
    min = input;
    max = input;
    }
    else
    {
    if(input < min)
    min = input;

    if(input > max)
    max = input;
    }
    };
    std::cout <<"Max: " << max << std::endl;
    std::cout <<"Min: " << min << std::endl;
    */
    return 0;
}
