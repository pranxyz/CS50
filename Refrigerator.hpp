// Sub class inheriting from Base Class(katchAppliance) 
#include <iostream> 
class Child : protected KitchAppliance 
{ 
    private: 
      float cost; 
          construct()
    {
        isElectric = true;
    }
        public: 
    virtual void print() 
    { 
        cout << "$X/month" << endl; 
    } 
}; 
  


bool isAppE = app->isElectrical();
bool isFridgeE = fridge->isElectrical();