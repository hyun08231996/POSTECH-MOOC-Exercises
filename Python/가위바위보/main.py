import random

print("Let's play rock, paper, scissors!")
pName = input("Please enter your name: ")
i = "Y"
while i == "Y":
    computer = random.randint(0, 2)
    player = input("Choose one from (rock, paper, scissors): ")
    if computer == 0:
        computer = "rock"
    elif computer == 1:
        computer = "paper"
    elif computer == 2:
        computer = "scissors"
    print("Player:", player, "Computer:", computer)
    if player == "rock":
        if player == computer:
            print("It's a draw!")
        elif computer == "scissors":
            print(pName, "wins!")
        elif computer == "paper":
            print("Computer wins!")
    elif player == "scissors":
        if player == computer:
            print("It's a draw!")
        elif computer == "paper":
            print(pName, "wins!")
        elif computer == "rock":
            print("Computer wins!")
    elif player == "paper":
        if player == computer:
            print("It's a draw!")
        elif computer == "rock":
            print(pName, "wins!")
        elif computer == "scissors":
            print("Computer wins!")
    i = input("Play again? Y/N: ")
print("Thank you for playing", pName, "!")