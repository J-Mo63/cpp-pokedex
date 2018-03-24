#include "Pkmn.h"

using namespace std;

Pkmn::Pkmn(int newId, string newName, double newHeight, double newWeight, int newType) {
    id = newId;
    name = newName;
    height = newHeight;
    weight = newWeight;
    type = newType;
    found = false;
}
Pkmn::~Pkmn() {
    // No good memes for this method
}

int Pkmn::getId() {
    return id;
}

string Pkmn::getName() {
    return name;
}

double Pkmn::getHeight() {
    return height;
}

double Pkmn::getWeight() {
    return weight;
}

int Pkmn::getType() {
    return type;
}

bool Pkmn::isFound() {
    return found;
}

void Pkmn::setFound(bool state) {
    found = state;
}