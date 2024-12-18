nilai = int(input())

if nilai > 100:
    print("Input Tidak Valid")
elif nilai >= 80:
    print("A")
elif nilai >= 70:
    print("B")
elif nilai >= 60:
    print("C")
elif nilai >= 50:
    print("D")
elif nilai >= 0:
    print("E")
else:
    print("Input Tidak Valid")