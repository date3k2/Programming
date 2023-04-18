def gray_code(n):
    if n == 1:
        return ['0', '1']
    else:
        gray = gray_code(n-1)
        reflected_gray = gray[::-1]
        return ['0' + x for x in gray] + ['1' + x for x in reflected_gray]


for i in gray_code(int(input())):
    print(i)
