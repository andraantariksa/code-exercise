a = tuple(map(int, input().split()))
print(sum(filter(lambda x: x%2, [i for i in range(a[0], a[1]+1)])))
