i = 1
while True:
    inp = input()
    if inp == "Hajj":
        inp = "Hajj-e-Akbar"
    elif inp == "Umrah":
        inp = "Hajj-e-Asghar"
    else:
        break
    print("Case {}: {}".format(i, inp))
    i += 1
