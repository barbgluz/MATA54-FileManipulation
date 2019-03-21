from random import randint
from faker import Faker

fake = Faker()

def writeInput(f):
    with open("in", "w+", encoding="utf-8") as f:
        for i in range(15000):
            key = str(i)
            name = fake.name()
            age = str(randint(5,65))
            f.write( 'i' + '\n' + key + '\n' + name + '\n' + age + '\n')
        f.close()

with open("in", "w+") as f:
    writeInput(f)
