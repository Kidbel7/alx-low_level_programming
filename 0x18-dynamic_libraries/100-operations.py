import ctypes

cops = ctypes.CDLL('./100-operations.so')
a = 7
b = 14
print("{} + {} = {}".format(a, b, cops.add(a, b)))


