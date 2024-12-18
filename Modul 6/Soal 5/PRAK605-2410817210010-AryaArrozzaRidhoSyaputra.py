n=int(input())

print("Matriks A")
matrix1=[]
for i in range(n):
    row=list(map(int,input().split()))
    matrix1.append(row)

print("Matriks B")
matrix2=[]
for i in range(n):
    row2=list(map(int,input().split()))
    matrix2.append(row2)

result = [[0] * n for _ in range(n)]

for i in range(n): 
    for j in range(n):
        for k in range(n):
            result[i][j] += matrix1[i][k] * matrix2[k][j]

print("Matriks AXB")
for row in result:
        print(" ".join(map(str, row)))