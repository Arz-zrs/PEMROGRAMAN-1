a, b = map(int,input().split())

i = a
j = b

if i < j:
    while i <= b and j >= a:
        print(i, j, end=" ")

        if i < b or j > a:
            print("-", end=" ")
        i +=1
        j -=1
    
elif i > j:
    while i >= b and j <= a:
        print(i, j, end=" ")

        if i > b or j < a:
            print("-", end=" ")
        i -=1
        j +=1