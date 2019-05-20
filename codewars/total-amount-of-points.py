def points(games):
    point = 0
    for i in games:
        x, y = int(i[0]), int(i[2])
        if x > y:
            point += 3
        elif x < y:
            pass
        elif x == y:
            point += 1
    return point
