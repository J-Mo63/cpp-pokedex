#ifndef PKMN_H_
#define PKMN_H_

#include <iostream>

using namespace std;

class Pkmn {
    private:
        int id;
        string name;
        double height;
        double weight;
        int type;
        bool found;
    public:
        Pkmn(int id, string name, double height, double weight, int type);
        ~Pkmn();
        int getId();
        string getName();
        double getHeight();
        double getWeight();
        int getType();
        bool isFound();
        void setFound(bool state);
};

#endif