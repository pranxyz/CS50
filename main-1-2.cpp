#include <vector>
#include "Person.h"

constexpr int MAX_PERSONS = 30;

int main()
{
    std::vector<Person> people;

    for( int i = 0 ; i < MAX_PERSONS ; i++ ) {
        Person PERSON{};

        PERSON.setName();
        PERSON.setAge();

        people.push_back( PERSON );
    }
}