from Garage import Garage
from ParkingLot import ParkingLot
from Car import Car
from Motorcycle import Motorcycle

# Main function
if __name__ == "__main__":
    # Hardcode data untuk Garage
    garage = Garage("Garasi AEON JGC", 200)
    garage.tambahKendaraan(Car("B 2911 KWM", "Honda", "2020", "Merah", 5, 4))
    garage.tambahKendaraan(Car("D 1606 SBO", "Toyota", "2018", "Hitam", 4, 4))
    garage.tambahKendaraan(Motorcycle("G 1402 KDZ", "Suzuki", "2021", "Biru", "Trail", "7 L"))

    # Data di Garage
    print("Data di Garage")
    garage.displayInfo()
    print()

    # Hardcode data untuk Parking Lot
    parkingLot = ParkingLot(100)
    parkingLot.tambahKendaraan(Motorcycle("H 4809 EF", "Yamaha", "2019", "Hitam", "Sport", "5 L"))
    parkingLot.tambahKendaraan(Car("J 1212 KL", "Mitsubishi", "2017", "Silver", 5, 4))
    parkingLot.tambahKendaraan(Car("N 3089 OP", "Nissan", "2020", "Putih", 5, 4))

    # Data di Parking Lot
    print("Data di Parking Lot")
    parkingLot.displayInfo()
