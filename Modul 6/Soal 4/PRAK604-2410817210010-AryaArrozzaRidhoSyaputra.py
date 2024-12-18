kode=input()
kata=input()

if len(kode)!=len(kata):
    print("Panjang Kalimat berbeda, kata palsu")
else :
    bintang=0
    pagar=0
    word=""

    for i,j in zip(kode,kata):
        if i==" " and j==" ":
            word+=" "
            continue

        if i==j:
            word +="*"
            bintang +=1

        else:
            word+="#"
            pagar +=1

    print(word)
    print("* = ",bintang)
    print("# = ",pagar)

    if bintang >= pagar:
        print("Pesan Asli")
    else:
        print("Pesan Palsu")