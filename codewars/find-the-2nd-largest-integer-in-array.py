def find_2nd_largest(arr):
    arr = filter(lambda x: type(x) != str, arr)
    max_ = max(arr)
    max__ = -1
    for i in arr:
        if i > max__ and i < max_:
            max__ = i
    if max__ == -1:
        return None
    return max__
