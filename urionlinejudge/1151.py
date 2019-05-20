'''input
40
'''
def fib(n):    # write Fibonacci series up to n
    a, b = 0, 1
    first = True
    for _ in range(0, n):
        if not first:
            print("", end=" ")
        else:
            first = False
        print(a, end="")
        a, b = b, a+b
    print()

fib(int(input()))