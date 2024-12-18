def jumlah():
    a = float(input("Masukkan nilai pertama: "))
    b = float(input("Masukkan nilai kedua: "))
    sum = a + b
    print(f"Hasil penjumlahan antara {a:.2f} dengan {b:.2f} adalah {sum:.2f}\n")

def kurang():
    a = float(input("Masukkan nilai pertama: "))
    b = float(input("Masukkan nilai kedua: "))
    difference = a - b
    print(f"Hasil pengurangan antara {a:.2f} dengan {b:.2f} adalah {difference:.2f}\n")

def kali():
    a = float(input("Masukkan nilai pertama: "))
    b = float(input("Masukkan nilai kedua: "))
    product = a * b
    print(f"Hasil perkalian antara {a:.2f} dengan {b:.2f} adalah {product:.2f}\n")

def bagi():
    a = float(input("Masukkan nilai pertama: "))
    b = float(input("Masukkan nilai kedua: "))
    quotient = a / b
    print(f"Hasil pembagian antara {a:.2f} dengan {b:.2f} adalah {quotient:.2f}\n")

def end():
    print("Terimakasih, telah menggunakan kalkulator Arya Arrozza Ridho Syaputra")

def err():
    print("Input anda salah, silahkan coba lagi\n")

def begin():
    print("Pilih Program")
    print("1. Penjumlahan")
    print("2. Pengurangan")
    print("3. Perkalian")
    print("4. Pembagian")
    print("5. Exit")
    return input("Masukkan Pilihan: ")

def main():
    while True:
        prog = begin()
        if prog == "1":
            jumlah()
        elif prog == "2":
            kurang()
        elif prog == "3":
            kali()
        elif prog == "4":
            bagi()
        elif prog == "5":
            end()
            break
        else:
            err()

if __name__ == "__main__":
    main()