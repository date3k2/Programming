import numpy as np
import matplotlib.pyplot as plt
import pandas as pd


class Human:
    def __init__(self, age: int, gender: str):
        self.age = age
        self.gender = gender

    def __str__(self) -> str:
        return f"{self.age} years old\n{self.gender}"
# Human


class Me(Human):
    def __init__(self, age: int, gender: str, isHandsome: bool):
        self.isHandsome = isHandsome
        super().__init__(age, gender)

    def __str__(self) -> str:
        print("LOL")
        return super().__str__()


yo = input("How old are you? : ")
dat = Me(int(yo)+1, 'Male', True)
print(dat)
for d in range(dat.age, 6, -1):
    print(d)
x = [2.5, 2.5, 3, 4, 2.1]
y = [6, 8, 3.2, 6, 12]
z = set((1, 2, 3))
print(z)
x.sort(key=lambda a: abs(a-5), reverse=True)
print(x)
plt.plot(x, y)
plt.scatter(x, y)
plt.show()
a = "con ga dang di ra ngoai"
print(a.title())
# File

f = open("test.inp", "rt")
print(f.read())
f.close()
# arr = np.array([(1, 25, 2, 1.2), [1, 2, 5, 2]])
# k = [x for x in np.nditer(arr,flags=['buffer'])]
# print(k)
