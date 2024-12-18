#test case 1
radius1 = int(input(" "))
tinggi1 = int(input(" "))

volume1 = 22/7 * radius1 ** 2 * tinggi1
luas1 = 2 * 22/7 * radius1 * (radius1 + tinggi1)
keliling1 = 2 * 22/7 * radius1

print(" ")
print(f"Volume = {volume1:.2f}")
print(f"Luas = {luas1:.2f}")
print(f"Keliling = {keliling1:.2f}")

#test case 2
radius, tinggi = map(int, input(" "). split())

volume = 22/7 * radius ** 2 * tinggi
luas = 2 * 22/7 * radius * (radius + tinggi)
keliling = 2 * 22/7 * radius

print(" ")
print(f"Volume = {volume:.2f}")
print(f"Luas = {luas:.2f}")
print(f"Keliling = {keliling:.2f}")