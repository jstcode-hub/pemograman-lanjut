#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Harga layanan streaming
const int NETFLIX = 39000;
const int DISNEY_PLUS = 45000;
const int HBO_GO = 40000;

// Fungsi untuk merekomendasikan layanan streaming berdasarkan dana pengguna
vector<string> recommended(int dana) {
    vector<string> rekomendasi;

    // Cek setiap kombinasi layanan yang bisa dibeli
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

    // Kombinasi 2 layanan
    if (dana >= NETFLIX + DISNEY_PLUS) {
        kombinasi.push_back("Netflix dan Disney+");
    }
    if (dana >= NETFLIX + HBO_GO) {
        kombinasi.push_back("Netflix dan HBO GO");
    }
    if (dana >= DISNEY_PLUS + HBO_GO) {
        kombinasi.push_back("Disney+ dan HBO GO");
    }

    // Kombinasi 3 layanan
    if (dana >= NETFLIX + DISNEY_PLUS + HBO_GO) {
        kombinasi.push_back("Netflix, Disney+, dan HBO GO");
    }

    return kombinasi;
}

int main() {
    int dana;
    cout << "Masukkan dana anda: ";  
    cin >> dana;

    vector<string> rekomendasi = recommended(dana);
    vector<string> kombinasi = recommendedCombinations(dana);

    cout << "Dana yang anda masukkan: " << dana << endl;

    // Output untuk layanan tunggal
    if (!rekomendasi.empty()) {
        cout << "Layanan streaming yang bisa Anda beli: " << endl;
        for (string layanan : rekomendasi) {
            cout << "- " << layanan << endl;
        }
    } else {
        cout << "Tidak ada layanan streaming yang bisa direkomendasikan dengan dana tersebut." << endl;
    }

    // Output untuk kombinasi layanan
    if (!kombinasi.empty()) {
        cout << "Kombinasi layanan streaming yang bisa Anda beli: " << endl;
        for (string combo : kombinasi) {
            cout << "- " << combo << endl;
        }
    }

    return 0;
}
