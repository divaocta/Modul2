#include <iostream>

using namespace std;

int main()
{
    const int maksSize = 10;
    int nomor[maksSize];
    int nomorGanjil[maksSize], nomorGenap[maksSize];
    int jmlGanjil = 0, jmlGenap = 0;

    cout << "Data Array : ";

    for (int i = 0; i < maksSize; ++i)
    {
        cin >> nomor[i];

        if (nomor[i] % 2 == 0)
        {
            nomorGenap[jmlGenap] = nomor[i];
            jmlGenap++;
        }
        else
        {
            nomorGanjil[jmlGanjil] = nomor[i];
            jmlGanjil++;
        }
    }

    cout << "Nomor Genap : ";
    for (int i = 0; i < jmlGenap; i++)
    {
        cout << nomorGenap[i] << " ";
    }

    cout << endl;

    cout << "Nomor Ganjil : ";
    for (int i = 0; i < jmlGanjil; i++)
    {
        cout << nomorGanjil[i] << " ";
    }

    cout << endl;

    return 0;
}