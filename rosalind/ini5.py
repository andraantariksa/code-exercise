f_name = input()
f = open(f_name, "r")
text = f.read().split("\n")
f.close()
f = open("out-"+f_name, "w+")
for k, v in enumerate(text):
    if k % 2 != 0:
        f.write("{}\n".format(v))
f.close()
