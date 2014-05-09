#include "Bomba.h"


Bomba::Bomba(int x, int y)
{
    this->x = x;
    this->y = y;
    this->surface = IMG_Load("Endless Run/bomba01.png");

}

Bomba::~Bomba()
{
    //dtor
}
