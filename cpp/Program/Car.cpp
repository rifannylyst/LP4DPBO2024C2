/*
Saya Rifanny Lysara Annastasya [2200163] mengerjakan LP4 dalam mata kuliah
Desain dan Pemrograman Berorientasi Objek (DPBO) untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

// Menggunakan pragma once agar header file hanya di-include satu kali
#pragma once

// Memasukkan library yang digunakan, termasuk kelas induk (kelas Vehicle) dari kelas Sivitas Akademik
#include <iostream>
#include <string>
#include "Vehicle.cpp" // Include header file dari kelas Vehicle
#include <list>

// Deklarasi namespace
using namespace std;

/*
    Kelas sivitas Akademik yang digunakan untuk mempresentasikan data Sivitas
    Akademik, Sivitas Akademik merupakan masyarakat akademik yang terdiri dari atas
    dosen dan mahasiswa. Sehingga kelas Sivitas Akademik merupakan kelas turunan
    dari kelas Vehicle dan kelas induk dari kelas Mahasiswa dan Dosen
*/
class Car : public Vehicle { // Mendefinisikan kelas Car yang merupakan turunan dari kelas Vehicle
private:
    int jumlahKursi; // Variabel untuk menyimpan jumlah kursi
    int jumlahPintu; // Variabel untuk menyimpan jumlah pintu

public:
    // Konstruktor untuk kelas Car
    Car(string platNomor, string merk, string tahunProduksi, string warna, int jumlahKursi, int jumlahPintu)
        : Vehicle(platNomor, merk, tahunProduksi, warna), jumlahKursi(jumlahKursi), jumlahPintu(jumlahPintu) {}

    // Implementasi fungsi displayInfo dari kelas induk (Vehicle)
    void displayInfo() const override {
        Vehicle::displayInfo(); // Memanggil fungsi displayInfo dari kelas Vehicle
        cout << "Jumlah Kursi       : " << jumlahKursi << endl; // Menampilkan jumlah kursi
        cout << "Jumlah Pintu       : " << jumlahPintu << endl; // Menampilkan jumlah pintu
    }

    // Implementasi fungsi getJenisKendaraan dari kelas induk (Vehicle)
    string getJenisKendaraan() const override {
        return "Mobil"; // Mengembalikan informasi jenis kendaraan
    }
};
