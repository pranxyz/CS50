#include <vector>
#include "function-1-1.h"

constexpr int MAX_MEERKATS = 30;

int main()
{
    std::vector<Meerkat> meerkat;

    for( int i = 0 ; i < MAX_MEERKATS ; i++ ) {
        Meerkat MEERKAT{};

        MEERKAT.setName();
        MEERKAT.setAge();

        meerkat.push_back( MEERKAT );
    }
}

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