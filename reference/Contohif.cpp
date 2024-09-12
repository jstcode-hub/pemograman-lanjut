#include <iostream>
using namespace std;

int main() {
    int nilai =40 ;// Ganti nilai ini sesuai kebutuhan
    char grade;
    string comment;

    if (nilai >= 90) {
        grade = 'A';
        if (nilai >= 95) {
            comment = "Excellent!";
        } else {
            comment = "Great job!";
        }
    } else if (nilai >= 80) {
        grade = 'B';
        if (nilai >= 85) {
            comment = "Good job!";
        } else {
            comment = "Keep improving!";
        }
    } else if (nilai >= 70) {
        grade = 'C';
        if (nilai >= 75) {
            comment = "Satisfactory";
        } else {
            comment = "Needs more effort";
        }
    } else if (nilai >= 60) {
        grade = 'D';
        if (nilai >= 65) {
            comment = "Try harder";
        } else {
            comment = "Almost there";
        }
    } else if (nilai >= 50) {
        grade = 'E';
        if (nilai >= 55) {
            comment = "Barely passing";
        } else {
            comment = "Consider retaking the exam";
        }
    } else {
        grade = 'F';
        comment = "Failed - Study more!";
    }

    cout << "Nilai Anda: " << nilai << ", Grade: " << grade << ", Komentar: " << comment << endl;

    return 0;
}
