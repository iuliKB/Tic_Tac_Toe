#include<iostream>
using namespace std;

int main()
{
    int space[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    string player1;
    string player2;

    //read the players

    cout<< "Enter the name of player1 : \n";
    getline(cin,player1);
    cout<< "Enter the name of player2 : \n";
    getline(cin,player2);

    string play_first;
    cout<<"choose who to play first \n";
    getline(cin,play_first);
    cout<< "\n";
    
    if(play_first == player1){
        cout<< "Player1 will start the game so he will  use --X-- and Player2 will use the --O--\n";
    }else{
        cout<< "Player2 will start the game so he will  use --X-- and Player1 will use the --O--\n";
    }


 //Creating the stucture of the game

    cout << "    |     |   \n";
    cout << "  "<<space[0][0]<<" | "<<space[0][1]<<"   | "<<space[0][2]<< "  \n";
    cout << "____|_____|____ \n";
    cout << "    |     | \n";
    cout << " "<<space[1][0]<<"  | "<<space[1][1]<<"   | "<<space[1][2]<< "  \n";
    cout << "____|_____|____ \n";
    cout << "    |     |  \n";
    cout << " "<<space[2][0]<<"  | "<<space[2][1]<<"   | "<<space[2][2]<< "  \n";
    cout << "    |     |  \n";




    
    return 0;
}



/*
       |      |
  (0,0)| (0,1)|(0,2)ll

 -------------------
       |      |
  (0,1)| (1,1)|(1,2)
 -------------------
  (2,0)| (2,1)|(2,2)
       |      |
 

*/