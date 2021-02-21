#ifndef GAMEMAP_H
#define GAMEMAP_H

#include "mapCell.h"

class GameMap {
public:
    GameMap();

    MapCell cells[15][10];

    void Draw();

    void SetPlayerPosition(int PlayerX, int PlayerY);

protected:
private:
};

#endif
