#include<iostream>
#include<iomanip>
using namespace std;


int main(){
	int jumlah;
	cout<<"GEROBAK FRIED CHICKEN\n-----------\nKode Jenis Harga\n-----------\nP\tDada|tRp.2.500\nP\tPaha\tRp.2.000\nS\tSayap\tRp.1.500\n-----------\nBanyak Jenis (Minimal 1, Maksimal 3 yaaa)\t:";
	cin>>jumlah;
	
	double bayar[jumlah];
	string jenis[jumlah];
	int potong[jumlah];
	double harga[3]={2500,2000,1500};
	int total = 0;
	
	if(jumlah>0&&jumlah<4){
		for (int i=0;i<jumlah;i++){
			cout<<"Jenis ke "<<i+1<<"mau apa? (D/P/S)";
			cin>>jenis[i];
			cout<<"Mau berapa potong?";
			cin>>potong[i];
			
			if(jenis[i]=="D"||jenis[i]=="d"){
				jenis[i]="Dada";
				bayar[i]+=(harga[0]*potong[i]);
				total+= bayar[i];
				
			} else if(jenis[i]=="P"||jenis[i]=="p"){
				bayar[i]+=(harga[1]*potong[i]);
				jenis[i]="Paha";
				total+= bayar[i];
				
			} else if (jenis[i]=="S"||jenis[i]=="s"){
				bayar[i]+=(harga[2]*potong[i]);
				jenis[i]="Sayap";
				total+= bayar[i];
				
			} else {
				cout<<"Maaf, pesanan yang anda inginkan belum tersedia,\nMohon masukkan jenis pesanan yang Valid (D/P/S)\n";
				jumlah++;
				
			}
			
		}
	system ("cls");
	
	cout<<"\n==========================================\n";
	cout<<"No. Jenis           Harga	Banyak 	Jumlah\n";
	cout<<"	   Potong          Satuan 	Beli 	Harga";
	cout<<"\n==========================================\n";
	for (int i=0;i<jumlah;i++){
		cout<<setiosflags(ios::left)<<setw(3)<<i+1<<setw(6)<<jenis[i]<<setw(5)<<"Rp."<<harga[i]<<setw(4)<<potong[i]<<setw(6)<<bayar[i]<<endl;
	}
	cout<<"\n==========================================\n\t\t\t\t\t\tJumlah Bayar\tRp."<<total<<"\n\t\t\t\t\t\tPajak 10%\tRp."<<(total/10)<<"\t\t\t\t\t\tTotal Bayar\tRp."<<total+(total/10);
	
	}else{
		cout<<"Mohon masukkan jumlah yang sesuai yakni 1-3";
	}
	
}
