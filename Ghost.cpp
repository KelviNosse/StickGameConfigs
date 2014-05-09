#include "Ghost.h"

Ghost::Ghost(int x, int y)
{
    this->x = x;
    this->y = y;
    this->surface = IMG_Load("Endless Run/volador01.png");

    //ctor
}

void Ghost::avanzar(){
    x-=6;


}
Ghost::~Ghost()
{
    //dtor
}
