#include <iostream>
#include <string>

using namespace std;

// deklarasi fungsi
void T01();
void T02();

int main(int argc, char** argv) {
	// T01();
	T02();
	return 0;
}

// input nama, sebut hello "nama"
void T02(){
	string nama;
	int usia;
	cout << "Nama Anda? ";
	cin >> nama;
	cout << endl << "Hello, " << nama << " !" << endl;
	
	cout << "Berapa usia anda? ";
	cin >> usia;
	cout << "Usia yang anda input : " << usia << endl;
}

// definisi fungsi
void T01(){
	cout << "Hello World" << endl;
}
