'''input
WUBWEWUBAREWUBWUBTHEWUBCHAMPIONSWUBMYWUBFRIENDWUB
'''
import re

inp = re.sub(' +', ' ',input('').replace('WUB',' ').strip())
print(inp)