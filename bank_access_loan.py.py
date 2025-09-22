# Description: A program to determine if a user is eligible for a bank loan based on age and income.

# Name: David Maina Onchoke
# Reg No.:PA106/G/28779/25


# users name
name = input("Enter your name: ")

# users age
age = int(input("Enter your age: "))

# users annual income
income = int(input("Enter your annual income: "))

# conditions for loan access
if age >= 21 and income >= 21000:
    print("Congratulations", name.title(),
          "you are eligible for the bank loan.")

else:
    print("Unfortunately", name.title(),
          "you are unable to access the bank loan.")
