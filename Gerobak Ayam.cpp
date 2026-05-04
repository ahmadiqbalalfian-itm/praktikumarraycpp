#include<iostream>
#include<iomanip>
using namespace std;


int main(){
	int jumlah;
	cout<<"\n-------------------------\nGEROBAK FRIED CHICKEN\n-------------------------\n";
		
	double harga[3]={2500,2000,1500};
	string kode [3][2]={{"D","Dada"},{"P","Paha"},{"S","Sayap"}};
			cout<<setiosflags(ios::left)<<setw(8)<<"Kode"		<<setw(8)<<"Jenis"				<<setw(8)<<"Harga"<<endl;
			cout<<"-------------------------\n";	
	for (int i=0;i<3;i++){
			cout<<setiosflags(ios::left)<<setw(8)<<kode[i][0]	<<setw(8)<<kode[i][1]<<"Rp"		<<setw(8)<<harga[i]<<endl;	
//		for (int j=0;j<3;j++){
//			
//		}
		
	}
			cout<<"-------------------------\n";
	do{
	cout<<"Banyak Jenis yang mau dibeli (Minimal 1, Maksimal 3 yaaa)\t: ";
	
	
//	
//	cout<<setiosflags(ios::left)<<setw(8)<<"Kode"	<<setw(8)<<"Jenis"	<<setw()<<"Harga"<<endl;
//	cout<<setiosflags(ios::left)<<setw(8)<<"D"		<<setw(8)<<"Dada"	<<setw()<<"Rp2500"<<endl;
//	cout<<setiosflags(ios::left)<<setw(8)<<"D"		<<setw(8)<<"Dada"	<<setw()<<"Rp2500"<<endl;
//	Kode Jenis Harga\n-------------------------\nD  Dada\t\tRp2500\nP  Paha\t\tRp2000\nS  Sayap\tRp1500\;
	
	cin>>jumlah;
	
	if(jumlah>0&&jumlah<4){
		
		double bayar[jumlah];
		string jenis[jumlah];
		double potong[jumlah];
		double hargasatuan[3];
		double total = 0;
		
		for (int i=0;i<jumlah;i++){
			cout<<"Jenis ke "<<i+1<<" mau apa? (D/P/S)\t:";
			cin>>jenis[i];
			
			do{
				cout<<"Mau berapa potong "<<jenis[i]<<"\t:";
				cin>>potong[i];
				if (potong[i]<1){
					cout<<"\n#################################\nMohon masukkan jumlah potongan yang Valid\n###################################\n\n";
					cin.clear();
					cin.ignore(10,'\n');
//					i--;
				}	
			}while(potong[i]<1);
			
				if(jenis[i]=="D"||jenis[i]=="d"){
					jenis[i]="Dada";
					bayar[i]=(harga[0]*potong[i]);
					hargasatuan[i]=harga[0];
					total+= bayar[i];
					
				} else if(jenis[i]=="P"||jenis[i]=="p"){
					bayar[i]=(harga[1]*potong[i]);
					hargasatuan[i]=harga[1];
					jenis[i]="Paha";
					total+= bayar[i];
					
				} else if (jenis[i]=="S"||jenis[i]=="s"){
					bayar[i]=(harga[2]*potong[i]);
					hargasatuan[i]=harga[2];
					jenis[i]="Sayap";
					total+= bayar[i];			
				} else {
					cout<<"\n#################################\nMaaf, pesanan yang anda inginkan belum tersedia,\nMohon masukkan jenis pesanan yang Valid (D/P/S)\n###################################\n\n";
					cin.clear();
					cin.ignore(10,'\n');
					i--;
					
				}	
		}
	system ("cls");
	
	cout<<"\n-------------------------\nGEROBAK FRIED CHICKEN\n-------------------------\n";
			cout<<setiosflags(ios::left)<<setw(8)<<"Kode"		<<setw(8)<<"Jenis"				<<setw(8)<<"Harga"<<endl;
			cout<<"-------------------------\n";	
	for (int i=0;i<3;i++){
			cout<<setiosflags(ios::left)<<setw(8)<<kode[i][0]	<<setw(8)<<kode[i][1]<<"Rp"		<<setw(8)<<harga[i]<<endl;	
//		for (int j=0;j<3;j++){
//			
//		}
		
	}
			cout<<"-------------------------\n";
	
	cout<<"\n==========================================\n";
	cout<<setiosflags(ios::left)<<setw(4)<<"No."	<<setw(10)<<"Jenis"			<<setw(10)<<"Harga"					<<setw(8)<<"Banyak"			<<setw(12)<<"Jumlah"<<endl;
	cout<<setiosflags(ios::left)<<setw(4)<<""  		<<setw(10)<<"Potongan"		<<setw(10)<<"Satuan"				<<setw(8)<<"Beli"			<<setw(12)<<"Harga";
	cout<<"\n==========================================\n";
	
	for (int i=0;i<jumlah;i++){
		cout<<setiosflags(ios::left)<<setw(4)<<i+1	<<setw(10)<<jenis[i]<<"Rp"	<<setw(10)<<hargasatuan[i]			<<setw(8)<<potong[i]<<"Rp"	<<setw(12)<<bayar[i]<<endl;
	}
	cout<<"==========================================\n"<<setiosflags(ios::left)<<setw(20)<<" "<<setw(15)<<"Jumlah Bayar"<<"Rp"	<<setw(14)	<<total<<endl;
													cout<<setiosflags(ios::left)<<setw(20)<<" "<<setw(15)<<"Pajak 10%"<<"Rp"	<<setw(14)	<<(total/10)<<endl;
													cout<<setiosflags(ios::left)<<setw(20)<<" "<<setw(15)<<"Total Bayar"<<"Rp"	<<setw(14)	<<total+(total/10)<<endl;
	
	}else{
		cin.clear();
		cin.ignore(10,'\n');
		cout<<"\n###################################\nMohon masukkan jumlah yang sesuai yakni 1-3\n###################################\n\n";
	}
}while(jumlah<1||jumlah>3);
	
	
}
