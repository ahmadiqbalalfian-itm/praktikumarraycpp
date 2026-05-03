#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    // d1 = baris (No 1, 2, 3)
    int d1 = 3;
    //d2 = kolom (Tahun 2021, 2022, 2023)
    int d2 = 3;
    
    // Inisialisasi data langsung sesuai tabel di gambar
    int tahun[3] = {2021, 2022, 2023};
    int penjualan[3][3] = {
        {150, 159, 230}, // Baris 1 (No 1)
        {100, 125, 150}, // Baris 2 (No 2)
        {210, 125, 156}  // Baris 3 (No 3)
    };

    // Header Tabel
    cout << "============================================" << endl;
    cout << left << setw(5) << "No" 
         << setw(12) << "2021" 
         << setw(12) << "2022" 
         << setw(12) << "2023" << endl;
    cout << "--------------------------------------------" << endl;

    // Loop untuk menampilkan data
    for(int i = 0; i < d1; i++){
        // Tampilkan nomor urut (i+1)
        cout << left << setw(5) << i + 1; 
        
        // Loop kolom (q) untuk menampilkan isi penjualan
        for(int q = 0; q < d2; q++){
            cout << setw(12) << penjualan[i][q];
        }
        cout << endl;
    }
    cout << "============================================" << endl;

    return 0;
}
