#include "../includes/fdf.h"

//FDF_MAP
void    FDF_MAP::setMap(POINT **map) {
    for (int i = 0; i < this->width; i++) {
        for (int j = 0; j < this->height; j++) {
            this->map[i][j].setX(map[i][j].getX());
            this->map[i][j].setY(map[i][j].getY());
            this->map[i][j].setZ(map[i][j].getZ());
        }
    }
}
void    FDF_MAP::setWidth(int width) {
    this->width = width;
}
void    FDF_MAP::setHeight(int height) {
    this->height = height;
}
void    FDF_MAP::setFileName(string fileName) {
    this->fileName = fileName;
}
//POINT
void    POINT::setX(float x) {
    this->x = x;
}
void    POINT::setY(float y) {
    this->y = y;
}
void    POINT::setZ(float z) {
    this->z = z;
}
