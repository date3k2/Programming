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