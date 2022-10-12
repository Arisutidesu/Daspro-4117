#include <iostream>

using namespace std;

int main()
{
    int num, first = 0, second = 1, next;

    for(int i=0; i<12; i++)
    {
        cout << first << endl;
        next = first + second;
        first = second;
        second = next;
    }
    return 0;
}
