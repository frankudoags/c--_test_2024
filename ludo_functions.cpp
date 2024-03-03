#include "headers/ludo.h"

void GameConfiguration(Player players[], int numOfPlayers)
{
    string color_string;
    Color chosen_color;
    chosen_color = Color::NOCOLOR;
    bool exists;
    exists = false;
    cout << "Starting Game Configuration... \n";
    /**
     *[Red(0), Green(1), Yellow(2), Blue(3)]
     * [true, false, true, false]
     */
    bool assignedHouses[4] = {false, false, false, false};

    for (int i = 0; i < numOfPlayers; i++)
    {
        cout << "Enter name for Player " << i + 1 << ": ";
        cin >> players[i].name;

        for (int j = 0; j < (numOfPlayers == 4 ? 1 : 2); j++)
        {
            do
            {
                cout << "\nChoose a House color(Red, Green, Yellow, Blue) for " << players[i].name << ": ";
                cin >> color_string;

                if (color_string == "Red" || color_string == "red")
                {
                    chosen_color = Color::RED;
                    exists = true;
                }
                else if (color_string == "Green" || color_string == "green")
                {
                    chosen_color = Color::GREEN;
                    exists = true;
                }
                else if (color_string == "Yellow" || color_string == "yellow")
                {
                    chosen_color = Color::YELLOW;
                    exists = true;
                }
                else if (color_string == "Blue" || color_string == "blue")
                {
                    chosen_color = Color::BLUE;
                    exists = true;
                }

                else
                {
                    cout << "Invalid color, choose from (Red, Green, Yellow, Blue)";
                }

                if (chosen_color != Color::NOCOLOR)
                {
                    if (assignedHouses[(int)chosen_color])
                    {
                        exists = false;
                        cout << "House already chosen, choose a different house\n";
                    }
                }

            } while (!exists);

            players[i].houses[j] = House(chosen_color, 4, true);
            assignedHouses[(int)chosen_color] = true;
        }
    }
}



void DisplayResults(Player players[], int numOfPlayers)
{
    string HouseNames[4] = {"Red", "Green", "Yellow", "Blue"};
    cout << "\n Results: \n";
    cout << "---------------------------------------------------\n";

    cout << "|"
         << setw(20)
         << "Name"
         << "|"
         << setw(20)
         << "House"
         << "|"
         << setw(20)
         << "Members"
         << "|\n";
    cout << "---------------------------------------------------\n";

    for (int i = 0; i < numOfPlayers; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (players[i].houses[j].status)
            {
                cout << "|"
                     << setw(20)
                     << players[i].name
                     << "|"
                     << setw(20)
                     << HouseNames[players[i].houses[j].color]
                     << "|"
                     << setw(20)
                     << players[i].houses[j].members
                     << "|\n";
            }
        }
    }
    cout << "---------------------------------------------------\n";
}