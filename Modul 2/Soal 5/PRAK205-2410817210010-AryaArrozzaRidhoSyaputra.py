import math

#test case 1
A1, B1 = map(int, input(" ").split())

C1 = math.sqrt((B1 ** 2) - (A1 ** 2))
Keliling1 = A1 + B1 + C1
Luas1 = 0.5 * C1 * A1

print(" ")
print(f"Alas = {C1:.0f} cm")
print(f"Tinggi = {A1:.0f} cm")
print(f"Keliling = {Keliling1:.0f} cm")
print(f"Luas = {Luas1:.0f} cm^2")

#test case 2
A = int(input(" "))
B = int(input(" "))

C = math.sqrt((B ** 2) - (A ** 2))
Keliling = A + B + C
Luas = 0.5 * C * A

print(" ")
print(f"Alas = {C:.0f} cm")
print(f"Tinggi = {A:.0f} cm")
print(f"Keliling = {Keliling:.0f} cm")
print(f"Luas = {Luas:.0f} cm^2")