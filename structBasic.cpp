#include <iostream>
using namespace std;

struct makanan{  // deklarasi struct 
	string nama; // member (string)
	string asal; // member (string)
	string rasa; // member (string)
};


int main(){
	
	// membuat struct sederhana : Makanan Daerah
	
	makanan lumpia;
	
	// struct makanan 
	lumpia.nama = "Lumpia Sedap";
	lumpia.asal = "Jawa Tengah";
	lumpia.rasa = "Rasa garing di luar dan lembut di dalam! Mantap";
	
	// output
	cout << "Makanan Daerah 1 : " << endl;
	cout << lumpia.nama << endl;
	cout << lumpia.asal << endl;
	cout << lumpia.rasa << endl;
	
	return 0;
}
