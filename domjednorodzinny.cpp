#include "domjednorodzinny.hpp"


DomJednorodzinny::DomJednorodzinny() : Budowniczy(){}

void DomJednorodzinny::wstawOkna()
{
    budynek->wstawOkna("drewniane");
}

void DomJednorodzinny::zamontujDrzwi()
{
    budynek->zamontujDrzwi("antywlamaniowe");
}

void DomJednorodzinny::pomalujElewacje()
{
    budynek->pomalujElewacje("szara");
}
