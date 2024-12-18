def maksimal(a, b):
    if a >= b:
        return a
    elif b >= a:
        return b

def minimal(a, b):
    if a <= b:
        return a
    elif b <= a:
        return b

def main():
    maks = -100000
    minim = 100000
    
    bilangan = int(input()) 
    
    values = list(map(int, input().split()))
    
    if len(values) != bilangan:
        print("Error: Input tidak valid")
        return

    for nilai in values:
        maks = maksimal(maks, nilai)
        minim = minimal(minim, nilai)

    print(maks, minim)

if __name__ == "__main__":
    main()