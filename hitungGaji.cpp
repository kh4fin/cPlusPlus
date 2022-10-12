#include <iostream>
#include <string>

/*
	[22:04/11/10/22]
	Nama : Muhammad Abdul Khafid
	NPM  : 2213020181
	
*/

using namespace std;
/*
hitung gaji bersih jika terdapat aturan gaji bersih = gaji pokok + tunjangan golongan + tunjangan transportasi - pajak
gaji pokok semua pegawai = 2.000.000
	tunjangan golongan 1 = 400.000
	tunjangan golongan 2 = 700.000
	tunjangan golongan 3 = 1000.000
tunjangan transportasi = 25% dari tunjangan golongan
pajak = 10%
*/
int main(){
	string nama[10], input;
	int jum, gol[10], gajiBersih[10], gajiPokok[10],tGol[10];
	int pajak[10],ttrans[10];
	
	start:
	
	cout<<"masukkan jumlah karyawan : ";
	cin>>jum;
	cout<<endl;
	
	for( int i =1; i <= jum; i++ ){
		cout<<"karyawan ke - "<<i<<endl;
		cout<<"masukkan nama : ";
		cin>>nama[i];
		cout<<"masukkan golongan : ";
		cin>>gol[i];
		
		//menentukan tunjangan golongan
		if(gol[i] == 1){
			tGol[i] = 400000;
		}else if(gol[i] == 2){
			tGol[i] = 700000;
		}else if(gol[i] == 3){
			tGol[i] = 1000000;
		} else{
			tGol[i] = 0;
		}
		
		gajiPokok[i] = 2000000;
		ttrans[i] = tGol[i]*0.25;
		pajak[i] = gajiPokok[i] * 0.10;
		gajiBersih[i] =(( gajiPokok[i] + tGol[i] + ttrans[i] ) - pajak[i]);
	}
	
	cout<<"Program Menghitung Gaji Karyawan"<<endl;
	cout<<endl;
	
	for(int i = 1; i<= jum; i++){
		cout<<"===================================="<<endl;
		cout<<"		Karyawan ke - "<<i<<endl;
		cout<<"===================================="<<endl;
		cout<<"Nama \t\t	: "<<nama[i]<<endl;
		cout<<"Gaji Pokok \t	: "<<gajiPokok[i]<<endl;
		cout<<"Tunjangan Golongan 	: "<<tGol[i]<<endl;
		cout<<"Tunjangan Transportasi 	: "<<ttrans[i]<<endl;
		cout<<"Pajak \t\t	: "<<pajak[i]<<endl;
		cout<<"Gaji Bersih \t	: "<<gajiBersih[i]<<endl;
		cout<<"===================================="<<endl;
		cout<<endl<<endl;
	}
	cout<<"Mau Input Lagi [y/n]"<<endl;
	cin>>input;
	if(input == "Y" || input == "y"){
		goto start;
	}else{
		return 0;	
	}
	
}



