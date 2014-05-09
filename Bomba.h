#ifndef BOMBA_H
#define BOMBA_H
#include <SDL/SDL_image.h>

#include "Enemigo.h"

class Bomba : public Enemigo
{
    public:
        Bomba(int x, int y);
        virtual ~Bomba();
    protected:
    private:
};

#endif // BOMBA_H
