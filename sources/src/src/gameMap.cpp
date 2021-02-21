#include <iostream>
#include "gameMap.h"

using namespace std;

GameMap::GameMap() {

}

void GameMap::Draw() {
    for (int i = 0; i < 15; ++i) {
        for (int j = 0; j < 10; ++j) {
            cout << 0;
        }
        cout << endl;
    }
}