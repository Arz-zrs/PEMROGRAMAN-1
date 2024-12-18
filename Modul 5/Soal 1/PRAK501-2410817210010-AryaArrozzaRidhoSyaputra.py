def MaxBilangan(a, b, c, d):
    if a >= b and a >= c and a >= d:
        return a
    elif b >= a and b >= c and b >= d:
        return b
    elif c >= b and c >= a and c >= d:
        return c
    elif d >= b and d >= c and d >= a:
        return d
    
def main():
    a, b, c, d = map(int,input().split())

    hasil = MaxBilangan(a, b, c, d)
    print(hasil)

if __name__ == "__main__":
    main()