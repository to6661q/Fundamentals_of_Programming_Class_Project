/*
Directed by 	: Toriq AsSyarif
Tangga 			: 8-11-2018

Fungsi cari nilai array 2 dimensi,program akan mencari nilai array,jika nilai inputan dari user 
ada di dalam array,maka akan ada output "Nilai ada di dalam array",begitupun sebaliknya.

*/

#include <iostream>
using namespace std;

void isiArray(int xArr[][100], int a, int b)
{
	int i, j, c;
	for (i = 0; i < a; i++)
	{
		for (j = 0; j < b; j++)
		{
			cout << "Masukkan nilai bilangan array [" << i << "][" << j << "] : "; cin >> xArr[i][j];
		}
	}
}

int cariArray(int xArr[][100], int a, int b, int xData)
{
	int i, j, c;
	int status = -1;
	for (i = 0; i < a; i++)
	{
		for (j = 0; j < b; j++)
		{
			if (xData == xArr[i][j])
			{
				status = 1;
			}
		}
	}
	return status;
}

int cariBaris(int xArr[][100], int a, int b, int xData)
{
	int i, j, c, sBaris;
	for (i = 0; i < a; i++)
	{
		for (j = 0; j < b; j++)
		{
			if (xData == xArr[i][j])
			{
				sBaris = i;
			}
		}
	}
	return sBaris;
}

int cariKolom(int xArr[][100], int a, int b, int xData)
{
	int i, j, c, sKolom;
	for (i = 0; i < a; i++)
	{
		for (j = 0; j < b; j++)
		{
			if (xData == xArr[i][j])
			{
				sKolom = j;
			}
		}
	}
	return sKolom;
}

int main()
{
	int a, b, xData, xStatus, xBaris, xKolom;
	cout << "Masukkan Array Baris : "; cin >> a;
	cout << "Masukkan Array Kolom : "; cin >> b;
	int xArr[100][100];
	isiArray(xArr, a, b);
	cout << "Cari Array : "; cin >> xData;
	xStatus = cariArray(xArr, a, b, xData);
	xBaris = cariBaris(xArr, a, b, xData);
	xKolom = cariKolom(xArr, a, b, xData);
	cout <<"\n\n";
	if (xStatus == -1)
	{
		cout << "Nilai tersebut tidak ada di dalam array";
	}
	else
	{
		cout << "Nilai " << xData << " ada di dalam array"<<endl;
		cout << "Nilai tersebut ada pada array ke - [" << xBaris << "][" << xKolom << "]";
	}
}
