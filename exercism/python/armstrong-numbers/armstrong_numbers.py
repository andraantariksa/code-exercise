def is_armstrong(number):
    number_len = len(str(number))
    total = 0
    number_t = number
    while number_t > 0:
        total += (number_t % 10)**number_len
        number_t //= 10
    if total == number:
        return True
    else:
        return False
