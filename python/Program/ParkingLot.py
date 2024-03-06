# Definisikan kelas ParkingLot
class ParkingLot:
    # Konstruktor untuk membuat objek ParkingLot
    def __init__(self, kapasitas):
        self.kapasitas = kapasitas
        self.kendaraan = []
        self.jumlahKendaraanSaatIni = 0

    # Fungsi untuk menambahkan kendaraan ke dalam parking lot
    def tambahKendaraan(self, vehicle):
        if self.jumlahKendaraanSaatIni < self.kapasitas:
            self.kendaraan.append(vehicle)
            self.jumlahKendaraanSaatIni += 1
            print("Kendaraan berhasil ditambahkan ke dalam Parking Lot.")
        else:
            print("Parking Lot penuh. Tidak dapat menambahkan kendaraan lagi.")

    # Fungsi untuk menampilkan informasi tentang parking lot dan kendaraan yang terparkir
    def displayInfo(self):
        print("Kapasitas Parking Lot      :", self.kapasitas)
        print("Jumlah Kendaraan Saat Ini  :", self.jumlahKendaraanSaatIni)
        print("Daftar Kendaraan           :")
        for kendaraan in self.kendaraan:
            print(kendaraan.getJenisKendaraan())
            kendaraan.displayInfo()
            print()
