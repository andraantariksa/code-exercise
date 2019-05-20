def toJadenCase(string):
    string = list(string.title())
    for i in range(0, len(string)-1):
        if string[i] == "'" or string[i] == "\"":
            string[i+1] = string[i+1].lower()
    return "".join(string)
