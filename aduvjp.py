for i in range(1, 10000):
    if 36*i % 45 == 0 and 45*i % 36 == 0 and 45*36 % i == 0:
        print(i)
