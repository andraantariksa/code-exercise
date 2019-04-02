def swap(st):
    st = list(st)
    for i in range(0, len(st)):
        if st[i] == "a" or st[i] == "i" or st[i] == "u" or st[i] == "e" or st[i] == "o":
            st[i] = st[i].upper()
    return "".join(st)
