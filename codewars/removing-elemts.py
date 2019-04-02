
def remove_every_other(my_list):
    for i in range(len(my_list)-(len(my_list)%2+1), 0, -2):
        del my_list[i]
    return my_list
