s = input().replace("A", "_").replace("T", "A").replace("_", "T").replace("G", "_").replace("C", "G").replace("_", "C")
print(s[::-1])
