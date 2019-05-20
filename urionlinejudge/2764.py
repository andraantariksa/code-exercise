'''input
02/08/10
'''
a = input().split("/")
print("{1}/{0}/{2}".format(a[0], a[1], a[2]))
print("{2}/{1}/{0}".format(a[0], a[1], a[2]))
print("{}-{}-{}".format(a[0], a[1], a[2]))