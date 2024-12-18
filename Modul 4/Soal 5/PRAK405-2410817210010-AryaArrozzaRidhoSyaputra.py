num, mul = map(int, input().split())
total = 0

for i in range(1, num + 1):
    Snum = 0
    print("(", end="")

    for j in range(1, i + 1):
        print(j, "*", mul, end="")
        Snum += j * mul

        if j < i:
            print(" + ", end="")

    print(") = ", Snum)
    total += Snum

print(total)