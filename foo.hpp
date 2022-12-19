#pragma once

#include "Human.hpp"
#include <list>
#include <vector>
#include <algorithm>

using namespace std;

vector< char > foo(list< Human >& people)
{
    
    
    for_each(people.begin(), people.end(), [](Human& person){person.birthday();});
  
    vector<char> znaki(people.size());

    transform(people.begin(), people.end(), znaki.rbegin(), [](Human& person)
    {
        char tmp;
        if (person.isMonster())
        {
            tmp = 'n';
        }
        else
        {
            tmp = 'y';
        }
        return tmp;
    });

    return znaki;
}
