'''input
xqjqmenkodmlhzyzmmvofdngktygbbxbzpluzcohohmalkoeuwfikblltaaigv
'''
hello = "hello"
helloi = 0
inp = input('')

for i in inp:
	if i == hello[helloi]:
		helloi = helloi + 1
		if helloi == 5:
			print("YES")
			exit()

print("NO")