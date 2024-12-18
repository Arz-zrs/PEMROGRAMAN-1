row,column=map(int, input().split())
arr=list(map(int, input().split()))
for i in range(row):
    print(*arr[i*column:(i+1)*column])