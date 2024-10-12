#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <locale>

using namespace std;

// Harga layanan streaming
const int NETFLIX = 39000;
const int DISNEY_PLUS = 45000;
const int HBO_GO = 40000;

// Kategori perusahaan
const int PERUSAHAAN_KECIL = 100000000;
const int PERUSAHAAN_MENENGAH = 500000000;

// Fungsi untuk merekomendasikan layanan streaming berdasarkan dana pengguna
vector<string> recommended(int dana) {
    vector<string> rekomendasi;

    if (dana >= NETFLIX) {
        rekomendasi.push_back("Netflix");
    }
    if (dana >= DISNEY_PLUS) {
        rekomendasi.push_back("Disney+");
    }
    if (dana >= HBO_GO) {
        rekomendasi.push_back("HBO GO");
    }

    return rekomendasi;
}

// Fungsi untuk mencari kombinasi layanan yang bisa dibeli
vector<string> recommendedCombinations(int dana) {
    vector<string> kombinasi;

    if (dana >= NETFLIX + DISNEY_PLUS) {
        kombinasi.push_back("Netflix dan Disney+");
    }
    if (dana >= NETFLIX + HBO_GO) {
        kombinasi.push_back("Netflix dan HBO GO");
    }
    if (dana >= DISNEY_PLUS + HBO_GO) {
        kombinasi.push_back("Disney+ dan HBO GO");
    }
    if (dana >= NETFLIX + DISNEY_PLUS + HBO_GO) {
        kombinasi.push_back("Netflix, Disney+, dan HBO GO");
    }

    return kombinasi;
}

// Fungsi untuk mencetak rekomendasi layanan streaming
void printRecommendations(int dana) {
    vector<string> rekomendasi = recommended(dana);
    vector<string> kombinasi = recommendedCombinations(dana);

    cout.imbue(locale(""));  // Set locale untuk format angka
    cout << "Dana yang anda masukkan: " << dana << endl;

    if (!rekomendasi.empty()) {
        cout << "Layanan streaming yang bisa Anda beli: " << endl;
        for (const string &layanan : rekomendasi) {
            cout << "- " << layanan << endl;
        }
    } else {
        cout << "Tidak ada layanan streaming yang bisa direkomendasikan dengan dana tersebut." << endl;
    }

    if (!kombinasi.empty()) {
        cout << "Kombinasi layanan streaming yang bisa Anda beli: " << endl;
        for (const string &combo : kombinasi) {
            cout << "- " << combo << endl;
        }
    }
}

// Fungsi untuk mencetak bentuk persegi
void persegi() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

// Fungsi untuk mencetak bentuk segitiga sama kaki
void segitigaSamaKaki() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5 - i; j++) {
            cout << " ";
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            cout << "*";
        }
        cout << endl;
    }
}

// Fungsi untuk mencetak bentuk segitiga sama siku
void segitigaSamaSiku() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

// Fungsi untuk menghitung pajak
int countPajak(int omset) {
    if (omset < PERUSAHAAN_KECIL) {
        return omset * 0.015;
    } else if (omset <= PERUSAHAAN_MENENGAH) {
        return omset * 0.02;
    } else {
        return omset * 0.05;
    }
}

// Fungsi untuk menghitung cukai
int countCukai(int omset) {
    if (omset >= PERUSAHAAN_KECIL && omset <= PERUSAHAAN_MENENGAH) {
        return omset * 0.10;
    } else if (omset > PERUSAHAAN_MENENGAH) {
        return omset * 0.20;
    }
    return 0;
}

// Fungsi untuk menghitung retribusi
int countRetribusi(int omset) {
    if (omset >= PERUSAHAAN_KECIL && omset <= PERUSAHAAN_MENENGAH) {
        return omset * 0.04;
    } else if (omset > PERUSAHAAN_MENENGAH) {
        return omset * 0.05;
    }
    return 0;
}

// Fungsi untuk menghitung PPN
int countPpn(int omset) {
    if (omset > PERUSAHAAN_MENENGAH) {
        return omset * 0.12;
    }
    return 0;
}

// Fungsi untuk tugas pertama
void pertama() {
    int dana;
    cout << "Masukkan dana anda: ";
    cin >> dana;
    printRecommendations(dana);
}

// Fungsi untuk tugas kedua
void kedua() {
    cout << "1. Persegi" << endl;
    cout << "2. Segitiga Sama Kaki" << endl;
    cout << "3. Segitiga Sama Siku" << endl;

    cout << "Pilih bentuk yang ingin dicetak: ";
    int pilihan;
    cin >> pilihan;

    switch (pilihan) {
        case 1:
            cout << "Persegi" << endl;
            persegi();
            break;
        case 2:
            cout << "Segitiga Sama Kaki" << endl;
            segitigaSamaKaki();
            break;
        case 3:
            cout << "Segitiga Sama Siku" << endl;
            segitigaSamaSiku();
            break;
        default:
            cout << "Pilihan tidak valid." << endl;
            break;
    }
}

// Fungsi untuk tugas ketiga
void ketiga() {
    int omset;
    cout << "Masukkan omset penjualan: ";
    cin >> omset;

    int pajak = countPajak(omset);
    int cukai = countCukai(omset);
    int retribusi = countRetribusi(omset);
    int ppn = countPpn(omset);

    cout.imbue(locale(""));  // Set locale untuk format angka

    if (omset < PERUSAHAAN_KECIL) {
        cout << "Perusahaan kecil" << endl;
        cout << "Pajak yang harus dibayar: Rp " << fixed << pajak << endl;
    } else if (omset <= PERUSAHAAN_MENENGAH) {
        cout << "Perusahaan menengah" << endl;
        cout << "Pajak yang harus dibayar: Rp " << fixed << pajak << endl;
        cout << "Cukai yang harus dibayar: Rp " << fixed << cukai << endl;
        cout << "Retribusi yang harus dibayar: Rp " << fixed << retribusi << endl;
    } else {
        cout << "Perusahaan besar" << endl;
        cout << "Pajak yang harus dibayar: Rp " << fixed << pajak << endl;
        cout << "Cukai yang harus dibayar: Rp " << fixed << cukai << endl;
        cout << "Retribusi yang harus dibayar: Rp " << fixed << retribusi << endl;
        cout << "PPN yang harus dibayar: Rp " << fixed << ppn << endl;
    }
}

// Fungsi utama (main)
int main() {
    int nomor;

    cout << "Mau mengerjakan tugas nomor berapa? ";
    cin >> nomor;

    switch (nomor) {
        case 1:
            pertama();
            break;
        case 2:
            kedua();
            break;
        case 3:
            ketiga();
            break;
        default:
            cout << "Tugas nomor tersebut belum dikerjakan." << endl;
            break;
    }

    return 0;
}
