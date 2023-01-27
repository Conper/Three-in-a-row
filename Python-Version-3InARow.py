
#---------- VARIABLES ----------#

pv = [
    ["1","2","3"],
    ["4","5","6"],
    ["7","8","9"]]

game = [
    [" "," "," "],
    [" "," "," "],
    [" "," "," "]]

global turns
turns = 9

#-------------- PREVIEW THE "GAME" --------------#
def preview():
    print(" ")
    for i in game:
        print(i)
    
    if (win() != " "):
        print("---------- GAME FINISHED ----------")
        print(win())
        input("Exit: ")
        exit()
        exit()


#-------------- TURNS AND SELECT POSITIONS --------------#
def play():
    x = 0
    t = " "
    winner = win();
    if winner == " ":
        preview()
        while turns > 0:
            if turns % 2 == 0:
                t = 'O'
                print(" -_-_-_-_-_-_-_Player 2 turn_-_-_-_-_-_-_- ")
                x = input(" Position: ")
                position(x,t)

            else:
                t = 'X';
                print(" -_-_-_-_-_-_-_Player 1 turn_-_-_-_-_-_-_- ")
                x = input(" Position: ")
                position(x,t)

        draw()

    else: 
        preview()
        
        
#-------------- SENDS THE POSITION TO THE ARRAY --------------#
def position(x,t):
    global turns
    if x == "1":
        if (game[0][0] != " "):
            print("Sorry, this position is selected. Try again.")
            play()
        else:
            game[0][0] = t
            turns -= 1
            play()

    elif x == "2":
        if (game[0][1] != " "):
            print("Sorry, this position is selected. Try again.")
            play()
        else:
            game[0][1] = t
            turns -= 1
            play()

    elif x == "3":
        if (game[0][2] != " "):
            print("Sorry, this position is selected. Try again.")
            play()
        else:
            game[0][2] = t
            turns -= 1
            play()

    elif x == "4":
        if (game[1][0] != " "):
            print("Sorry, this position is selected. Try again.")
            play()
        else:
            game[1][0] = t
            turns -= 1
            play()

    elif x == "5":
        if (game[1][1] != " "):
            print("Sorry, this position is selected. Try again.")
            play()
        else:
            game[1][1] = t
            turns -= 1
            play()

    elif x == "6":
        if (game[1][2] != " "):
            print("Sorry, this position is selected. Try again.")
            play()
        else:
            game[1][2] = t
            turns -= 1
            play()

    elif x == "7":
        if (game[2][0] != " "):
            print("Sorry, this position is selected. Try again.")
            play()
        else:
            game[2][0] = t
            turns -= 1
            play()

    elif x == "8":
        if (game[2][1] != " "):
            print("Sorry, this position is selected. Try again.")
            play()
        else:
            game[2][1] = t
            turns -= 1
            play()

    elif x == "9":
        if (game[2][2] != " "):
            print("Sorry, this position is selected. Try again.")
            play()
        else:
            game[2][2] = t
            turns -= 1
            play()

    else: play()    



def win():
                        #-------------- PLAYER 1 (X) --------------/#
    win1 = "---------- Player 1 WIN!! ----------"
    win2 = "---------- Player 2 WIN!! ----------"
    #-------------- STRAIGHT LINES --------------#
    if (game[0][0] == "X") and (game[0][1] == "X") and (game[0][2] == "X"):return win1
    elif (game[0][0] == "X") and  (game[1][0] == "X") and  (game[2][0] == "X"):return win1
    elif (game[0][2] == "X") and  (game[1][2] == "X") and  (game[2][2] == "X"):return win1
    elif (game[2][0] == "X") and  (game[2][1] == "X") and  (game[2][2] == "X"):return win1
    elif (game[1][0] == "X") and  (game[1][1] == "X") and  (game[1][2] == "X"):return win1
    elif (game[0][1] == "X") and  (game[1][1] == "X") and  (game[2][1] == "X"):return win1
    #-------------- DIAGONALS --------------#
    elif (game[0][0] == "X") and  (game[1][1] == "X") and  (game[2][2] == "X"):return win1
    elif (game[2][0] == "X") and  (game[1][1] == "X") and  (game[0][2] == "X"):return win1


                            #-------------- PLAYER 2 (O) --------------#
                        
    #-------------- STRAIGHT LINES --------------#
    if (game[0][0] == "O") and  (game[0][1] == "O") and  (game[0][2] == "O"):return win2
    elif (game[0][0] == "O") and  (game[1][0] == "O") and  (game[2][0] == "O"):return win2
    elif (game[0][2] == "O") and  (game[1][2] == "O") and  (game[2][2] == "O"):return win2
    elif (game[2][0] == "O") and  (game[2][1] == "O") and  (game[2][2] == "O"):return win2
    elif (game[1][0] == "O") and  (game[1][1] == "O") and  (game[1][2] == "O"):return win2
    elif (game[0][1] == "O") and  (game[1][1] == "O") and  (game[2][1] == "O"):return win2
    #-------------- DIAGONALS --------------#
    elif (game[0][0] == "O") and  (game[1][1] == "O") and  (game[2][2] == "O"):return win2
    elif (game[2][0] == "O") and  (game[1][1] == "O") and  (game[0][2] == "O"):return win2
    else:return " "


#-------------- DRAW --------------#
def draw():
        print("---------- DRAW ----------")
        print("---------- GAME FINISHED ----------")
        input("Exit: ")
        exit()

#-------------- MAIN --------------#
def main():
    print("WELCOME TO THREE IN A ROW")
    print("Player 1: X           Player 2: 0")
    for i in pv: 
        print(i)
    play()

main()
