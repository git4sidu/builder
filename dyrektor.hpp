#ifndef DYREKTOR_HPP
#define DYREKTOR_HPP

#include "budynek.hpp"
#include "budowniczy.hpp"

class Dyrektor
{
private:
    Budowniczy* builder;

public:
    void wybierzBudowniczego(Budowniczy* b);
    Budynek wybierzBudynek();
    void buduj();
};

#endif // DYREKTOR_HPP
