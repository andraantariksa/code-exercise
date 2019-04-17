import re

def LongestWord(sen):
    d = {}
    str_l = re.sub(r"[^a-zA-Z0-9 ]", r"", sen).split()
    max_str = ""
    for i in str_l:
        if len(i) > len(max_str):
            max_str = i
    return max_str

print LongestWord(raw_input())
