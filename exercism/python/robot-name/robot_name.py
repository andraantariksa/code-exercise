import string
import random


class Robot(object):
    used_name = []

    def __init__(self):
        self.reset()

    def reset(self):
        while True:
            self.name = random.choice(string.ascii_uppercase) + random.choice(string.ascii_uppercase) + str(random.randint(0, 9)) + str(random.randint(0, 9)) + str(random.randint(0, 9))
            if self.name not in self.used_name:
                self.used_name.append(self.name)
                break
