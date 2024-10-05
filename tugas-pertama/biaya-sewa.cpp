#include <iostream>
#include <string>
#include <cmath>  

using namespace std;

// Fungsi untuk hitung biaya sewa kendaraan
int hitungBiayaSewaKendaraan(int jumlah_hari, int harga_sewa_per_hari) {
    return jumlah_hari * harga_sewa_per_hari;
}

int main(){
    // Menampilkan biaya sewa kendaraan selama 20 hari
    int biaya_sewa = 1103000;
    int jumlah_hari = 20;
    int total_anggaran = 88000000;

    int total_biaya = hitungBiayaSewaKendaraan(jumlah_hari, biaya_sewa);

    if(total_biaya > total_anggaran){
        cout << "Anggaran tidak mencukupi" << endl;
    } else {
        cout << "Anggaran mencukupi" << endl;
    }

}