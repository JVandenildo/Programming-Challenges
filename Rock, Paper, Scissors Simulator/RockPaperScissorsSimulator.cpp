#include <iostream>
using namespace std;

string Simulator(string player1, string player2){
    string result;
    
    if(player1 == player2){
        result = "TIE";
    }
    else if(player1 == "rock" && player2 == "scissors"){
        result = "Player 1, wins";
    }
    else if(player1 == "paper" && player2 == "rock"){
        result = "Player 1, wins";
    }
    else if(player1 == "scissors" && player2 == "paper"){
        result = "Player 1, wins";
    }
    else if(player2 == "rock" && player1 == "scissors"){
        result = "Player 2, wins";
    }
    else if(player2 == "paper" && player1 == "rock"){
        result = "Player 2, wins";
    }
    else if(player2 == "scissors" && player1 == "paper"){
        result = "Player 2, wins";
    }
    else{
        return "Try again!";
    }

    return result;
}

int main(){
    string player1, player2;
    cout << "Choose player 1: ";
    cin >> player1;
    cout << "Choose player 2: ";
    cin >> player2;

    cout << Simulator(player1, player2) << "!\n";

    return 0;
}