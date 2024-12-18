sA = 400000 
sB = 350000
dcA = 13
dcB = 21

print(f"Variabel a bernilai {sA}")
print(f"Variabel b bernilai {sB}")

pA = sA - (sA * (dcA/100))
pB = sB - (sB * (dcB/100))

print(f"Sepatu A mendapat diskon {dcA}% sehingga harganya menjadi {pA:.0f}")
print(f"Sepatu B mendapat diskon {dcB}% sehingga harganya menjadi {pB:.0f}")