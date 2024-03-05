/*
Saya Rifanny Lysara Annastasya [2200163] mengerjakan LP4 dalam mata kuliah
Desain dan Pemrograman Berorientasi Objek (DPBO) untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

// Menggunakan pragma once agar header file hanya di-include satu kali 
#pragma once
// Memasukkan library yang digunakan
#include <iostream>
#include <string>
#include <list>

// Deklarasi namespace
using namespace std;

/*
    Kelas Vehicle yang digunakan untuk mempresentasikan data Vehicle, Vehicle
    merupakan kelas induk dari kelas SivitasAkademik dan buyut dari kelas
    Mahasiswa dan Dosen
*/

class Vehicle {
protected:
    string platNomor;
    string merk;
    string tahunProduksi;
    string warna;

public:
    // Constructor untuk menginisialisasi atribut-atribut Vehicle
    Vehicle(string platNomor, string merk, string tahunProduksi, string warna)
        : platNomor(platNomor), merk(merk), tahunProduksi(tahunProduksi), warna(warna) {}

    // Fungsi untuk menampilkan informasi mengenai kendaraan
    virtual void displayInfo() const {
        cout << "Plat Nomor         : " << platNomor << endl;
        cout << "Merk               : " << merk << endl;
        cout << "Tahun Produksi     : " << tahunProduksi << endl;
        cout << "Warna              : " << warna << endl;
    }

    // Fungsi untuk mendapatkan jenis kendaraan
    virtual string getJenisKendaraan() const {
        return "Kendaraan";
    }

    // Destructor virtual untuk memastikan pemanggilan destructor yang tepat pada subclass
    virtual ~Vehicle() {}
};
