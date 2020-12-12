#include "budynek.hpp"

#include <iostream>

void Budynek::wstawOkna(std::string o){
    okno = o;
}

void Budynek::zamontujDrzwi(std::string d)
{
    drzwi = d;
}

void Budynek::pomalujElewacje(std::string el){
    kolorElewacji = el;
}

void Budynek::opiszBudynek(){
    if (okno != "") std::cout<< "Okna w budynku beda " << okno << std::endl;
    if (drzwi != "") std::cout<< "Drzwi w budynku beda " << drzwi << std::endl;
    if (kolorElewacji != "") std::cout<< "Elewacja w budynku bedzie " << kolorElewacji << std::endl;
}
