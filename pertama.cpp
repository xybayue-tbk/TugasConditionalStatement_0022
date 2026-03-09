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
     if (BMI < 18.5)
        return "Berat Badan Kurang Ideal";
    else if (BMI < 25)
        return "Berat Badan  Ideal";
    else if (BMI < 30)
        return "Berat Badan Berlebih";
    else 
        return "Obesitas!";
        
}

int main(){
    return 0;
}