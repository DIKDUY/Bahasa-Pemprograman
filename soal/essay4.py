def menu():
    print("Pilih operasi:")
    print("1. Tambah")
    print("2. Kurang")
    print("3. Kali")
    print("4. Bagi")

def tambah():
    a = int(input("Masukkan angka pertama: "))
    b = int(input("Masukkan angka kedua: "))
    print(f"Hasil: {a + b}")

def kurang():
    a = int(input("Masukkan angka pertama: "))
    b = int(input("Masukkan angka kedua: "))
    print(f"Hasil: {a - b}")

def kali():
    a = int(input("Masukkan angka pertama: "))
    b = int(input("Masukkan angka kedua: "))
    print(f"Hasil: {a * b}")

def bagi():
    a = int(input("Masukkan angka pertama: "))
    b = int(input("Masukkan angka kedua: "))
    if b != 0:
        print(f"Hasil: {a // b}")
    else:
        print("Error: Pembagian dengan nol tidak diperbolehkan.")

def main():
    menu()
    pilihan = int(input("Masukkan pilihan Anda: "))
    
    if pilihan == 1:
        tambah()
    elif pilihan == 2:
        kurang()
    elif pilihan == 3:
        kali()
    elif pilihan == 4:
        bagi()
    else:
        print("Pilihan tidak valid.")

if __name__ == "__main__":
    main()