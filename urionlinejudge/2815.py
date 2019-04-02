import re

print(re.sub(r"\b(..)\1(?!\1)", r"\1", input()))
