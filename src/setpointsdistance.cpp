#include "../includes/fdf.h"

void    FDF_MAP::setPointsDistance() {
    float   distanceX;
    float   distanceY;

    distanceX = this->windowWidth / ((float)this->width - 1);
    distanceY = this->windowHeight / ((float)this->height - 1);
    for (int i = 0; i < this->height; i++) {
        for (int j = 0; j < this->width; j++) {
            if (i != 0) {
                this->map[i][j].setY(this->map[i - 1][j].getY() + distanceY);
            }
            if (j != 0) {
                this->map[i][j].setX(this->map[i][j - 1].getX() + distanceX);
            }
        }
    }
}

void    FDF_MAP::resetMap(){
    delete this->map;
    this->readMapFromFile();
    this->setPointsDistance();
}