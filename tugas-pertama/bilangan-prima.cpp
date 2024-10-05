#include <iostream>
#include <cmath>  

using namespace std;

// Fungsi untuk mengecek bilangan prima
bool isPrime(int num){
    if (num <= 1) return false;  
    if (num == 2 || num == 3) return true; 
    if (num % 2 == 0 || num % 3 == 0) return false; 

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