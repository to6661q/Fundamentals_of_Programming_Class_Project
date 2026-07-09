#include <iostream>
using namespace std;

//
/*
Nama        : Toriq As-Syarif
Tanggal     : 25 Oktober 2018
Program procedure untuk menentukan elemen c,
dimana elemenc adalah penjumlahan dari elemen a dan elemen b.
*/
//

void isiArray (int a[], int n)//prosedur untuk mengisi nilai array//
{
    int k;
    for (k=0; k<=n-1; k++)
    {
        cout<<"Masukan nilai bilangan array ke "<<k<<" : ";
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
void tambahArray (int a[], int b[], int c[], int n)//prosedur untuk menjumlahkan nilai array//
{
    int k;
    int jumlah;
    for (k=0; k<=n-1; k++)
    {
        c[k]=a[k]+b[k];
    }
}
int main()
{
    int n;
    int o[100];
    int p[100];
    int q[100];

    cout<<"PROGRAM PROSEDUR UNTUK MENGISI, MENCETAK, DAN MENJUMLAHKAN NILAI BILANGAN ARRAY "<<endl<<endl;
    cout<<"Masukan cacah array   : ";
    cin>>n;
    cout<<"Masukan elemen bilangan array a"<<endl;
    isiArray(o,n);
    cout<<"Masukan elemen bilangan array b"<<endl;
    isiArray(p,n);
    cout<<"Isi bilangan array a adalah : ";
    cetakArray(o,n);
    cout<<endl;
    cout<<"Isi bilangan array b adalah : ";
    cetakArray(p,n);
    cout<<endl;
    cout<<"Hasil penjumlahan dari elemen array a dengan element array b adalah : ";
    tambahArray(o,p,q,n);
    cetakArray(q,n);
    cout<<endl<<endl;
}
