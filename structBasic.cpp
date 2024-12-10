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


int main(){
	
	// membuat struct sederhana : Makanan Daerah
	
	makanan lumpia;
	
	// struct makanan 
	lumpia.nama_makanan = "Lumpia Sedap";
	lumpia.asal_makanan = "Jawa Tengah";
	lumpia.rasa_makanan = "Rasa garing di luar dan lembut di dalam! Mantap";
	
	// output
	cout << "Makanan Daerah 1 : " << endl;
	cout << lumpia.nama_makanan << endl;
	cout << lumpia.asal_makanan << endl;
	cout << lumpia.rasa_makanan << endl;
	
	return 0;
}
