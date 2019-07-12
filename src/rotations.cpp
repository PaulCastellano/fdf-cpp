#include "../includes/fdf.h"

void    FDF_MAP::rotationX() {
    float   distanceY;

    distanceY = this->windowHeight / 2;
    for (int i = 0; i < this->height; i++) {
        for (int j = 0; j < this->width; j++) {
            this->map[i][j].setY(this->map[i][j].getY() - distanceY - this->translateY);
            this->map[i][j].setY(this->map[i][j].getY() * cos(this->FI) - this->map[i][j].getZ() * sin(this->FI));
            this->map[i][j].setZ(this->map[i][j].getY() * sin(this->FI) + this->map[i][j].getZ() * cos(this->FI));
            this->map[i][j].setY(this->map[i][j].getY() + distanceY + this->translateY);
        }
    }
}

void    FDF_MAP::rotationY() {
    float   distanceX;

    distanceX = this->windowWidth / 2;
    for (int i = 0; i < this->height; i++) {
        for (int j = 0; j < this->width; j++) {
            this->map[i][j].setX(this->map[i][j].getX() - distanceX - this->translateX);
            this->map[i][j].setX(this->map[i][j].getX() * cos(this->FI) + this->map[i][j].getZ() * sin(this->FI) * -1);
            this->map[i][j].setZ(this->map[i][j].getX() * sin(this->FI) + this->map[i][j].getZ() * cos(this->FI));
            this->map[i][j].setX(this->map[i][j].getX() + distanceX + this->translateX);
        }
    }
}

void    FDF_MAP::rotationZ() {
    float   distanceX;
    float   distanceY;

    distanceX = this->windowWidth / 2;
    distanceY = this->windowHeight / 2;
    for (int i = 0; i < this->height; i++) {
        for (int j = 0; j < this->width; j++) {
            this->map[i][j].setX(this->map[i][j].getX() - distanceX - this->translateX);
            this->map[i][j].setY(this->map[i][j].getY() - distanceY - this->translateY);
            this->map[i][j].setX(this->map[i][j].getX() * cos(this->FI) + this->map[i][j].getY() * sin(this->FI));
            this->map[i][j].setY(this->map[i][j].getX() * sin(this->FI) * -1 + this->map[i][j].getY() * cos(this->FI));
            this->map[i][j].setX(this->map[i][j].getX() + distanceX + this->translateX);
            this->map[i][j].setY(this->map[i][j].getY() + distanceY + this->translateY);
        }
    }
}
