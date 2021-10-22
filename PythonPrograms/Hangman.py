import random

n=input("What is your name? ")
print("Hello",n, "let's play a game.")

name=["hacktober", "fest", "hacktoberfest", "github", "programmer", "hiking",
      "hangover", "alwaz", "hackedoff", "computer", "guess", "mountain", "beaches",
      "cricket", "leaders", "winners"]
   
word=random.choice(name)
turns=int(input("How many guesses do you want? "))
print()
print("Guess the word!!!!!")
print()

letter=""

while turns > 0:
    failed=0

    for i in word:
        if i in letter:
            print(i,end=" ")
        else:
            print("_",end=" ")
            failed+=1
    print()
    
    print("letters left to guess: ",failed)
    print("already used letters:", letter)
    print("__________________________________________")
    print()

    if failed==0:
        print("You Win!!!")
        break
    guess=input("Guess the character: ")
    letter+=guess

    if guess not in word:
        print("WRONG!!!",end="  ")
        turns-=1
        print("You have ", turns, " more guesses left")

        if turns==0:
            print("Oops!!! You lose. The correct name was ",word)
            
    
