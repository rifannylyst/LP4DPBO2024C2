# LP4DPBO2024C2

Saya Rifanny Lysara Annastasya [2200163] mengerjakan LP4 dalam mata kuliah
Desain dan Pemrograman Berorientasi Objek (DPBO) untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

# Desain Program
1. **Kelas Vehicle**: Ini adalah kelas abstrak yang mendefinisikan atribut dasar yang dimiliki oleh setiap kendaraan, seperti `platNomor`, `merk`, `tahunProduksi`, dan `warna`. Kelas ini juga memiliki metode virtual murni `displayInfo()` untuk menampilkan informasi tentang kendaraan dan metode virtual `getJenisKendaraan()` untuk mendapatkan jenis kendaraan.
2. **Kelas Car dan Motorcycle**: Ini adalah kelas-kelas turunan dari `Vehicle` yang merepresentasikan jenis kendaraan spesifik, yaitu mobil dan motor. Setiap kelas memiliki atribut tambahan yang unik untuk jenis kendaraan tersebut. Misalnya, `Car` memiliki atribut `jumlahKursi` dan `jumlahPintu`, sedangkan `Motorcycle` memiliki atribut `jenisMotor` dan `kapasitasTangki`. Kedua kelas ini mengimplementasikan metode virtual `displayInfo()` dan `getJenisKendaraan()` dari kelas induk.
3. **Kelas Garage dan ParkingLot**: Ini adalah kelas-kelas komposit yang dapat mengelola koleksi kendaraan. `Garage` merepresentasikan sebuah garasi dengan kapasitas tertentu. Ini memiliki atribut seperti `namaGarasi` dan `luasGarasi`, serta menyimpan daftar kendaraan (`daftarKendaraan`) yang merupakan kumpulan objek `Vehicle`. `ParkingLot` juga memiliki atribut kapasitas dan menyimpan daftar kendaraan (`kendaraan`) dalam sebuah vektor.
4. **Fungsi tambahKendaraan()**: Kedua kelas `Garage` dan `ParkingLot` memiliki metode `tambahKendaraan()` untuk menambahkan kendaraan ke dalam struktur mereka. Jika kapasitas masih mencukupi, kendaraan baru akan ditambahkan ke dalam daftar kendaraan.
5. **Fungsi displayInfo()**: Kedua kelas `Garage` dan `ParkingLot` memiliki metode `displayInfo()` yang memungkinkan untuk menampilkan informasi tentang struktur tersebut beserta daftar kendaraan yang ada di dalamnya. Metode ini akan memanggil metode `displayInfo()` dari setiap kendaraan dalam daftar.

# Desain Diagram
![diagramLP4](https://github.com/rifannylyst/LP4DPBO2024C2/assets/147616851/c894278d-6c34-4a49-ac7a-91b53eceaf83)

# Alur Program
1. **Deklarasi Kelas-Kelas Utama**:
    - Program dimulai dengan mendeklarasikan kelas-kelas utama yang akan digunakan, yaitu `Vehicle`, `Car`, `Motorcycle`, `Garage`, dan `Parking Lot`.
    - Setiap kelas memiliki atribut dan metode yang sesuai dengan perannya dalam program.
2. **Implementasi Kelas Vehicle**:
    - Kelas `Vehicle` merupakan kelas abstrak yang memiliki atribut umum untuk kendaraan seperti plat nomor, merk, tahun produksi, dan warna.
    - Kelas ini juga memiliki metode untuk menampilkan informasi kendaraan dan mendapatkan jenis kendaraan.
    - Metode `displayInfo()` dan `getJenisKendaraan()` bersifat virtual sehingga dapat diimplementasikan ulang di kelas turunannya.
3. **Implementasi Kelas Car dan Motorcycle**:
    - Kelas `Car` dan `Motorcycle` adalah turunan dari kelas `Vehicle`, masing-masing merepresentasikan kendaraan mobil dan motor.
    - Mereka memiliki atribut tambahan yang sesuai dengan jenis kendaraan, seperti jumlah kursi dan pintu untuk mobil, dan jenis motor serta kapasitas tangki untuk motor.
    - Kedua kelas ini mengimplementasikan ulang metode `displayInfo()` dan `getJenisKendaraan()` sesuai dengan karakteristik masing-masing kendaraan.
4. **Implementasi Kelas Garage**:
    - Kelas `Garage` merepresentasikan garasi yang memiliki daftar kendaraan yang disimpan di dalamnya.
    - Dalam implementasi ini, garasi dapat menambahkan kendaraan ke dalam daftar, serta menampilkan informasi tentang garasi beserta daftar kendaraannya.
5. **Implementasi Kelas Parking Lot**:
    - Kelas `Parking Lot` merepresentasikan tempat parkir yang memiliki kapasitas tertentu dan dapat menampung kendaraan.
    - Dalam implementasi ini, tempat parkir dapat menambahkan kendaraan ke dalamnya jika masih ada kapasitas tersedia, serta menampilkan informasi tentang jumlah kendaraan yang terparkir dan daftar kendaraannya.
6. **Fungsi Main**:
    - Fungsi `main()` adalah titik masuk utama program.
    - Pada fungsi `main()`, objek-objek dari kelas `Garage` dan `Parking Lot` dibuat, kemudian kendaraan-kendaraan ditambahkan ke dalamnya.
    - Informasi tentang garasi dan tempat parkir kemudian ditampilkan menggunakan metode `displayInfo()` yang telah diimplementasikan dalam kelas masing-masing.

# Screenshot output
![OUTPUT](https://github.com/rifannylyst/LP4DPBO2024C2/assets/147616851/d440e4f9-b51e-407e-88b9-b2a97a7b4c73)
