#include <iostream>
#include <thread>   // Untuk delay menggunakan sleep_for
#include <chrono>   // Untuk mengatur durasi delay
#include <vector>   // Untuk penggunaan vector

using namespace std;

void printMatrix(const vector<vector<char>>& matrix) {
    for (const auto& row : matrix) {
        for (char elem : row) {
            cout << elem << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void moveColumnDown(vector<vector<char>>& matrix, int col) {
    int size = matrix.size();
    // Memindahkan setiap elemen di kolom `col` ke bawah
    for (int i = size - 1; i > 0; i--) {
        matrix[i][col] = matrix[i - 1][col];
    }
    // Mengosongkan elemen paling atas di kolom tersebut
    matrix[0][col] = ' ';
}

void initializeMatrix(vector<vector<char>>& matrix, char fillChar) {
    int size = matrix.size();
    // Menginisialisasi matriks dengan karakter yang diinginkan
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            matrix[i][j] = fillChar;
        }
    }
}

int main() {
    int size;
    
    // Meminta input ukuran matriks dari pengguna
    cout << "Masukkan ukuran matriks: ";
    cin >> size;

    // Membuat matriks menggunakan vector 2D
    vector<vector<char>> matrix(size, vector<char>(size));

    // Inisialisasi matriks dengan karakter 'x'
    initializeMatrix(matrix, 'x');

    cout << "Matriks Awal:" << endl;
    printMatrix(matrix);

    // Memindahkan objek di setiap kolom ke bawah secara bertahap
    for (int col = 0; col < size; col++) {
        for (int step = 0; step < size; step++) {
            moveColumnDown(matrix, col);
            cout << "Setelah memindahkan kolom " << col + 1 << " langkah ke-" << step + 1 << ":" << endl;
            printMatrix(matrix);

            // Menambahkan delay selama 500 milidetik
            this_thread::sleep_for(chrono::milliseconds(500));
        }
    }

    return 0;
}
