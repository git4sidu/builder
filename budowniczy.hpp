#ifndef BUDOWNICZY_HPP
#define BUDOWNICZY_HPP

#include "budynek.hpp"

class Budowniczy
{
protected:
    Budynek* budynek = new Budynek();
public:
    virtual ~Budowniczy();

    void nowyBudynek();
    Budynek wybierzBudynek();

    virtual void wstawOkna() = 0;
    virtual void zamontujDrzwi() = 0;
    virtual void pomalujElewacje() = 0;
};

#endif // BUDOWNICZY_HPP
