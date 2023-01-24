#include <iostream>
#include <string>
using namespace std;


//---------- VARIABLES ----------//

string pv[3][3]{
    {"1","2","3"},
    {"4","5","6"},
    {"7","8","9"}};

string game[3][3]{
    {" "," "," "},
    {" "," "," "},
    {" "," "," "}};

int turns = 9;

int preview();
int play();
int position(int x, char t);
string win();

//-------------- MAIN :V --------------//
int main(){
    
    cout << "\n\n--------------- Welcome to: THREE IN A ROW ---------------" << "\n";
    cout << "\n           Player 1: \'X\'        Player 2: \'O\'" << "\n\n";
    for (int i = 0; i < 3; i++){
        cout << "\t\t\t";
        for (int j = 0; j < 3; j++){
            cout << '[' << pv[i][j] << ']';
        }cout << "\n";
    }cout << "----------------------------------------------------------";

    play();
    
    
    
}

//-------------- PREVIEW THE "GAME" --------------//
int preview(){
    cout << "\n\n";
    for (int i = 0; i < 3; i++){
        cout << "\t\t\t";
        for (int j = 0; j < 3; j++){
            cout << '[' << game[i][j] << ']';
        }cout << "\n";
    }
    if (win() != " "){cout << "\n---------- GAME FINISHED ----------";cin >> turns;exit(0);}
}

//-------------- TURNS AND SELECT POSITIONS --------------//
int play(){
    int x;
    char t;
    string winner = win();
    if (winner == " "){
        preview();
        while (turns > 0){
            if (turns % 2 == 0){
                t = 'O';
                cout << "\n -_-_-_-_-_-_-_Player 2 turn_-_-_-_-_-_-_-\n";
                cout << "\n\t Position: ";cin >> x;
                position(x,t);
            }else{
                t = 'X';
                cout << "\n -_-_-_-_-_-_-_Player 1 turn_-_-_-_-_-_-_-\n";
                cout << "\n\t Position: ";cin >> x;
                position(x,t);
            }  
        }cout << "\n---------- DRAW ----------";
         cout << "\n---------- GAME FINISHED ----------";cin >> turns;exit(0);

        }else{cout << winner;preview();}
        
        }

//-------------- SENDS THE POSITION TO THE ARRAY --------------//
int position(int x, char t){
    switch(x){
        case 1:
            if (game[0][0] != " "){
                cout << "Sorry, this position is selected. Try again.";
                play();
            }else{
            game[0][0] = t;
            turns--;
            break;}
        case 2:
            if (game[0][1] != " "){
                cout << "Sorry, this position is selected. Try again.";
                play();
            }else{
            game[0][1] = t;
            turns--;
            break;}
        case 3:
            if (game[0][2] != " "){
                cout << "Sorry, this position is selected. Try again.";
                play();
            }else{
            game[0][2] = t;
            turns--;
            break;}
        case 4:
            if (game[1][0] != " "){
                cout << "Sorry, this position is selected. Try again.";
                play();
            }else{
            game[1][0] = t;
            turns--;
            break;}
        case 5:
            if (game[1][1] != " "){
                cout << "Sorry, this position is selected. Try again.";
                play();
            }else{
            game[1][1] = t;
            turns--;
            break;}
        case 6:
            if (game[1][2] != " "){
                cout << "Sorry, this position is selected. Try again.";
                play();
            }else{
            game[1][2] = t;
            turns--;
            break;}
        case 7:
            if (game[2][0] != " "){
                cout << "Sorry, this position is selected. Try again.";
                play();
            }else{
            game[2][0] = t;
            turns--;
            break;}
        case 8:
            if (game[2][1] != " "){
                cout << "Sorry, this position is selected. Try again.";
                play();
            }else{
            game[2][1] = t;
            turns--;
            break;}
        case 9:
            if (game[2][2] != " "){
                cout << "Sorry, this position is selected. Try again.";
                play();
            }else{
            game[2][2] = t;
            turns--;
            break;}
    }play();
}

string win(){
                        //-------------- PLAYER 1 (X) --------------//

    //-------------- STRAIGHT LINES --------------//
    if ((game[0][0] == "X") && (game[0][1] == "X") && (game[0][2] == "X")){return "\n\n\n\n---------- Player 1 WIN!! ----------";}
    else if ((game[0][0] == "X") && (game[1][0] == "X") && (game[2][0] == "X")){return "\n\n\n\n---------- Player 1 WIN!! ----------";}
    else if ((game[0][2] == "X") && (game[1][2] == "X") && (game[2][2] == "X")){return "\n\n\n\n---------- Player 1 WIN!! ----------";}
    else if ((game[2][0] == "X") && (game[2][1] == "X") && (game[2][2] == "X")){return "\n\n\n\n---------- Player 1 WIN!! ----------";}
    else if ((game[1][0] == "X") && (game[1][1] == "X") && (game[1][2] == "X")){return "\n\n\n\n---------- Player 1 WIN!! ----------";}
    else if ((game[0][1] == "X") && (game[1][1] == "X") && (game[2][1] == "X")){return "\n\n\n\n---------- Player 1 WIN!! ----------";}
    //-------------- DIAGONALS --------------//
    else if ((game[0][0] == "X") && (game[1][1] == "X") && (game[2][2] == "X")){return "\n\n\n\n---------- Player 1 WIN!! ----------";}
    else if ((game[2][0] == "X") && (game[1][1] == "X") && (game[0][2] == "X")){return "\n\n\n\n---------- Player 1 WIN!! ----------";}


                            //-------------- PLAYER 2 (O) --------------//
                        
    //-------------- STRAIGHT LINES --------------//
    if ((game[0][0] == "O") && (game[0][1] == "O") && (game[0][2] == "0")){return "\n\n\n\n---------- Player 2 WIN!! ----------";}
    else if ((game[0][0] == "O") && (game[1][0] == "O") && (game[2][0] == "O")){return "\n\n\n\n---------- Player 2 WIN!! ----------";}
    else if ((game[0][2] == "O") && (game[1][2] == "O") && (game[2][2] == "O")){return "\n\n\n\n---------- Player 2 WIN!! ----------";}
    else if ((game[2][0] == "O") && (game[2][1] == "O") && (game[2][2] == "O")){return "\n\n\n\n---------- Player 2 WIN!! ----------";}
    else if ((game[1][0] == "O") && (game[1][1] == "O") && (game[1][2] == "O")){return "\n\n\n\n---------- Player 2 WIN!! ----------";}
    else if ((game[0][1] == "O") && (game[1][1] == "O") && (game[2][1] == "O")){return "\n\n\n\n---------- Player 2 WIN!! ----------";}
    //-------------- DIAGONALS --------------//
    else if ((game[0][0] == "O") && (game[1][1] == "O") && (game[2][2] == "O")){return "\n\n\n\n---------- Player 2 WIN!! ----------";}
    else if ((game[2][0] == "O") && (game[1][1] == "O") && (game[0][2] == "O")){return "\n\n\n\n---------- Player 2 WIN!! ----------";}
    else{return " ";}

}
