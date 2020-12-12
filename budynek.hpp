#ifndef BUDYNEK_HPP
#define BUDYNEK_HPP

#include <string>

class Budynek
{
    std::string okno;
    std::string drzwi;
    std::string kolorElewacji;

public:
    void wstawOkna(std::string o);
    void zamontujDrzwi(std::string d);
    void pomalujElewacje(std:: string el);
    void opiszBudynek();
};

#endif // BUDYNEK_HPP
