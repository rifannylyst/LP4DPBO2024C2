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
#include "Vehicle.cpp" // Memasukkan definisi kelas Vehicle
#include <vector>

// Deklarasi namespace
using namespace std;

/*
    Kelas sivitas Akademik yang digunakan untuk mempresentasikan data Sivitas
Akademik, Sivitas Akademik merupakan masyarakat akademik yang terdiri dari atas
dosen dan mahasiswa. Sehingga kelas Sivitas Akademik merupakan kelas turunan
dari kelas Vehicle dan kelas induk dari kelas Mahasiswa dan Dosen
*/

class ParkingLot {
private:
    int kapasitas; // Variabel untuk menyimpan kapasitas parkir
    vector<Vehicle*> kendaraan; // Vektor untuk menyimpan kendaraan yang terparkir
    int jumlahKendaraanSaatIni; // Variabel untuk menyimpan jumlah kendaraan saat ini

public:
    ParkingLot(int kapasitas)
        : kapasitas(kapasitas), jumlahKendaraanSaatIni(0) {} // Konstruktor untuk menginisialisasi kapasitas dan jumlah kendaraan saat ini

    int getKapasitas() const { // Fungsi untuk mendapatkan kapasitas parkir
        return kapasitas;
    }

    int getJumlahKendaraanSaatIni() const { // Fungsi untuk mendapatkan jumlah kendaraan saat ini
        return jumlahKendaraanSaatIni;
    }

    void tambahKendaraan(Vehicle* vehicle) { // Fungsi untuk menambahkan kendaraan ke dalam parking lot
        if (jumlahKendaraanSaatIni < kapasitas) { // Memeriksa apakah masih ada kapasitas parkir yang tersedia
            kendaraan.push_back(vehicle); // Menambahkan kendaraan ke dalam vektor
            jumlahKendaraanSaatIni++; // Menambah jumlah kendaraan saat ini
            cout << "Kendaraan berhasil ditambahkan ke dalam Parking Lot." << endl; // Pesan berhasil ditambahkan
        } else {
            cout << "Parking Lot penuh. Tidak dapat menambahkan kendaraan lagi." << endl; // Pesan jika parking lot penuh
        }
    }

    vector<Vehicle*> getKendaraan() const { // Fungsi untuk mendapatkan daftar kendaraan yang terparkir
        return kendaraan;
    }

    ~ParkingLot() { // Destruktor untuk membersihkan memori dari objek kendaraan
        for (auto kendaraan : kendaraan) {
            delete kendaraan;
        }
    }

    void displayInfo() const { // Fungsi untuk menampilkan informasi tentang parking lot dan kendaraan yang terparkir
        cout << "Kapasitas Parking Lot      : " << kapasitas << endl; // Menampilkan kapasitas parkir
        cout << "Jumlah Kendaraan Saat Ini  : " << jumlahKendaraanSaatIni << endl; // Menampilkan jumlah kendaraan saat ini
        cout << "Daftar Kendaraan           : " << endl; // Menampilkan daftar kendaraan
        for (const auto kendaraan : kendaraan) { // Loop untuk setiap kendaraan dalam vektor
            cout << kendaraan->getJenisKendaraan() << endl; // Menampilkan info jenis kendaraan
            kendaraan->displayInfo(); // Menampilkan info detail kendaraan
            cout << endl; // Baris kosong untuk pemisah antara kendaraan
        }
    }
};
