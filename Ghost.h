#ifndef GHOST_H
#define GHOST_H
#include "Enemigo.h"
#include <SDL/SDL_image.h>

class Ghost : public Enemigo
{
    public:
        Ghost(int x, int y);
        void avanzar();
        virtual ~Ghost();
    protected:
    private:
};

#endif // GHOST_H
