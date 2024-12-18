limit=int(input())
arr=list(map(int,input().split()))
for i in range(limit):
    print(arr[i]*(i+1), end=" ")