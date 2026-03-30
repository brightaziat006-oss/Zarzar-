# ---------- script1.py ----------
# This file can run standalone or be imported

def favorite_food(food):
    print(f"Your favorite food is {food}")

def main():
    print("This is script1")
    favorite_food("pizza")
    print("Goodbye!")

if __name__ == '__main__':
    main()

# ---------- script2.py ----------
# This file should run only standalone

from script1 import *

def favorite_drink(drink):
    print(f"Your favorite drink is {drink}")

print("This is script2")
favorite_food("sushi")
favorite_drink("coffee")
print('Goodbye!')
