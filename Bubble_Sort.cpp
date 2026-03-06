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

        // Ditambahkan n > 0 agar panjang array tidak minus/nol
        if (n > 0 && n <= 20) 
            break;
        else
        {
            cout << "ERROR : Panjang Array harus antara 1 sampai 20\n";
        }
    }
    cout << endl;
    cout << "=====================" << endl;
    cout << "Masukkan Elemen Array" << endl;
    cout << "=====================" << endl;
    
    for (int i = 0; i < n; i++) 
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
        // PERBAIKAN: Menambahkan a[i] dan endl
        cout << "Data Ke -" << i + 1 << " : " << a[i] << endl; 
    }
}

void bubbleSort()
{
    cout << "\n=================" << endl;
    cout << "\nHasil Setiap Pass" << endl;
    cout << "\n=================" << endl;
    for (int pass = 1; pass < n; pass++)
    {
        for (int j = 0; j <= n - 1 - pass; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
        cout << "pass ke -" << pass << ":\t";
        for (int k = 0; k < n; k++)
        {
            // PERBAIKAN: Mengganti /t menjadi \t
            cout << a[k] << "\t"; 
        }
        cout << endl;
    }
}

int main()
{
    input();
    bubbleSort();
    display();

    return 0;
}