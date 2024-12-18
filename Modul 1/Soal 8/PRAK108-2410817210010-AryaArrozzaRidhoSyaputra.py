from math import pi

rotations = 5
distance = 14

print("Diketahui :")
print(f"Pak Dengklek mengelilingi taman = {rotations} putaran")
print(f"Jarak tempuk Pak Dengklek {distance} Kilometer")

circumference = distance / rotations
radius = circumference / (2 * pi)

print("")
print("Jawaban :")
print(f"Jari-jari taman yang dikelilingi Pak Dengklek adalah {radius:.2f}")