import math as m

def hitung(nilai1, nilai2):
    return m.sqrt((nilai2 - nilai1) ** 2)

def mutlak(angka):
    if angka >= 0:
        return angka
    else:
        return -angka
    
def main():
    a, b, c, d = map(int,input().split())
    Hasil = int(hitung(a, c) + hitung(b, d))
    print(mutlak(Hasil))

if __name__ == "__main__":
    main()