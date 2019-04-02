for i in range(int(input())):
    a = list(map(int, input().split()))
    a.remove(max(a))
    a.remove(min(a))
    print("Case {}: {}".format(i+1, a[0]))
