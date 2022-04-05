#include <iostream>
#include <string>
using namespace std;


// class transaction record declaration

class TransactionRecord {
    // private members
    int data; // data is a value and a value is int
    string description; // description uses words so a string
    int amount; // amount is a value therefore int
    
    public: //public members
    
    TransactionRecord(); // constructor
    int get_data(); // accessor function to access the data
    string get_description(); //accessor function to access the description
    int get_amount(); // accessor function to access the amount
};

// OR ANOTHER way to declare

class TransactionRecord {
  private: // private members
     TransactionRecord(); // constructor 
     TransactionRecord(int data,string description,int amount); // constructor
  public: // functions 
     int get_data(); // accessor function (get) for data
     string get_description(); // accessor function (get) for description
     int get_amount(); // acceessor function (get) for amount
}; 
