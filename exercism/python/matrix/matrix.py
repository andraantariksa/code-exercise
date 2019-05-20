class Matrix(object):
    def __init__(self, matrix_string):
        self.matrix_ = []
        for row in matrix_string.split("\n"):
            self.matrix_.append(list(map(int, row.split(" "))))

    def row(self, index):
        return self.matrix_[index - 1]

    def column(self, index):
        col = []
        for row in self.matrix_:
            col.append(row[index - 1])
        return col
