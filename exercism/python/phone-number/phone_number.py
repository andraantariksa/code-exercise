import re


class Phone(object):
    PHONE_RE = r"^\+?1?\D*([2-9]{3})[^!]*([2-9]{3})[^!]*(\d{4})\D*$"

    def __init__(self, phone_number):
        if re.match(self.PHONE_RE, phone_number):
            #print(re.search(self.PHONE_RE, phone_number).groups())
            self.number = "".join(re.search(self.PHONE_RE, phone_number).groups())
            self.area_code = self.number[0:3]

        else:
            raise ValueError("Invalid phone number")

    def pretty(self):
        print(self.number)
        m = re.search(r"^(\d{3})(\d{3})(\d{4})$", self.number)
        return "({}) {}-{}".format(m.group(1), m.group(2), m.group(3))
