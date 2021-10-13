from random import randint

"""There are three possible plays you and the computer can make 
on each turn, “Rock”, “Paper” and “Scissors”.
Next we setup our players, the computer and you:"""

#create a list of play options
t = ["Rock", "Paper", "Scissors"]

#assign a random play to the computer
computer = t[randint(0,2)]

#set player to False
player = False

"""We assign a random play to the computer using our list, t, and the randint function. Why (0,2)? Remember that 
computers start counting at 0. So “Rock” is in the 0 position, “Paper” is in the 1, and so on. Unlike playing RPS
with friends in meatspace, the computer has made its play and is waiting for you to take your turn. Also unlike playing
RPS with friends in meatspace, the computer isn’t go to cheat and change its play after you make yours. We set you, 
the player, to False. Why? I’m glad you asked. Let’s take a look at the body of our program the while loop: """


while player == False:
#set player to True
    player = input("Rock, Paper, Scissors?")
    if player == computer:
        print("Tie!")
    elif player == "Rock":
        if computer == "Paper":
            print("You lose!", computer, "covers", player)
        else:
            print("You win!", player, "smashes", computer)
    elif player == "Paper":
        if computer == "Scissors":
            print("You lose!", computer, "cut", player)
        else:
            print("You win!", player, "covers", computer)
    elif player == "Scissors":
        if computer == "Rock":
            print("You lose...", computer, "smashes", player)
        else:
            print("You win!", player, "cut", computer)
    else:
        print("That's not a valid play. Check your spelling!")
    #player was set to True, but we want it to be False so the loop continues
    player = False
    computer = t[randint(0,2)]

"""Once the while loop starts, the computer will patiently wait for you to make a play. As soon as you take your turn, 
your status changes from False to True because any value assigned to the variable player makes player True. We use the 
input() function to pass the new value to the variable player. Your input will determine which statement is triggered 
below. Using nested if/elif/else statements, we check every possible outcome of the game and return a message stating 
the winner, a tie, or an error.We use else at the end to catch anything that isn’t “Rock”, “Paper” or “Scissors”. 
Finally we reset the player value to False to restart the while loop."""