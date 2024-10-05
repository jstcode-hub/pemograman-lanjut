#include <iostream>

using namespace std;

int omset;
int pajak;
int cukai;
int retribusi;
int ppn;

int perusahaanKecil = 100000000;
int perusahaanMenengah = 500000000;

int countPajak(int omset) {
    int pajak = 0;
    if (omset < perusahaanKecil) {
        pajak = omset * 0.015;
    } else if (omset <= perusahaanMenengah) {
        pajak = omset * 0.02;
    } else {
        pajak = omset * 0.05;
    }
    return pajak;
}

int countCukai(int omset) {
    int cukai = 0;
    if (omset >= perusahaanKecil && omset <= perusahaanMenengah) {
        cukai = omset * 0.10;
    } else if (omset > perusahaanMenengah) {
        cukai = omset * 0.20;
    }
    return cukai;
}

int countRetribusi(int omset) {
    int retribusi = 0;
    if (omset >= perusahaanKecil && omset <= perusahaanMenengah) {
        retribusi = omset * 0.04;
    } else if (omset > perusahaanMenengah) {
        retribusi = omset * 0.05;
    }
    return retribusi;
}

int countPpn(int omset) {
    int ppn = 0;
    if (omset > perusahaanMenengah) {
        ppn = omset * 0.12;
    }
    return ppn;
}

int main() {
    cout << "Masukkan omset penjualan: ";
    cin >> omset;

    pajak = countPajak(omset);
    cukai = countCukai(omset);
    retribusi = countRetribusi(omset);
    ppn = countPpn(omset);

    cout << "Pajak yang harus dibayar: Rp " << pajak << endl;
    cout << "Cukai yang harus dibayar: Rp " << cukai << endl;
    cout << "Retribusi yang harus dibayar: Rp " << retribusi << endl;
    cout << "PPN yang harus dibayar: Rp " << ppn << endl;

    return 0;
}
