#include <iostream>

using namespace std;

/*Base class*/
class Guitar{

protected:
bool numStrings; //protected member numStrings

public:
Guitar(){ //default constructor
numstrings=true;
}

KitchenAppliance(bool strings){ //constructor that takes in boolean representation of electric requirement
numStrings=strings;
}

virtual bool numStrings(){ //virtual behaviour funtion with no parametres

}
};