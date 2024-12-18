def reverse(num):
    reversed = 0
    while num != 0:
        remainder = num % 10
        reversed = reversed * 10 + remainder
        num //= 10 
    return reversed

def main():
    A, B = map(int, input().split())

    A = reverse(A)
    B = reverse(B)
    
    C = A + B
    print(reverse(C))

if __name__ == "__main__":
    main()