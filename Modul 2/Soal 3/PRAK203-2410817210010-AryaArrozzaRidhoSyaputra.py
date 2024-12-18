#test case 1
a1, b1, i1, j1, x1, y1 = map(int, input(" ").split())

result = (((a1 - b1) * i1) / j1) - (x1 + y1)

print(f"{result:.3f}")

#test case 2
a, b = map(int, input(" ").split())
i, j = map(int, input(" ").split())
x, y = map(int, input(" ").split())

result = (((a - b) * i) / j) - (x + y)

print(f"{result:.3f}")