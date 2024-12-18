s = int(input())

if s < 86400:
    m = s // 60
    h = m // 60
    s %= 60
    m %= 60
    print(f"{h:02}:{m:02}:{s:02}")
else:
    d = s // 86400
    m = s // 60
    h = m // 60
    h %= 24
    s %= 60
    m %= 60
    print(f"{d} hari {h:02}:{m:02}:{s:02}")