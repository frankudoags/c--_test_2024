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
