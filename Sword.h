#ifndef SWORD_H
#define SWORD_H

class Sword
{
public:
    Sword();
    // ~Sword();
    decrementaStrength();

    void print( ) const;

private:

    double strength;
    int durability;

};

#endif // SWORD_H