'''input
10
URA URO URI URU UROS IBO OBA OBAS OBES OBE
'''
import re

input('')
inp = input('')
inp = re.sub(r"\bUR\w\b", "URI", inp)
inp = re.sub(r"\bOB\w\b", "OBI", inp)
print(inp)