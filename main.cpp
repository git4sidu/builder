#include <iostream>
#include "dyrektor.hpp"
#include "budynek.hpp"
#include "domjednorodzinny.hpp"
#include "biurowiec.hpp"

using namespace std;

int main()
{
    Dyrektor* kierownikBudowy = new Dyrektor();

    Budowniczy* budowniczyDomow = new DomJednorodzinny();
    Budowniczy* budowniczyBiurowcow = new Biurowiec();

    kierownikBudowy->wybierzBudowniczego(budowniczyDomow);
    kierownikBudowy->buduj();
    Budynek domek = kierownikBudowy->wybierzBudynek();

    kierownikBudowy->wybierzBudowniczego(budowniczyBiurowcow);
    kierownikBudowy->buduj();
    Budynek biurowiec = kierownikBudowy->wybierzBudynek();

    cout << "Dom jednorodzinny" << endl;
    domek.opiszBudynek();
    cout << "Biurowiec" << endl;
    biurowiec.opiszBudynek();

    return 0;
}
