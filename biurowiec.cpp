#include "biurowiec.hpp"


Biurowiec::Biurowiec() : Budowniczy(){}

void Biurowiec::wstawOkna()
{
    budynek->wstawOkna("plastikowe");
}

void Biurowiec::zamontujDrzwi()
{
    budynek->zamontujDrzwi("obrotowe");
}

void Biurowiec::pomalujElewacje()
{
    // W tym budynku elewacja bedzie szklana
}
