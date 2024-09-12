#include <iostream>
#include <string>
#include <cmath>  

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

int main(){
    // Menampilkan kode wilayah
    string kode_wilayah = "35.01";
    kodeWilayah(kode_wilayah);

}