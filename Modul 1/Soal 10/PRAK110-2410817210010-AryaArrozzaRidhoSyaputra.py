from math import sqrt

height = 12
floor = 5

print(f"Diketahui: ")
print(f"Alas = {floor} cm")
print(f"Tinggi = {height} cm")

hypotenuse = sqrt((height * height) + (floor * floor))
perimeter = height + floor + hypotenuse
area = 0.5 * floor * height

print("")
print("Jawaban :")
print(f"Sisi A = {height} cm")
print(f"Sisi B = {hypotenuse:.0f} cm")
print(f"Sisi C = {floor} cm")
print(f"Keliling = {perimeter:.0f} cm")
print(f"Luas = {area:.0f} cm")