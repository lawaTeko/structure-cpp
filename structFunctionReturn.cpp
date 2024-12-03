#include <iostream>
using namespace std;

Perkenalan(string personalData){
	struct namaOrang{
		string nama;
		string makananKesukaan;
		string gameKesukaan;
		int umur;
	};
	
		namaOrang saya;
		
		saya.nama = "Alex Barbarian";
		saya.makananKesukaan = "Nasi goreng spesial!";
		saya.gameKesukaan = "COC (Clash of Clans)";
		saya.umur = 18;
		
		cout << "Hello, Aku " << saya.nama << endl;
		cout << "Umur aku " << saya.umur << " Tahun" << endl;
		cout << "Aku suka makan " << saya.makananKesukaan << endl;
		cout << "Aku juga suka main game " << saya.gameKesukaan << endl;
		cout << "\nTerimaKasih!" << endl;
		
	return 0;
}

int main (){
	
	string hasil;
	
	Perkenalan(hasil);
	
	
	return 0;
}
