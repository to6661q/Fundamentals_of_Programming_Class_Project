#include <iostream> 
using namespace std;

int main(){
	char a;
	while(true){
		cout << "Input : "; cin >> a;
		if (a != '0' && a != '1' && a != '2' && a != '3' && a != '4' && a != '5' && a != '6' && a != '7' && a != '8' && a != '9'){
			cout << "Harus angka" << endl;
		}else{
			cout << "yg diinput : " << a - '0' << endl;
		}
	}
}
