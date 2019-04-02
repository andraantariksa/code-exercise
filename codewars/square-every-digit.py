def square_digits(num):
    out = ""
    for i in str(num):
        out += str(int(i)**2)
    return int(out)
