#include <iostream>
#include <cmath>  

using namespace std;

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

int main(){
    // Menampilkan bilangan prima dari 1 hingga 1000
    cout << "Bilangan prima dari 1 hingga 1000:" << endl;
    for(int i = 1; i <= 1000; i++){
        if(isPrime(i)){
            cout << i << " ";
        }
    }
}