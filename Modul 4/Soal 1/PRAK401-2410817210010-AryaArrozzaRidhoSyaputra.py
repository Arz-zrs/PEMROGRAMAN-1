num, sym = input().split()
num = int(num)

for i in range(1, 51):
    if i % num == 0:
        print(sym, end=" ")
    else:
        print(i, end=" ")