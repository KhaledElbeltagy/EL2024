#!/usr/bin/python3

import os

l1=[1,4,6,7,4]

#### First method ##
no=input("please enter number to count repeated times :")
x=l1.count(int(no))
print("The number you enter repeated: ",x )



# Python program to check whether the given character  
# is a vowel or consonant  

# Get an input character from the user  
letter = input("Enter a character: ")  

# Creating a list of vowels  
vowels = ['a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U']  

for ch in letter:
# Check if the character is a vowel or not  
    if ch in vowels:  
        print(f"The character '{ch}' is a vowel!")  
    else:  
        print(f"The character '{ch}' is a consonant!")  




# Python program to access environment variables
# using os modules


path = os.environ["PATH"]
# print hte path 
print(path) 

print(os.environ['HOME'])