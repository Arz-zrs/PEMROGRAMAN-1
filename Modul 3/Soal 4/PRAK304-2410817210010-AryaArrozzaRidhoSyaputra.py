a = int(input())

if a == 0:
    print("Nol")
elif a > 0 and a < 10:
    print("Satuan")
elif a > 10 and a < 20:
    print("Belasan")
elif a == 10 or a >= 20 and a < 100:
    print("Puluhan")
else:
    print("Anda Menginput Melebihi Limit Bilangan")