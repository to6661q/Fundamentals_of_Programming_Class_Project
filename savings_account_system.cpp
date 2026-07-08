#include <iostream>
#include <string>
using namespace std;

class Tabungan{
	private:
		int noRek;
		string nama;
		int saldo;
	public:
		Tabungan();
		Tabungan(int, string, int);
		void setNoRek(int);
		void setNama(string);
		void setSaldo(int);
		int getSaldo();
		string getNama();
		int getNoRek();
		void display();
		void transfer(Tabungan*, int);
		void ambilUang(int);
		void setor(int);
};

int main(){
	Tabungan t1(12,"Toriq",0);
	Tabungan t2(13,"Assya",10000);
	t1.setor(50000);
	t1.display();
	t2.display();
	t1.transfer(&t2, 25000);
	t1.display();
	t2.display();
	return 0;
}

void Tabungan::setNoRek(int a){
	noRek = a;
}

void Tabungan::setNama(string a){
	nama = a;
}

void Tabungan::setSaldo(int a){
	saldo = a;
}

int Tabungan::getSaldo(){
	return saldo;
}

string Tabungan::getNama(){
	return nama;
}

int Tabungan::getNoRek(){
	return noRek;
}

void Tabungan::display(){
	cout << "NO. Rekening Nasabah : " << getNoRek() << endl;
	cout << "Nama Nasabah : " << getNama() << endl;
	cout << "Saldo rekening nasabah " << getNama() << " : " << getSaldo() << endl;
}

Tabungan::Tabungan(){
	setNama("");
	setSaldo(0);
	setNoRek(0);
}

Tabungan::Tabungan(int a, string b, int c){
	setNoRek(a);
	setNama(b);
	setSaldo(c);
}

void Tabungan::setor(int a){
	saldo += a;
}

void Tabungan::ambilUang(int a){
	if (a > saldo){
		cout << "Saldo anda tidak mencukupi" << endl;
	}else{
		saldo -= a;
	}
}

void Tabungan::transfer(Tabungan *a, int b){
	cout << "---------------------------------------------" << endl;
	cout << "Proses transfer saldo" << endl;
	cout << "---------------------------------------------" << endl;
	if (b > saldo){
		cout << "Saldo anda tidak mencukupi" << endl;
	}else{
		a->setor(b);
		ambilUang(b);
	}
}
