#include "budowniczy.hpp"

Budowniczy::~Budowniczy(){}

void Budowniczy::nowyBudynek()
{
    budynek = new Budynek();
}

Budynek Budowniczy::wybierzBudynek()
{
    return *budynek;
}
