#include <iostream>
#include <string>
#include <iomanip>
#include "headers/ludo.h";

int main()
{
    const int NUM_OF_PLAYERS = 4;

    Player players[NUM_OF_PLAYERS];

    int numOfPlayers;

    do
    {
        cout << "How many players are in this game: ";
        cin >> numOfPlayers;
    } 
    while (numOfPlayers != 2 && numOfPlayers != 4);

    GameConfiguration(players, numOfPlayers);

    DisplayResults(players, numOfPlayers);

    //reduce members
    cout << "Reducing 1, 2, 3, 4 members from players 1, 2, 3 and 4 respectively";
    for (int i = 0; i < numOfPlayers; i++)
    {
        for (int j = 0; j < 2; j++){
            players[i].houses[j].members -= (i + 1);
        }
    }

        DisplayResults(players, numOfPlayers);
    return 0;
}

/**
 *
 * Player Demitchy;
 * Player Kareemah;
 * Player Wale;
 * Player Kunle;
 *
 *
 * Player Player1, Player2, Player3, Player4;
 *
 * GameConfiguration(Player1, Player2, Player3, Player4, numOfPlayers);
 * 
 * 
 * GameConfiguration(Player players[], int numOfPlayers);
 *
 *
 *
 * int values[5] = [1, 2, 3, 4, 5];
 * Player players[4] = [Demitchy,Kareemah, Wale, Kunle];
 * players[0] = Demitchy;
 * players[1] = Kareemah;
 */
