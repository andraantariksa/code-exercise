def stairs_in_20(stairs):
    tot = 0
    for i in stairs:
        tot += sum(i)
    return tot*20
