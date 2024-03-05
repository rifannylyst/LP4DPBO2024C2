/*
Saya Rifanny Lysara Annastasya [2200163] mengerjakan LP4 dalam mata kuliah
Desain dan Pemrograman Berorientasi Objek (DPBO) untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

// Menggunakan pragma once agar header file hanya di-include satu kali
#pragma once

// Memasukkan library yang digunakan, termasuk kelas induk (kelas Vehicle)
// dari kelas Sivitas Akademik
#include <iostream>
#include <string>
#include "Vehicle.cpp"
#include <list>

// Deklarasi namespace
using namespace std;

/*
    Kelas sivitas Akademik yang digunakan untuk mempresentasikan data Sivitas
Akademik, Sivitas Akademik merupakan masyarakat akademik yang terdiri dari atas
dosen dan mahasiswa. Sehingga kelas Sivitas Akademik merupakan kelas turunan
dari kelas Vehicle dan kelas induk dari kelas Mahasiswa dan Dosen
*/
class Motorcycle : public Vehicle {
private:
    string jenisMotor;
    string kapasitasTangki;

public:
    // Constructor untuk inisialisasi objek Motorcycle
    Motorcycle(string platNomor, string merk, string tahunProduksi, string warna, string jenisMotor, string kapasitasTangki)
        : Vehicle(platNomor, merk, tahunProduksi, warna), jenisMotor(jenisMotor), kapasitasTangki(kapasitasTangki) {}

    // Fungsi untuk menampilkan informasi kendaraan motor
    void displayInfo() const override {
        Vehicle::displayInfo();
        cout << "Jenis Motor        : " << jenisMotor << endl;
        cout << "Kapasitas Tangki   : " << kapasitasTangki << endl;
    }

    // Fungsi untuk mendapatkan jenis kendaraan
    string getJenisKendaraan() const override {
        return "Motor";
    }
};
