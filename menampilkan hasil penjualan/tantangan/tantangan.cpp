#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int jumlah_tahun=3;
    int jumlah_penjualan=3;
    int tahun[jumlah_tahun] = {2021, 2022, 2023};
    int penjualan[jumlah_tahun][jumlah_penjualan] = {{150,159,230},{100,125,150},{210,125,156}};

    cout<<"=================================="<<endl;
    cout<<setw(11)<<""<<"TAHUN PENJUALAN\n";
    cout<<"----------------------------------"<<endl;
	cout<<left<<setw(5)<<"No";
	for(int i=0;i<jumlah_tahun;i++){
		cout<<setw(12)<<tahun[i];
	}
    cout<<"\n----------------------------------"<<endl;
	
    for(int i=0;i<jumlah_tahun;i++){
        cout<<left<<setw(5)<<i + 1;
        for(int q = 0;q<jumlah_penjualan;q++){
            cout<<setw(12)<<penjualan[i][q];
        }
        cout<<endl;
    }
    cout<<"=================================="<<endl;

    return 0;
}
