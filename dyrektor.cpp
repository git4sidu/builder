#include "dyrektor.hpp"


void Dyrektor::wybierzBudowniczego(Budowniczy *b)
{
    builder = b;
}

Budynek Dyrektor::wybierzBudynek()
{
    return builder->wybierzBudynek();
}

void Dyrektor::buduj()
{
    builder->nowyBudynek();
    builder->wstawOkna();
    builder->zamontujDrzwi();
    builder->pomalujElewacje();
}
