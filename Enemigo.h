#ifndef ENEMIGO_H
#define ENEMIGO_H
#include <SDL/SDL.h>


class Enemigo
{
    public:
        int x;
        int y;
        SDL_Surface*surface;
        Enemigo(int x, int y, SDL_Surface*surface);
        Enemigo(){

        }
        virtual void avanzar();
        void imprimir(SDL_Surface*screen);

        virtual ~Enemigo();
    protected:
    private:
};

#endif // ENEMIGO_H
