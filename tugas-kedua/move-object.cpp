#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

// Fungsi untuk mencetak matriks ke layar
void printMatrix(char matrix[3][5]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 5; ++j) {
            cout << matrix[i][j] << ' ';
        }
        cout << endl;
    }
    cout << endl;
}

// Fungsi untuk memindahkan objek 'x' satu persatu dari kiri ke kanan
void moveObjects(char matrix[3][5]) {
    int rows = 3;
    int cols = 5;

    // Looping untuk setiap baris
    for (int row = 0; row < rows; ++row) {
        // Looping untuk setiap kolom di baris tersebut
        for (int col = 0; col < cols; ++col) {
            // Jika tidak di kolom pertama, hapus 'x' di kolom sebelumnya
            if (col > 0) {
                matrix[row][col - 1] = ' ';
            }

            // Pindahkan objek 'x' ke kolom saat ini
            matrix[row][col] = 'x';

            // Cetak matriks untuk melihat pergerakan
            printMatrix(matrix);

            // Delay untuk visualisasi gerakan
            this_thread::sleep_for(chrono::milliseconds(500));
        }

        // Setelah objek di satu baris sudah selesai bergerak, hapus 'x' di kolom terakhir
        matrix[row][cols - 1] = ' ';
    }
}

int main() {
    // Inisialisasi matriks 3x5 dengan objek 'x'
    char matrix[3][5] = {
        {'x', 'x', 'x', 'x', 'x'},
        {'x', 'x', 'x', 'x', 'x'},
        {'x', 'x', 'x', 'x', 'x'}
    };

    // Cetak matriks awal
    cout << "Initial Matrix:\n";
    printMatrix(matrix);

    // Panggil fungsi untuk memindahkan objek 'x' satu persatu
    moveObjects(matrix);

    return 0;
}
