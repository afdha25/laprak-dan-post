#include <iostream>
#include <iomanip>

using namespace std;
struct KEDAI{
	int hargaAyamGoreng;
	int hargaAyamBakar;
    int jumlah1;
	int jumlah2;
	double diskon;
	int inginDiskon;
	double totalHarga;

};
const int hargaAyamGoreng = 17000;
const int hargaAyamBakar = 21000;
const double diskon = 0.1;
const int inginDiskon = 45000;

void total(KEDAI &kedai) {
    kedai.totalHarga = (kedai.jumlah1 * hargaAyamGoreng) + (kedai.jumlah1 * hargaAyamBakar);
                        
    if (kedai.totalHarga > inginDiskon) {
        double potongan = kedai.totalHarga-(kedai.totalHarga * diskon);
        kedai.totalHarga = potongan;
    }
}
void tampilkanStruk(KEDAI &kedai) {
    cout<<"==================================="<<endl;
    cout<<"        STRUK PEMBAYARAN           "<<endl;
    cout<<"==================================="<<endl;
    cout<<"Ayam Goreng    :  "<<kedai.jumlah1<<" x Rp"<<hargaAyamGoreng<<endl;
    cout<<"Ayam Bakar     :  "<<kedai.jumlah2<<" x Rp"<<hargaAyamBakar<<endl;
    cout<<"Total Harga    :  Rp : "<<kedai.totalHarga<<endl;
    cout<<"===================================" << endl;
    
   
}

int main() {
	cout<<"Daftar menu "<<endl;
	cout<<"1.Ayam goreng = 17000"<<endl;
	cout<<"2.Ayam bakar  = 21000"<<endl;
    KEDAI kedai;
    cout<<"Masukkan jumlah ayam goreng: ";
    cin>>kedai.jumlah1;
    cout<<"Masukkan jumlah ayam bakar: ";
    cin>>kedai.jumlah2;
    
    total(kedai);

    tampilkanStruk(kedai);

    
}
