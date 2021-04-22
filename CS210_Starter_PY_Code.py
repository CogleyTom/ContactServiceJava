import re
import string


def printsomething():
    print("Hello from python!")

def PrintMe(v):
    print("You sent me: " + v)
    return 100;

def SquareValue(v):
    return v * v

# Histogram defined function
def histoGram():
    # Opens text file
    f = open(r"C:\Users\Tom\source\repos\Project3\x64\Release\CS210_Project_Three_Input_File.txt", "r")
    # Intitializes empty dictionary
    d = dict()
    for line in f:
        # Removes leading or trailing spaces
        line = line.strip()
        words = line.split(" ")
        # If word is in text file adds asterick for each word
        for word in words:
            if word in d:
                d[word] = d[word] + '*'
            else:
                d[word] = '*' 
        # Creates writable file called frequency.dat as newF
        with open("frequency.dat", "w") as newF:
            # Prints dictionary with keys and values not separated to file
            for key in list(d.keys()):
                print(key, d[key], sep='', file=newF)
    # Closes f file
    f.close()
    # Closes newF file
    newF.close()
    
    

# Defines function to display items
def readItems():
    # Opens text file
    f = open(r"C:\Users\Tom\source\repos\Project3\x64\Release\CS210_Project_Three_Input_File.txt", "r")
    # Sets empty dictionary
    d = dict()
    for line in f:
        line = line.strip()
        words = line.split(" ")
        for word in words:
            if word in d:
                d[word] = d[word] + 1
            else:
                d[word] = 1
    # Prints keys and values
    for key in list(d.keys()):
        print(key, ":", d[key])
    # Closes file
    f.close()
    # Prints blank space
    print()

# Defines function to count inputed item
def itemCount():
    # Opens text file
    f = open(r"C:\Users\Tom\source\repos\Project3\x64\Release\CS210_Project_Three_Input_File.txt", "r")
    # Saves text file to variable lines
    lines = f.read()
    # Asks user what they want to look up 
    x = input("What do you want to find? ")
    # Capitalizes user input to match text file lines
    x = x.capitalize()
    # Finds all instances of exact input item and saves to list
    list = re.findall('\\b' + x + '\\b', lines)
    # Takes lenght of the list and saves that integer to amount
    amount = len(list)
    # While amount is less than one prints invalid item and asks for input again
    while amount < 1:
        print()
        print("Invalid item")
        x = input("What do you want to find? ")
        x = x.capitalize()
        list = re.findall('\\b' + x + '\\b', lines)
        amount = len(list)
    # If amount = 1 prints item purchased amount (singular)
    if amount == 1:
        print()
        print(x, "purchased", amount, "time today")
    else:
    # If amount > 1 prints item purchased amount (Plural)
        print()
        print(x, "purchased", amount, "times today")
    # Closes file
    f.close()
    # Prints blank space
    print()




    
