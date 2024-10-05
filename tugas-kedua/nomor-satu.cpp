#include <iostream>
#include <string>

using namespace std;

// Harga layanan streaming
const int NETFLIX = 39000;
const int DISNEY_PLUS = 45000;
const int HBO_GO = 40000;

void recommended(int dana) {
    // Cek layanan tunggal yang bisa dibeli
    if (dana >= NETFLIX) {
        cout << "Netflix\n";
    }
    if (dana >= DISNEY_PLUS) {
        cout << "Disney+\n";
    }
    if (dana >= HBO_GO) {
        cout << "HBO GO\n";
    }

    // Cek kombinasi dua layanan yang bisa dibeli
    if (dana >= NETFLIX + DISNEY_PLUS) {
        cout << "Netflix dan Disney+\n";
    }
    if (dana >= NETFLIX + HBO_GO) {
        cout << "Netflix dan HBO GO\n";
    }
    if (dana >= DISNEY_PLUS + HBO_GO) {
        cout << "Disney+ dan HBO GO\n";
    }

    // Cek kombinasi tiga layanan yang bisa dibeli
    if (dana >= NETFLIX + DISNEY_PLUS + HBO_GO) {
        cout << "Netflix, Disney+, dan HBO GO\n";
    }
}

int main() {
    int dana;
    cout << "Masukkan dana anda: ";
    cin >> dana;

    cout << "Berdasarkan dana yang anda masukkan, layanan streaming yang direkomendasikan adalah:\n";
    recommended(dana);

    return 0;
}
