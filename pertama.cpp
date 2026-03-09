#include <iostream>
using namespace std;

float Berat, Tinggi;

void inputData(){
    cout << std::endl;
    cout << "--- Selamat Datang Mahasiswa Kelas A 2025 ---" << endl;
    cout << "Masukkan Berat Badan (kg): ";
    cin >> Berat;
    cout << "Masukkan Tinggi Badan (m): ";
    cin >> Tinggi;

}

float hitungBMI (float x, float y){
    return x / (y * y);

}

string statusBMI (float BMI){
    
}