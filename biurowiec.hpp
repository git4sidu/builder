#ifndef BIUROWIEC_HPP
#define BIUROWIEC_HPP

#include "budowniczy.hpp"

class Biurowiec : public Budowniczy
{
public:
    Biurowiec();

    void wstawOkna() override;
    void zamontujDrzwi() override;
    void pomalujElewacje() override;
};

#endif // BIUROWIEC_HPP
