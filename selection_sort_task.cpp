/*
Program untuk meminta input data mahasiswa dan menampilkannya berdasarkan urut NIM atau IPK baik menaik atau menurun menggunakan selection sort
Oleh :
- Fikri
- Rahmadan
- Rizky
- Toriq
- Syaiful
TI UIN 2018 Kelas B
Tanggal : 27 November 2018
*/
#include <iostream>
using namespace std;

/*
Struct untuk menyimpan data yang dimiliki oleh mahasiswa
*/
struct mahasiswa
{
	string nama;
	string jurusan;
	int jk;
	int nim;
	float ipk;
};

/*
Prosedur untuk meminta input data mahasiswa
*/
void isiMahasiswa(mahasiswa m[], int n);
/*
Prosedur untuk mencetak data mahasiswa
*/
void cetakMahasiswa(mahasiswa m[], int n);
/*
Prosedur untuk mengurutkan mahasiswa berdasarkan IPK secara ascending
*/
void urutIPKAsc(mahasiswa m[], int n);
/*
Prosedur untuk mengurutkan mahasiswa berdasarkan IPK secara descending
*/
void urutIPKDesc(mahasiswa m[], int n);
/*
Prosedur untuk mengurutkan mahasiswa berdasarkan NIM secara ascending
*/
void urutNIMAsc(mahasiswa m[], int n);
/*
Prosedur untuk mengurutkan mahasiswa berdasarkan NIM secara descending
*/
void urutNIMDesc(mahasiswa m[], int n);
/*
Prosedur untuk menukar int
*/
void tukarfloat(float *a, float *b);
/*
Prosedur untuk menukar float
*/
void tukarint(int *a, int *b);
/*
Prosedur untuk menukar string
*/
void tukarstring(string *a, string *b);

int main()
{
	int n, menu1, menu2, menu3;
	cout << "Masukkan jumlah mahasiswa : "; cin >> n;
	cout << "=================================" << endl;
	mahasiswa m[n];
	isiMahasiswa(m, n);
	do
	{
		cout << "Tampilkan mahasiswa berdasarkan : \n[1]IPK\n[2]NIM\nInput : "; cin >> menu1;
		if (menu1 != 1 && menu1 != 2)
		{
			cout << "Pilihan [" << menu1 << "] tidak tersedia" << endl;
		}
		cout << "=================================" << endl;
	}
	while (menu1 != 1 && menu1 != 2);
	if(menu1 == 1)
	{
		do
		{
			cout << "Tampilkan mahasiswa berdasarkan IPK : \n[1]Ascending\n[2]Descending\nInput : "; cin >> menu2;
			if (menu2 != 1 && menu2 != 2)
			{
				cout << "Pilihan [" << menu2 << "] tidak tersedia" << endl;
			}
			cout << "=================================" << endl;
		}
		while (menu2 != 1 && menu2 != 2);
		if (menu2 == 1)
		{
			cout << "Tampilan mahasiswa berdasarkan IPK (Ascending) : " << endl;
			urutIPKAsc(m, n);
			cetakMahasiswa(m, n);	
		}else if(menu2 == 2)
		{
			cout << "Tampilan mahasiswa berdasarkan IPK (Descending) : " << endl;
			urutIPKDesc(m, n);
			cetakMahasiswa(m, n);
		}
	}else if(menu1 == 2)
	{
		do
		{
			cout << "Tampilkan mahasiswa berdasarkan NIM : \n[1]Ascending\n[2]Descending\nInput : "; cin >> menu3;
			if (menu3 != 1 && menu3 != 2)
			{
				cout << "Pilihan [" << menu3 << "] tidak tersedia" << endl;
			}
			cout << "=================================" << endl;
		}
		while (menu3 != 1 && menu3 != 2);
		if (menu3 == 1)
		{
			cout << "Tampilan mahasiswa berdasarkan NIM (Ascending) : " << endl;
			urutNIMAsc(m, n);
			cetakMahasiswa(m, n);
		}else if (menu3 == 2)
		{
			cout << "Tampilan mahasiswa berdasarkan NIM (Descending) : " << endl;
			urutNIMDesc(m, n);
			cetakMahasiswa(m, n);
		}
	}
	return 0;
}

/*
Prosedur untuk meminta input data mahasiswa
*/
void isiMahasiswa(mahasiswa m[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Masukkan NIM mahasiswa " << i+1 << " : "; cin >> m[i].nim;
		cout << "Masukkan nama mahasiswa " << i+1 << " : "; cin.ignore(); getline (cin, m[i].nama);
		do
		{
			cout << "Masukkan jenis kelamin mahasiswa " << i+1 << " :\n[1]Laki - laki\n[2]Perempuan\nInput : "; cin >> m[i].jk;
			if (m[i].jk != 1 && m[i].jk != 2)
			{
				cout << "Pilihan [" << m[i].jk << "] tidak tersedia" << endl;
				cout << "---------------------------------" << endl;
			}
		}
		while (m[i].jk != 1 && m[i].jk != 2);
		cout << "Masukkan IPK mahasiswa " << i+1 << " : "; cin >> m[i].ipk;
		cout << "Masukkan jurusan mahasiswa " << i+1 << " : "; cin.ignore(); getline(cin, m[i].jurusan);
		cout << "=================================" << endl;
	}
}

/*
Prosedur untuk mencetak data mahasiswa
*/
void cetakMahasiswa(mahasiswa m[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Identitas Mahasiswa " << i +1 << " : " << endl;
		cout << "Nama : " << m[i].nama << endl;
		if (m[i].jk == 1)
		{
			cout << "Jenis kelamin : Laki - laki" << endl;
		}else if (m[i].jk == 2)
		{
			cout << "Jenis kelamin : Perempuan" << endl;
		}
		cout << "Jurusan : " << m[i].jurusan << endl;
		cout << "NIM : " << m[i].nim << endl;
		cout << "IPK : " << m[i].ipk << endl;
		if (i != n-1)
		{
			cout << "=================================" << endl;
		}else if (i < n)
		{
			cout << "=================================";
		}
	}
}

/*
Prosedur untuk mengurutkan data mahasiswa berdasarkan IPK secara ascending
*/
void urutIPKAsc(mahasiswa m[], int n)
{
	int i, iMin, j;
	for (i = 0; i < n-1; i++)
	{
		iMin = i;
		for (j = (i+1); j < n; j++)
		{
			if (m[iMin].ipk > m[j].ipk)
			{
				iMin = j;
			}
		}
		if (iMin != i)
		{
			tukarint(&m[iMin].nim, &m[i].nim);
			tukarstring(&m[iMin].nama, &m[i].nama);
			tukarint(&m[iMin].jk, &m[i].jk);
			tukarstring(&m[iMin].jurusan, &m[i].jurusan);
			tukarfloat(&m[iMin].ipk, &m[i].ipk);
		}
	}
}

/*
Prosedur untuk mengurutkan data mahasiswa berdasarkan NIM secara ascending
*/
void urutNIMAsc(mahasiswa m[], int n)
{
	int i, iMin, j;
	for (i = 0; i < n-1; i++)
	{
		iMin = i;
		for (j = (i+1); j < n; j++)
		{
			if (m[iMin].nim > m[j].nim)
			{
				iMin = j;
			}
		}
		if (iMin != i)
		{
			tukarint(&m[iMin].nim, &m[i].nim);
			tukarstring(&m[iMin].nama, &m[i].nama);
			tukarint(&m[iMin].jk, &m[i].jk);
			tukarstring(&m[iMin].jurusan, &m[i].jurusan);
			tukarfloat(&m[iMin].ipk, &m[i].ipk);
		}
	}
}

/*
Prosedur untuk mengurutkan data mahasiswa berdasarkan IPK secara descending
*/
void urutIPKDesc(mahasiswa m[], int n)
{
	int i, iMin, j;
	for (i = 0; i < n-1; i++)
	{
		iMin = i;
		for (j = (i+1); j < n; j++)
		{
			if (m[iMin].ipk < m[j].ipk)
			{
				iMin = j;
			}
		}
		if (iMin != i)
		{
			tukarint(&m[iMin].nim, &m[i].nim);
			tukarstring(&m[iMin].nama, &m[i].nama);
			tukarint(&m[iMin].jk, &m[i].jk);
			tukarstring(&m[iMin].jurusan, &m[i].jurusan);
			tukarfloat(&m[iMin].ipk, &m[i].ipk);
		}
	}
}

/*
Prosedur untuk mengurutkan data mahasiswa berdasarkan NIM secara descending
*/
void urutNIMDesc(mahasiswa m[], int n)
{
	int i, iMin, j;
	for (i = 0; i < n-1; i++)
	{
		iMin = i;
		for (j = (i+1); j < n; j++)
		{
			if (m[iMin].nim < m[j].nim)
			{
				iMin = j;
			}
		}
		if (iMin != i)
		{
			tukarint(&m[iMin].nim, &m[i].nim);
			tukarstring(&m[iMin].nama, &m[i].nama);
			tukarint(&m[iMin].jk, &m[i].jk);
			tukarstring(&m[iMin].jurusan, &m[i].jurusan);
			tukarfloat(&m[iMin].ipk, &m[i].ipk);
		}
	}
}

/*
Prosedur untuk menukar int
*/
void tukarint(int *a, int *b)
{
	int c;
	c = *a;
	*a = *b;
	*b = c;
}

/*
Prosedur untuk menukar float
*/
void tukarfloat(float *a, float *b)
{
	float c;
	c = *a;
	*a = *b;
	*b = c;
}

/*
Prosedur untuk menukar string
*/
void tukarstring(string *a, string *b)
{
	string c;
	c = *a;
	*a = *b;
	*b = c;
}
