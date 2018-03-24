#ifndef SYSTEM_H
#define SYSTEM_H

#include <iostream>
#include "LinkedList.h"
#include "Pkmn.h"

// PKMN FUNCTIONS
void printCurrentPkmn(LinkedList<Pkmn>* list, int current);
void addPkmnToList(LinkedList<Pkmn>* list, Pkmn* pkmn);
void printPkmnList(LinkedList<Pkmn>* list, int current);
int nextPkmn(LinkedList<Pkmn>* list, int current);
int prevPkmn(int current);

int totalFound(LinkedList<Pkmn>* list);



// MISC FUNCTIONS
string getTypeString(int i);
void findAll(LinkedList<Pkmn>* list);



// TYPE CONSTANTS
#define NO_TYPE -1
#define BUG 0
#define DARK 1
#define DRAGON 2
#define ELECTRIC 3
#define FAIRY 4
#define FIGHTING 5
#define FIRE 6
#define FLYING 7
#define GHOST 8
#define GRASS 9
#define GROUND 10
#define ICE 11
#define NORMAL 12
#define POISON 13
#define PSYCHIC 14
#define ROCK 15
#define STEEL 16
#define WATER 17

#define NUM_TYPES 18

#endif //POKEDEX_SYSTEM_H
