n = int(input())
for i in range(n):
    max_ = 0
    site = {}
    for _ in range(10):
        a = input().split()
        if int(a[1]) not in site:
            site[int(a[1])] = []
        site[int(a[1])].append(a[0])
    print("Case #{}:".format(i+1))
    print("\n".join(site[max(site)]))
