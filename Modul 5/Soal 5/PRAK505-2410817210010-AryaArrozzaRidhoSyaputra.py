def Biodata(Namaku, Asal, tahunLahir):
    tahun_sekarang = 2020
    print("\nPerkenalkan nama saya:", Namaku)
    print("Umur Saya:", tahun_sekarang - tahunLahir)
    print("Saya Adalah Angkatan:", tahun_sekarang)
    print("Asal saya dari:", Asal)

def main():
    tahunLahir = int(input())
    Namaku = input()
    Asal = input()
    
    Biodata(Namaku, Asal, tahunLahir)

if __name__ == "__main__":
    main()