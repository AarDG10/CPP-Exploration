secret_number= 104
start=0
limit= 3
while start<limit:
    guess=int(input("User's Guess:"))
    start+=1
    if guess == secret_number:
        print("Guess Is Correct")
        break
else:
    print("Guess Is Incorrect")