/*
Saya Rifanny Lysara Annastasya [2200163] mengerjakan LP4 dalam mata kuliah
Desain dan Pemrograman Berorientasi Objek (DPBO) untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

#include <bits/stdc++.h> // Header untuk seluruh library standar
#include "Vehicle.cpp" // Header untuk kelas Vehicle
#include "Car.cpp" // Header untuk kelas Car
#include "Motorcycle.cpp" // Header untuk kelas Motorcycle
#include "Garage.cpp" // Header untuk kelas Garage
#include "ParkingLot.cpp" // Header untuk kelas ParkingLot
#include <list> // Header untuk menggunakan list

using namespace std; // Menggunakan namespace std

int main() { // Fungsi utama main
    // Hardcode data untuk Garage
    Garage garage("Garasi AEON JGC", 200); // Membuat objek garage dengan nama "Garasi A" dan luas 200
    garage.tambahKendaraan(new Car("B 2911 KWM", "Honda", "2020", "Merah", 5, 4)); // Menambahkan mobil ke garage
    garage.tambahKendaraan(new Car("D 1606 SBO", "Toyota", "2018", "Hitam", 4, 4)); // Menambahkan mobil ke garage
    garage.tambahKendaraan(new Motorcycle("G 1402 KDZ", "Suzuki", "2021", "Biru", "Trail", "7 L")); // Menambahkan motor ke garage

    // Data di Garage
    cout << "Data di Garage " << endl; // Menampilkan judul "Data di Garage"
    garage.displayInfo(); // Menampilkan informasi dari garage
    cout << endl; // Menampilkan baris kosong

    // Hardcode data untuk Parking Lot
    ParkingLot parkingLot(100); // Membuat objek parkingLot dengan kapasitas 100
    parkingLot.tambahKendaraan(new Motorcycle("H 4809 EF", "Yamaha", "2019", "Hitam", "Sport", "5 L")); // Menambahkan motor ke parkingLot
    parkingLot.tambahKendaraan(new Car("J 1212 KL", "Mitsubishi", "2017", "Silver", 5, 4)); // Menambahkan mobil ke parkingLot
    parkingLot.tambahKendaraan(new Car("N 3089 OP", "Nissan", "2020", "Putih", 5, 4)); // Menambahkan mobil ke parkingLot

    // Data di Parking Lot
    cout << "Data di Parking Lot " << endl; // Menampilkan judul "Data di Parking Lot"
    parkingLot.displayInfo(); // Menampilkan informasi dari parkingLot

    return 0; // Mengembalikan nilai 0 yang menandakan program berakhir dengan sukses
}
