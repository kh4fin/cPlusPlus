#include <iostream>
using namespace std;

int main(){
	char nama[30];
	int jumlah, harga, potongan, kembalian, total, jumtotal,jumbayar;
	string input, kode;
	
	start:
	
	cout<<"		PROGRAM KASIR	 "<<endl;
	cout<<"=========================="<<endl;
	cout<<"Masukkan Nama : ";
	cin>>nama;
	cout<<"Pilihan Barang Yang Tersedia"<<endl;
	cout<<"001 Laptop Lenovo ThinkPad	Rp. 7.000.000"<<endl;
	cout<<"002 SSD	\t \t	Rp. 2.000.000"<<endl;
	cout<<"003 Processor \t \t	Rp. 5.000.000"<<endl;
	cout<<"==========================================="<<endl;
	cout<<endl<<endl;
	
	cout<<"Barang yang dipilih 		: ";
	cin>> kode;
	cout<<"Jumlah Beli 		: ";
	cin>>jumlah;
	
	if(kode=="001"){
		cout<<"Laptop Lenovo ThinkPad";
		harga = 7000000;
	}else if(kode=="002"){
		cout<<"SSD";
		harga = 2000000;
	}else if(kode == "003"){
		cout<<"Processor";
		harga = 5000000;
	}else{
		cout<<"Barang Tidak Tersedia";
	};
	
	cout<<endl<<endl;
	
	cout<<"==================================="<<endl;
	cout<<"Struk Pembayaran"<<endl;
	cout<<"==================================="<<endl;
	
	cout<<"Nama Pembeli 	: "<<nama<<endl;
	cout<<"Harga		: "<<harga<<endl;
	cout<<"Jumlah		: "<<jumlah<<endl;
	
	total = harga * jumlah;
	
	cout<<"total		: "<<total<<endl;
	
	if(total == 1000000 && total < 1000000){
		potongan = 0.10 * total;
	}else if(total > 2000000){
		potongan = total*0.10;
	}else{
		potongan = 0;
	}
	
	cout<<"Potongan 	: "<<potongan<<endl;
	cout<<"==================================="<<endl;
	
	jumtotal = total - potongan;
	cout<<"Total Keseluruhan		: "<<jumtotal<<endl;
	cout<<"Uang Bayar		: ";
	cin>>jumbayar;
	
	kembalian = jumbayar - jumtotal;
	cout<<"Uang Kembalian		: "<<kembalian<<endl;
	cout<<"======================================="<<endl;
	
	cout<<"Mau Input Lagi [y/n]	: ";
	cin>>input;
	if(input == "y" || input == "Y"){
		goto start;
	}else{
		return 0;	
	}

}
