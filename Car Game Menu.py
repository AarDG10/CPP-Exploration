command=""
while command.lower() !='quit':
    command = input("> ")
    if command.lower() =="start":
        print("Car Started!")
    elif command.lower() =="stop":
        print("Car Stopped!")
    elif command.lower() =="help":
        print(""" 
        start - to start the car
        stop - to stop the car
        quit - to quit the game"""
        )
    elif command.lower() == "quit":
        break 
    else:
        print("Sorry, I dont understand that!")
