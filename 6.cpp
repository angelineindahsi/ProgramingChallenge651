#include <iostream>
using namespace std;

struct players
{
    string name;
    char number;
    int pointsScored;
};

int totalPoints (int pointsScored, int numOfPlayers);

int main ()
{
    const int numOfPlayers = 12;
    players playerArray[numOfPlayers];
    int i;
    
    for (int i=0; i<numOfPlayers; i++)
    {
        cout << "Enter the player's name: ";
        (cin >> playerArray[i].name[50]).get();
        
        cout << "Enter the player's number: ";
        (cin >> playerArray[i].number).get();
        
        while (playerArray[i].number <=0)
        {
            cout << "Invalid number!" << endl;
            cout << "Enter the player's number: ";
            (cin >> playerArray[i].number).get();
        }
        
        cout << "Please enter the points scored by the player: ";
        (cin >> playerArray[i].pointsScored).get();
        while (playerArray[i].pointsScored <=0)
        {
            cout << "Invalid number!" << endl;
            cout << "Please enter the points scored by the player: ";
            (cin >> playerArray[i].pointsScored).get();
        }
        cout << endl;
    }
    
    string name;
    int pointsScored;
    int totalPoint = 0;
    
        for (i=0; i<numOfPlayers; i++)
        {
            cout << "Name: " << playerArray[i].name;
            cout << "Number: " << playerArray[i].number;
            cout << "Points Scored: " << playerArray[i].pointsScored << endl;
            totalPoint = totalPoint + playerArray[i].pointsScored;
        }
  
    cout << "The total points scored by the team is: " << totalPoint << endl;
    return 0;
}

