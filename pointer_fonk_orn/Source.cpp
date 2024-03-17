#include<iostream>
using namespace std;

void goruntule(int* diziAdres, int boyut) {
	for (int i = 0; i < boyut; i++) {
		cout << *(diziAdres + i) << endl;
	}
}

void arttir(int* diziAdres, int boyut, int miktar) {
	for (int i = 0; i < boyut; i++) {
		diziAdres[i] += miktar;
		cout << diziAdres[i] << endl;
	}
}

void azalt(int* diziAdres, int boyut, int miktar) {
	for (int i = 0; i < boyut; i++) {
		diziAdres[i] -= miktar;
		cout << diziAdres[i] << endl;
	}
}

int toplam(int* diziAdres, int boyut) {
	int toplam = 0;
	for (int i = 0; i < boyut; i++) {
		toplam += diziAdres[i];
	}
	cout <<"toplam:"<< toplam << endl;
	return toplam;
}

int max(int* diziAdres, int boyut) {
	int buyuk = diziAdres[0];
	for (int i = 0; i < boyut; i++) {
		if (buyuk < diziAdres[i]) {
			buyuk = diziAdres[i];
		}
	}
	cout << "en buyuk:" << buyuk << endl;
	return buyuk;
}

int min(int* diziAdres, int boyut) {
	int kucuk = diziAdres[0];
	for (int i = 0; i < boyut; i++) {
		if (kucuk> diziAdres[i]) {
			kucuk = diziAdres[i];
		}
	}
	cout << "en kucuk:" << kucuk << endl;
	return kucuk;
}

double ortalama(int* diziAdres, int boyut) {
	double ortalama = toplam(diziAdres, boyut) /(double) boyut;
	cout << "ortalama:" << ortalama << endl;
	return ortalama;
}

int main() {
	int sayilar[] = { 10,20,30,40,50 };
	goruntule(sayilar, 5);
	arttir(sayilar, 5, 4);
	azalt(sayilar, 5, 6);
	toplam(sayilar, 5);
	max(sayilar, 5);
	min(sayilar, 5);
	ortalama(sayilar, 5);
	return 0;
}

