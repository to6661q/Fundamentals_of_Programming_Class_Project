/*Luas Segitiga*/

#include<cstdlib>
#include<iostream>

using namespace std;
int main(int argc, char*argv[])
{
	int alas, tinggi;
	float luas;
	cout<<"Menghitung Luas Segitiga"<<endl;
	cout<<endl;
	cout<<"Masukan Nilai Alas: ";
	cin>>alas;
	cout<<"Masukan Nilai Tinggi: ";
	cin>>tinggi;
	luas=(alas*tinggi)*0.5;
	cout<<endl<<endl;
	cout<<"Luas Segitiga Adalah: "<<luas<<endl;
	cout<<endl;
	system("PAUSE")
	;return EXIT_SUCCESS;
}
