from ctypes import *

100-operations = CDLL('./100-operations.so')

print(type(100-operations))
print(100-operations.square(10))

print("Done")
