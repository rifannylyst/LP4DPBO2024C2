/*
Saya Rifanny Lysara Annastasya [2200163] mengerjakan LP4 dalam mata kuliah
Desain dan Pemrograman Berorientasi Objek (DPBO) untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

// Menggunakan pragma once agar header file hanya di-include satu kali
#pragma once

// Memasukkan library yang dibutuhkan
#include <iostream>  // Library untuk input-output stream
#include <string>    // Library untuk string
#include "Vehicle.cpp"  // Header file dari kelas Vehicle
#include <vector>    // Library untuk container vector

// Deklarasi namespace
using namespace std;

/*
    Kelas Garage yang digunakan untuk merepresentasikan data garasi.
    Garasi memiliki nama, luas, dan daftar kendaraan yang tersimpan di dalamnya.
*/

class Garage {
private:
    string namaGarasi;                // Nama garasi
    int luasGarasi;                   // Luas garasi
    vector<Vehicle*> daftarKendaraan; // Daftar kendaraan dalam garasi

public:
    // Constructor untuk membuat objek Garage
    Garage(string namaGarasi, int luasGarasi)
        : namaGarasi(namaGarasi), luasGarasi(luasGarasi) {}

    // Method untuk menambahkan kendaraan ke dalam garasi
    void tambahKendaraan(Vehicle* kendaraan) {
        daftarKendaraan.push_back(kendaraan);
    }

    // Method untuk menampilkan informasi garasi dan daftar kendaraan yang tersimpan di dalamnya
    void displayInfo() const {
        cout << "Nama Garasi        : " << namaGarasi << endl;       // Menampilkan nama garasi
        cout << "Luas Garasi        : " << luasGarasi << " m^2" << endl;  // Menampilkan luas garasi
        cout << "Daftar Kendaraan   :" << endl;                      // Menampilkan daftar kendaraan
        for (const Vehicle* kendaraan : daftarKendaraan) {         // Iterasi melalui daftar kendaraan
            cout << kendaraan->getJenisKendaraan() << endl;        // Menampilkan jenis kendaraan
            kendaraan->displayInfo();                               // Menampilkan info kendaraan
            cout << endl;                                           // Pindah baris
        }
    }

    // Method untuk mendapatkan jumlah kendaraan yang tersimpan di dalam garasi
    int getJumlahKendaraan() const {
        return daftarKendaraan.size();  // Mengembalikan jumlah kendaraan dalam garasi
    }
};
