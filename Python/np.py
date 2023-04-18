

from matplotlib import pyplot as plt
import pandas as pd


import numpy as np
x = np.linspace(1, 500, 2000)
y = x
plt.plot(x, np.log2(x), label="log")
plt.plot(x, np.sqrt(x), label="sqrt")
plt.legend()
plt.show()
for x in [1, 2, 3]:
    print(x)
arr = np.array([1, 2, 3, 4])
arr1 = np.array([3, 2, 1, 9])
# arr[arr > 2] =5
print(arr+arr1)

k = str(28411)
a = [int(i) for i in k]
print(a[::-1])
b = np.append(arr, arr1)
print((1+6)/2)

a = [1, 2, 5, 2, 4]
print(max(a))
k, _ = divmod(67, 7)
print(k)
file = open('di.inp', 'r+')
file.truncate()
print(file.readlines())
file.close()
