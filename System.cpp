#include <iomanip>
#include <iostream>
#include "LinkedList.h"
#include "Pkmn.h"

string getTypeString(int i);
string getFormattedName(Pkmn* pkmn);
string getFormattedAttribute(string attr, bool found);

// SYSTEM METHODS

template <typename T>
void printCurrentPkmn(LinkedList<T>* list, int current) {
    Pkmn* pkmn = list->getNode(current)->getValue();
    cout << endl << "Id: " << setfill('0') << setw(3) << pkmn->getId() << endl;
    cout << "Name: " << getFormattedName(pkmn) << endl;
    if (pkmn->isFound()) {
        cout.precision(2);
        cout << "Height: ";
        cout << fixed << pkmn->getHeight();
        cout << "m" << endl;

        cout << "Weight: ";
        cout << fixed << pkmn->getWeight();
        cout << "kg" << endl;

        cout << "Type: ";
        cout << getTypeString(pkmn->getType()) << endl << endl;
    }
    else {
        cout << "Height: --" << endl << "Weight: --" << endl << "Type: --" << endl;
    }
}

// void freePkmnList(PkmnList list) {
//     // ADD YOUR CODE HERE
// }

template <typename T>
void addPkmnToList(LinkedList<T>* list, Pkmn* pkmn) {
    list->add(pkmn);
}

template <typename T>
void printPkmnList(LinkedList<T>* list, int current) {
    cout << endl;
    string name;
    for (int i = 0; i < list->getLength(); i++) {
        Pkmn* pkmn = list->getNode(i)->getValue();

        name = getFormattedName(pkmn);

        if (i == current) {
            cout << "--> ";
        }
        else {
            cout << "    ";
        }

        cout << "#" << setfill('0') << setw(3) << pkmn->getId() << ": " << name << endl;
    }
    cout << endl;
}

template <typename T>
int nextPkmn(LinkedList<T>* list, int current) {
    if (current + 1 < list->getLength()) {
        return current + 1;
    }
    return current;
}

int prevPkmn(int current) {
    if (current - 1 >= 0) {
        return current - 1;
    }
    return current;
}

// void jumpToPkmn(PkmnList list, int id) {
//     // ADD YOUR CODE HERE
// }
//
// void removePkmn(PkmnList list) {
//     // ADD YOUR CODE HERE
// }
//
// // Stage 3 Functions
// void findPkmn(int seed, int factor, int numberOfNewPkmn, PkmnList list) {
//     // ADD YOUR CODE HERE
// }

template <typename T>
int totalFound(LinkedList<T>* list) {
    int count = 0;
    for (int i = 0; i < list->getLength(); i++) {
        if (list->getNode(i)->getValue()->isFound()) {
            count++;
        }
    }
    return count;
}


// // Stage 4 Functions
// void addEvolution(PkmnList list, int pkmnId, int evolutionId) {
//     // ADD YOUR CODE HERE
// }
//
// void showEvolutions(PkmnList list) {
//     // ADD YOUR CODE HERE
// }
//
//
// // Stage 5 Functions
// PkmnList getPkmnOfType(PkmnList list, int type) {
//     // ADD YOUR CODE HERE
//     return NULL;
// }
//
// PkmnList getFoundPkmn(PkmnList list) {
//     // ADD YOUR CODE HERE
//     return NULL;
// }
//
// PkmnList searchByName(PkmnList list, char text[]) {
//     // ADD YOUR CODE HERE
//     return NULL;
// }



// FUNCTIONAL FUNCTIONS
string getTypeString(int i) {
    string TYPES[] = {
            "Bug",
            "Dark",
            "Dragon",
            "Electric",
            "Fairy",
            "Fighting",
            "Fire",
            "Flying",
            "Ghost",
            "Grass",
            "Ground",
            "Ice",
            "Normal",
            "Poison",
            "Psychic",
            "Rock",
            "Steel",
            "Water"
    };

    return TYPES[i];
}

template <typename T>
void findAll(LinkedList<T>* list) {
    for (int i = 0; i < list->getLength(); i++) {
        list->getNode(i)->getValue()->setFound(true);
    }
}

string getFormattedName(Pkmn* pkmn) {
    string name = pkmn->getName();
    if (pkmn->isFound()) {
        return name;
    }
    return string(name.length(), '*');
}

string getFormattedAttribute(string attr, bool found) {
    if (found) {
        return attr;
    }
    return "--";
}

