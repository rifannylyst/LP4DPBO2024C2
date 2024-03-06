# Definisikan kelas Garage
class Garage:
    # Constructor untuk membuat objek Garage
    def __init__(self, namaGarasi, luasGarasi):
        self.namaGarasi = namaGarasi
        self.luasGarasi = luasGarasi
        self.daftarKendaraan = []

    # Method untuk menambahkan kendaraan ke dalam garasi
    def tambahKendaraan(self, kendaraan):
        self.daftarKendaraan.append(kendaraan)

    # Method untuk menampilkan informasi garasi dan daftar kendaraan yang tersimpan di dalamnya
    def displayInfo(self):
        print("Nama Garasi        :", self.namaGarasi)
        print("Luas Garasi        :", self.luasGarasi, "m^2")
        print("Daftar Kendaraan   :")
        for kendaraan in self.daftarKendaraan:
            print(kendaraan.getJenisKendaraan())
            kendaraan.displayInfo()
            print()
