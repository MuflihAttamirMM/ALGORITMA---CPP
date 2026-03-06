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
    
    for (int i = 0; i < n; i++) //i++ / i = i + 1
    {
        cout << "Masukkan Nilai Ke -" << (i + 1) << " : ";
        cin >> a[i];
    }
}

void display ()
{
    cout << endl;
    cout << "=================================" << endl;
    cout << "Elemen Array yang telah diurutkan" << endl;
    cout << "=================================" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Data Ke -" << i + 1 << " : ";
    }
}