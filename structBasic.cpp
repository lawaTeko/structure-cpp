// lawaTeko, Kairatu
// struktur sederhana, contoh struktur mengenai Makanan Daerah
#include <iostream>
#include <string>
using namespace std;

struct makanan{  // deklarasi struct 
	string nama_makanan; // member (string)
	string asal_makanan; // member (string)
	string rasa_makanan; // member (string)
};

struct minuman{
	string nama_minuman;
	string asal_minuman; 
	string rasa_minuman; 
};


int main(){
	
	// membuat struct sederhana : Makanan Daerah dan Minuman
	makanan lumpia;
	minuman esCendol;
	
	// struct makanan 
	lumpia.nama_makanan = "Lumpia Sedap";
	lumpia.asal_makanan = "Jawa Tengah";
	lumpia.rasa_makanan = "Rasa garing di luar dan lembut di dalam! Mantap";

	// struct minuman 
	esCendol.nama_minuman = "Es Cendol";
	esCendol.asal_minuman = "Jawa Barat";
	esCendol.rasa_minuman = "Manis dan Menyegarkan";

	
	// output
	cout << "Makanan Daerah 1 : " << endl;
	cout << lumpia.nama_makanan << endl;
	cout << lumpia.asal_makanan << endl;
	cout << lumpia.rasa_makanan << endl;

	cout << endl;
	
	cout << "Minuman Daerah 2 : " << endl;
	cout << esCendol.nama_minuman << endl;
	cout << esCendol.asal_minuman << endl;
	cout << esCendol.rasa_minuman << endl;
	
	return 0;
}
