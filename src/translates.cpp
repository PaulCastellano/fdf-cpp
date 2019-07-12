#include "../includes/fdf.h"

void    FDF_MAP::translationRight() {
    this->translateX += 1;
    for (int i = 0; i < this->height; i++) {
        for (int j = 0; j < this->width; j++) {
            this->map[i][j].setX(this->map[i][j].getX() + 1);
        }
    }
}

void    FDF_MAP::translationLeft() {
    this->translateX -= 1;
    for (int i = 0; i < this->height; i++) {
        for (int j = 0; j < this->width; j++) {
            this->map[i][j].setX(this->map[i][j].getX() - 1);
        }
    }
}

void    FDF_MAP::translationForward() {
    this->translateY -= 1;
    for (int i = 0; i < this->height; i++) {
        for (int j = 0; j < this->width; j++) {
            this->map[i][j].setY(this->map[i][j].getY() - 1);
        }
    }
}

void    FDF_MAP::translationBack() {
    this->translateY += 1;
    for (int i = 0; i < this->height; i++) {
        for (int j = 0; j < this->width; j++) {
            this->map[i][j].setY(this->map[i][j].getY() + 1);
        }
    }
}