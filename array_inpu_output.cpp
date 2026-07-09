#include <iostream>
using namespace std;

//
/*
Nama        : Toriq As-Syarif
Tanggal     : 25 Oktober 2018
Program procedure untuk mengisi variable a larik dari 0 s.d n-1
menggunakan looping for dan masukan nilai n dari pengguna.
*/
//

void isiArray (int a[], int n)//prosedur untuk mengisi nilai array//
{
    int k;
    for (k=0; k<=n-1; k++)
    {
        cout<<"Masukan nilai bilangan Array Ke "<<k<<" : ";
        cin>>a[k];
        cout<<endl;
    }
}
void cetakArray (int a[], int n)//prosedur untuk mencetak nilai array//
{
    int k;
    for (k=0; k<=n-1; k++)
    {
        if (k==n-1)
        {
            cout<<a[k];
        }
        else
        {
            cout<<a[k]<<" ";
        }
    }
}
int main()
{
    int n;
    int o[100];
    int p[100];

    cout<<"PROGRAM PROSEDUR UNTUK MENGISI DAN MENCETAK NILAI ARRAY"<<endl<<endl;
    cout<<"Masukan cacah array   : ";
    cin>>n;
    cout<<"Masukan elemen bilangan array a"<<endl;
    isiArray(o,n);
    cout<<"Masukan elemen bilangan array b"<<endl;
    isiArray(p,n);
    cout<<"Isi bilanga array a adalah : ";
    cetakArray(o,n);
    cout<<endl;
    cout<<"Isi bilangan array b adalah : ";
    cetakArray(p,n);
    cout<<endl;
}
