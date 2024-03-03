#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

#ifndef _LUDO_H
#define _LUDO_H

enum Color
{
    RED,
    GREEN,
    YELLOW,
    BLUE,
    NOCOLOR
};

struct House {
    Color color; //Red
    int members; //4
    bool status;//false

    House(Color c = Color::RED, int m = 4, bool s = false){
        color = c;
        members = m;
        status = s;
    }
};

struct Player {
    string name;
    House houses[2]; //House_1, House_2
};

void GameConfiguration(Player players[], int numOfPlayers);
// Wale, Frank, Demitchy, Kunle
/**
 * 1st case
 * Wale - House(Red, 4, true), House(Red, 4, false)
 * Frank - House(Yellow, 4, true), House(Red, 4, false)
 * Demitchy - House(Green, 4, true), House(Red, 4, false)
 * Kunle - House(Blue, 4, true), House(Red, 4, false)
 *
 *
 *
 *
 * 2nd case
 * Wale - House(Red, 4, true), House(Green, 4, true)
 * Frank - House(Yellow, 4, true), House(Blue, 4, true)
 */

void DisplayResults(Player players[], int numOfPlayers);
/*
 * Results for 2 players
 * Name         House           Member
 * Wale         Red             4
 * Wale         Green           4
 * Kunle        Blue            4
 * Kunle        Yellow          4
 *
 *
 *
 * Results for 4 players
 * Name         House           Member
 * Wale         Red             4
 * Frank        Green           4
 * Demitchy     Blue            4
 * Kunle        Yellow          4
 *
 *
 */
#endif

// define a student in elect year3
/*
age, matric_no, cgpa

struct ELECT_YR3 {
    string name;
    int age;
    int level;
    int matric;
    float cgpa;

    ELECT_YR3(string _name, int _age, int _matric, float _cgpa){
        name = _name;
        age = _age;
        matric = _matric;
        cgpa = _cgpa;
        level  = 300;
    }

};

ELECT_YR3 Wale = ELECT_YR3("Ayoola Wale", 25, 190403001, 5.0);
Wale.name

*/