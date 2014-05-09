#include "Enemigo.h"

Enemigo::Enemigo(int x, int y, SDL_Surface*surface)
{
    this->x = x;
    this->y = y;
    this->surface = surface;

}

Enemigo::~Enemigo()
{
    //dtor
}

void Enemigo::avanzar(){

    x-=8;

}

void Enemigo::imprimir(SDL_Surface*screen){
    //Holds offsets
    SDL_Rect offset;

    //Get offsets
    offset.x = x;
    offset.y = y;

    //Blit
    SDL_BlitSurface( surface, NULL, screen, &offset );

}

