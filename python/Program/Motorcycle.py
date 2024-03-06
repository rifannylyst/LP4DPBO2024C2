from Vehicle import Vehicle

# Definisikan kelas Motorcycle yang merupakan turunan dari kelas Vehicle
class Motorcycle(Vehicle):
    # Constructor untuk inisialisasi objek Motorcycle
    def __init__(self, platNomor, merk, tahunProduksi, warna, jenisMotor, kapasitasTangki):
        super().__init__(platNomor, merk, tahunProduksi, warna)
        self.jenisMotor = jenisMotor
        self.kapasitasTangki = kapasitasTangki

    # Fungsi untuk menampilkan informasi kendaraan motor
    def displayInfo(self):
        super().displayInfo()
        print("Jenis Motor        :", self.jenisMotor)
        print("Kapasitas Tangki   :", self.kapasitasTangki)

    # Fungsi untuk mendapatkan jenis kendaraan
    def getJenisKendaraan(self):
        return "Motor"
