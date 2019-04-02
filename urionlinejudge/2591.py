for _ in range(int(input())):
    a1 = True
    a1_ = True
    al = 0
    ar = 0
    for i in input():
        if i == "a":
            if a1:
                al += 1
                a1_ = False
            else:
                ar += 1
        else:
            if not a1_:
                a1 = False

    print("k{}".format("".join(["a" for _ in range(al*ar)])))
