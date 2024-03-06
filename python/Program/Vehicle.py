# Definisikan kelas Vehicle
class Vehicle:
    # Konstruktor untuk menginisialisasi atribut-atribut Vehicle
    def __init__(self, platNomor, merk, tahunProduksi, warna):
        self.platNomor = platNomor
        self.merk = merk
        self.tahunProduksi = tahunProduksi
        self.warna = warna

    # Fungsi untuk menampilkan informasi mengenai kendaraan
    def displayInfo(self):
        print("Plat Nomor         :", self.platNomor)
        print("Merk               :", self.merk)
        print("Tahun Produksi     :", self.tahunProduksi)
        print("Warna              :", self.warna)

    # Fungsi untuk mendapatkan jenis kendaraan
    def getJenisKendaraan(self):
        return "Kendaraan"
