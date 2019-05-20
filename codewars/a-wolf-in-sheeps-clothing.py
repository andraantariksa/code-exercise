def warn_the_sheep(queue):
    if queue[-1] == "wolf":
        return "Pls go away and stop eating my sheep"
    else:
        return "Oi! Sheep number {}! You are about to be eaten by a wolf!".format(len(queue)-queue.index("wolf")-1)
