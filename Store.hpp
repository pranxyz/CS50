#include <iostream>
#include <string>
using namespace std;
// class store declaration 
class Store { 
  private: // private members
     int id
     string street_address
     int post_code 
     vector<TransactionRecord>samples; // a vector to store the transaction samples
  public:
     Store(); // constructor 
     int getid(); // accessor function (get) for id
     double get_street_address(); // accessor function (get) for street address 
     double get_post_code(); // accessor function (get) for post code
     vector<TransactionRecord>get_samples(); //accessor function
     string get_current_time(); //a function that will return the current time.
     void add_sample(TransactionRecord transaction_samples); //a function to add 
    // a transaction sample. The transaction sample will be an object of the class TransactionRecord.