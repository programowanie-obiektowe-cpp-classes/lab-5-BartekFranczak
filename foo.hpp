#pragma once

#include "Human.hpp"

#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > v;

    for(Human& h : people){
        h.birthday();
        if(h.isMonster()){ v.emplace(v.begin(),'n');}
        else {v.emplace(v.begin(),'y');}

    }
    return v;
}
