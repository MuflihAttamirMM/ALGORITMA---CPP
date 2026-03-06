#include <iostream>
using namespace std;

int a[20];
int n;

void input() 
{
    while (true)
    {
        cout << "Masukkan Panjang Array: ";
        cin >> n;

        if (n <= 20)
            break;
    }
        else
    {
            cout << "ERROR : Maksimum Panjang Array adalah 20\n";
    }
    cout << endl;
    cout << "=====================" << endl;
    cout << "Masukkan Elemen Array" << endl;
    cout << "=====================" << endl;