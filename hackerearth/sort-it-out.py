input()
l = list(map(int, input().split()))
l_ = [str(i) for i in range(len(l))]
again = True
while again:
    again = False
    for i in range(len(l)-1):
        if l[i] > l[i+1]:
            l[i], l[i+1], l_[i], l_[i+1] = l[i+1], l[i], l_[i+1], l_[i]
            again = True

print(" ".join(l_))
