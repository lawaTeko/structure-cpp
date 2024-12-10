// lawaTeko, Kairatu
// menggunakan VOID
#include <iostream>
using namespace std;

/*
	Struct adalah : sebuah metode pengumpulan berbagai
	jenis data di bawah satu data.
*/

void namaMakanan(){
	struct makanan{
		string nama;
		string warna;
		string rasa;
		int harga;
		
		
	};
	
	makanan coklat;
	
	coklat.nama = "coklat silverqueen";
	coklat.warna = "coklat kegelap-gelapan";
	coklat.rasa = "manis dan ada kacangnya";
	coklat.harga = 34000;
	
	cout << "nama-nya " << coklat.nama << endl;
	cout << "warna-nya " << coklat.warna << endl;
	cout << "rasa-nya " << coklat.rasa << endl;
	cout << "harga-nya Rp. " << coklat.harga << endl;
	
		
}

int main(){
	
	namaMakanan();
	
	return 0;
}


















