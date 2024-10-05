#include <iostream>

using namespace std;

void persegi() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

void segitigaSamaKaki() {
    for (int i = 1; i <= 5; i++) {
        // Cetak spasi
        for (int j = 1; j <= 5 - i; j++) {
            cout << " ";
        }
        // Cetak bintang
        for (int k = 1; k <= 2 * i - 1; k++) {
            cout << "*";
        }
        cout << endl;
    }
}

void segitigaSamaSiku() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    cout << "Persegi\n";
    persegi();
    cout << endl;

    cout << "Segitiga Sama Kaki\n";
    segitigaSamaKaki();
    cout << endl;

    cout << "Segitiga Sama Siku\n";
    segitigaSamaSiku();
    cout << endl;

    return 0;
}
