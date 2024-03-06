from Vehicle import Vehicle

# Definisikan kelas Car yang merupakan turunan dari kelas Vehicle
class Car(Vehicle):
    # Konstruktor untuk kelas Car
    def __init__(self, platNomor, merk, tahunProduksi, warna, jumlahKursi, jumlahPintu):
        super().__init__(platNomor, merk, tahunProduksi, warna)
        self.jumlahKursi = jumlahKursi
        self.jumlahPintu = jumlahPintu

    # Implementasi fungsi displayInfo dari kelas induk (Vehicle)
    def displayInfo(self):
        super().displayInfo()
        print("Jumlah Kursi       :", self.jumlahKursi)
        print("Jumlah Pintu       :", self.jumlahPintu)

    # Implementasi fungsi getJenisKendaraan dari kelas induk (Vehicle)
    def getJenisKendaraan(self):
        return "Mobil"
