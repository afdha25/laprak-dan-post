#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
struct KTP{
	string nik;
	string nama;
	string ttl;
	string jenis_kelamin;
	string gol_darah;
	string alamat;
	string rt_rw;
	string kel_desa;
	string kecamatan;
	string agama;
	string status_perkawinan;
	string pekerjaan;
	string kewarganegaraan;
	string berlaku_hingga;
	
};

void inputKTP(KTP &ktp){
	cout<<"masukkan NIK: ";
	getline(cin, ktp.nik);
	cout<<"masukkan Nama: ";
	getline(cin, ktp.nama);
	cout<<"masukkan tempat tanggal lahir: ";
	getline(cin, ktp.ttl);
	cout<<"masukkan jenis kelamin: ";
	getline(cin, ktp.jenis_kelamin);
	cout<<"masukkan golongan darah: ";
	getline(cin, ktp.gol_darah);
	cout<<"masukkan alamat: ";
	getline(cin, ktp.alamat);
	cout<<"masukkan rt/rw: ";
	getline(cin, ktp.rt_rw);
	cout<<"masukkan kelurahan/desa: ";
	getline(cin, ktp.kel_desa);
	cout<<"masukkan kecamatan: ";
	getline(cin, ktp.kecamatan);
	cout<<"masukkan agama: ";
	getline(cin, ktp.agama);
	cout<<"masukkan stasus perkawinan: ";
	getline(cin, ktp.status_perkawinan);
	cout<<"masukkan pekerjaan: ";
	getline(cin, ktp.pekerjaan);
	cout<<"masukkan kewarganegaraan: ";
	getline(cin, ktp.kewarganegaraan);
	cout<<"masukkan berlaku hingga: ";
	getline(cin, ktp.berlaku_hingga);
	
	
}

void displayKTP(const KTP &ktp){
	cout<<"\n===========================simulasi ktp=================\n";
	cout<<left<<setw(20)<<"NIK"<<": "<<ktp.nik<<endl;
	cout<<left<<setw(20)<<"Nama"<<": "<<ktp.nama<<endl;
	cout<<left<<setw(20)<<"Tempat tanggal lahir"<<": "<<ktp.ttl<<endl;
	cout<<left<<setw(20)<<"Jenis kelamin"<<": "<<ktp.jenis_kelamin<<" Gol darah: "<<ktp.gol_darah<<endl;
	cout<<left<<setw(20)<<"Alamat"<<": "<<ktp.alamat<<endl;
	cout<<left<<setw(20)<<"RT/RW"<<": "<<ktp.rt_rw<<endl;
	cout<<left<<setw(20)<<"KEL/DESA"<<": "<<ktp.kel_desa<<endl;
	cout<<left<<setw(20)<<"Kecamatan"<<": "<<ktp.kecamatan<<endl;
	cout<<left<<setw(20)<<"Agama"<<": "<<ktp.agama<<endl;
	cout<<left<<setw(20)<<"Perkawinan"<<": "<<ktp.status_perkawinan<<endl;
	cout<<left<<setw(20)<<"Status pekerjaan"<<": "<<ktp.pekerjaan<<endl;
	cout<<left<<setw(20)<<"Kewarganegaraan"<<": "<<ktp.kewarganegaraan<<endl;
	cout<<left<<setw(20)<<"Berlaku hingga"<<": "<<ktp.berlaku_hingga<<endl;
	cout<<"========================================================\n";
}

int main (){
	KTP ktp;
	cout<<"input Data KTP\n";
	inputKTP(ktp);
	displayKTP(ktp);
	

}
