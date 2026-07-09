#include <iostream>
using namespace std;
//
/*
Nama        : Toriq As-Syarif
Tanggal     : 25 Oktober 2018
Procedure untuk mengisi, mencetak, serta membalik nilai array.
}
*/
//

void isiArray (int a[], int n)//prosedur untuk mengisi nilai array//
{
    int k;
    for (k=0; k<=n-1; k++)
    {
        cout<<"Masukan Nilai Array Ke "<<k<<" : ";
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
void balikArray (int a[], int n)//prosedur untuk menukar nilai array//
{
    int k;
    int t = n-1;
    int d[n];
    for (k=0; k<=n-1; k++)
    {
        d[k]=a[k];
    }
    for (k=0; k<=n-1; k++)
    {
        a[k]=d[t];
        t--;
    }
}
int main()
{
    int n;
    int o[100];
    int p[100];

    cout<<"PROGRAM PROSEDUR UNTUK MENGISI, MENCETAK, DAN MEMBALIK NILAI ARRAY"<<endl<<endl;
    cout<<"Masukan cacah array   : ";
    cin>>n;
    cout<<"Masukan elemen bilangan array a"<<endl;
    isiArray(o,n);
    cout<<"Masukan element bilangan array b"<<endl;
    isiArray(p,n);
    cout<<"Isi array bilangan a adalah : ";
    cetakArray(o,n);
    cout<<endl;
    cout<<"Isi array bilangan b adalah : ";
    cetakArray(p,n);
    cout<<endl<<endl;

    cout<<"Membalik nilai bilangan array a : ";
    balikArray(o,n);
    cetakArray(o,n);
    cout<<endl<<endl;

    cout<<"Membalik nilai bilangan array b : ";
    balikArray(p,n);
    cetakArray(p,n);
    cout<<endl<<endl;
}
