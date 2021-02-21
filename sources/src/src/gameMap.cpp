#include <iostream>
#include "gameMap.h"

using namespace std;

GameMap::GameMap() {

}

void GameMap::Draw() {
    for (int i = 0; i < 15; ++i) {
        for (int j = 0; j < 10; ++j) {
            cout << cells[i][j].id;
        }
        cout << endl;
    }
}

void GameMap::SetPlayerPosition(int PlayerX, int PlayerY) {
    cout << "Player x: " << PlayerX << " Player y: " << PlayerY << endl;
}