#include <iostream>
#include <string>
#include <cmath>  // Untuk sqrt()
using namespace std;

// Fungsi untuk menghilangkan titik dari string
string hapusTitik(const string &input) {
    string hasil;
    for (char c : input) {
        if (c != '.') {  
            hasil += c;  
        }
    }
    return hasil;
}

// Fungsi untuk hitung biaya sewa kendaraan
int hitungBiayaSewaKendaraan(int jumlah_hari, int harga_sewa_per_hari) {
    return jumlah_hari * harga_sewa_per_hari; // Sederhanakan dengan perhitungan langsung
}

// Fungsi switch case untuk kode wilayah
void kodeWilayah(string kode_wilayah){
    string kode_tanpa_titik = hapusTitik(kode_wilayah);
    int kode_tanpa_titik_int = stoi(kode_tanpa_titik);

    int dua_digit_pertama = kode_tanpa_titik_int / 100;
    int dua_digit_kedua = kode_tanpa_titik_int % 100;

    switch (dua_digit_pertama) {
        case 34:
            cout << "Provinsi DI Yogyakarta" << endl;
            switch (dua_digit_kedua) {
                case 01:
                    cout << "Kabupaten Kulon Progo" << endl;
                    break;
                case 02:
                    cout << "Kabupaten Bantul" << endl;
                    break;
            }
            break;    
        case 35:
            cout << "Provinsi Jawa Timur" << endl;
            switch (dua_digit_kedua) {
                case 01:
                    cout << "Kabupaten Pacitan" << endl;
                    break;
                case 02:
                    cout << "Kabupaten Ponorogo" << endl;
                    break;
            }
            break;
        case 36:
            cout << "Provinsi Banten" << endl;
            switch (dua_digit_kedua) {
                case 01:
                    cout << "Kabupaten Pandeglang" << endl;
                    break;
                case 02:
                    cout << "Kabupaten Lebak" << endl;
                    break;
            }
            break;
        default:
            cout << "Kode wilayah tidak dikenali" << endl;
            break;
    }
}

// Fungsi untuk mengecek bilangan prima
bool isPrime(int num){
    if (num <= 1) return false;  // Angka <= 1 bukan bilangan prima
    if (num == 2 || num == 3) return true; // 2 dan 3 adalah bilangan prima
    if (num % 2 == 0 || num % 3 == 0) return false; // Singkirkan bilangan genap dan kelipatan 3

    // Iterasi dari 5 hingga akar kuadrat dari num
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) return false;
    }
    
    return true;
}

// Kode utama
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

    // Menampilkan kode wilayah
    string kode_wilayah = "35.01";
    kodeWilayah(kode_wilayah);

    // Menampilkan bilangan prima dari 1 hingga 1000
    cout << "Bilangan prima dari 1 hingga 1000:" << endl;
    for(int i = 1; i <= 1000; i++){
        if(isPrime(i)){
            cout << i << " ";
        }
    }
    cout << endl; // Tambahkan baris baru di akhir output
}