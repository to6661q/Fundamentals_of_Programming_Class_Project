#include <iostream>
using namespace std;

int main(){
	string a;
	int cek;
	do{
		cek = 1;
		cout << "Masukkan angka : "; getline(cin, a);
		for (int i = 0; i < a.length(); i++){
			if (a[i] != '0' && a[i] != '1' && a[i] != '2' && a[i] != '3' && a[i] != '4' && a[i] != '5' && a[i] != '6' && a[i] != '7' && a[i] != '8' && a[i] != '9' && a[i] != '\0' && a[i] != ' '){
				cout << "Harus angka" << endl;
				cek = 2;
				break;
			}
		}
		if (cek == 1){
		cout << "Angka yang diinput : " << a << endl;
		}
	}while (true);
}
