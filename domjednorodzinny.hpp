#ifndef DOMJEDNORODZINNY_HPP
#define DOMJEDNORODZINNY_HPP

#include "budowniczy.hpp"

class DomJednorodzinny : public Budowniczy
{
public:
    DomJednorodzinny();

    void wstawOkna() override;
    void zamontujDrzwi() override;
    void pomalujElewacje() override;
};

#endif // DOMJEDNORODZINNY_HPP
