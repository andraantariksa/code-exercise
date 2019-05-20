while True:
    try:
        a = int(input())
        b = int(input())
        print(round(b**(1/a)))
    except EOFError:
        break
