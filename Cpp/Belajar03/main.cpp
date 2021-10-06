#include <iostream>
#include <string>

using namespace std;

template <class T>
void Cetak(T s);

template <class T>
void CetakLine(T s);

void T01();
double UbahFahrenheitKeCelcius(double f);

void T02();
double Tagihan(int unit_beli, double harga_satuan, double persen_diskon, int min_diskon);

void T03(int x, int n);

// ### FUNGSI MAIN
int main(int argc, char** argv) {
	// T01();
	// T02();
	T03(24, 10);
	return 0;
}
// ### FUNGSI MAIN

template <class T>
void Cetak(T s){
	cout << s;
}

template <class T>
void CetakLine(T s){
	cout << s << endl;
}


double UbahFahrenheitKeCelcius(double f){
	return (5.0/9.0)*(f - 32.0);
}

void T01(){
	double suhu_f = 120;
	Cetak("Suhu dalam Celcius = ");
	CetakLine(UbahFahrenheitKeCelcius(suhu_f));
}

double Tagihan(int unit_beli, double harga_satuan, double persen_diskon, int min_diskon){
	if (unit_beli < min_diskon) 
		return harga_satuan * (double)unit_beli;  // kenapa ada (double) --> type casting
	return harga_satuan * (1 - persen_diskon) * (double)unit_beli;
}

void T02(){
	double harga_satuan = 100.0;
	double persen_diskon = 10.0/100.0;
	
	int min_diskon = 100;
	int n1 = 80;  // uji untuk pembelian 80 unit --> Total = 80 * 100 = 8.000
	int n2 = 120; // uji untuk pembelian 120 unit --> Total = 100*(1 - persen_diskon) * 120 =  10.800
	
	Cetak("Tagihan untuk n1 = ");
	CetakLine(Tagihan(n1, harga_satuan, persen_diskon, min_diskon));
	
	Cetak("Tagihan untuk n2 = ");
	CetakLine(Tagihan(n2, harga_satuan, persen_diskon, min_diskon));
	
}

void T03(int x, int n){ // tabel perkalian
	// misal x = 3, n = 5 --> 3, 6, 9, 12, 15
	int i = 1;
	CetakLine("Menggunakan perintah FOR");
	for (i = 1; i <= n; ++i){
		Cetak(i * x);
		Cetak("  ");  // kenapa ada ini?	
	}
	CetakLine("");
	CetakLine(" ------------------- ");
	
	CetakLine("Menggunakan perintah WHILE");
	i = 1;
	while(i <= n){
		Cetak(i * x);
		Cetak("  ");
		++i;
	}
	
}
