'''input
aaaa bbbb cccc
cccc
xxxxx xxxx xx
'''
a, b, c = input(), input(), input()
print(a+b+c)
print(b+c+a)
print(c+a+b)
print("{}{}{}".format(a[:10], b[:10], c[:10]))