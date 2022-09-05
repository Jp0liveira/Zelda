#include <iostream>
// using std::cout;
using namespace std;

// Ps: não entendi se era para criar um método com algum tipo de laço :(
    
#include "Sword.h"
#include "Sword.cpp"

int main( )
{
    cout << "Usando Sword no main\n";
    
    Sword royalGuardSword;
    royalGuardSword.print();
    cout << "Nova Strength: " << royalGuardSword.decrementaStrength() << endl;
    royalGuardSword.print();

    return 0;

}