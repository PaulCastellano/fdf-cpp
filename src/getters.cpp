#include "../includes/fdf.h"

//FDF_MAP
POINT** FDF_MAP::getMap() {
    return (this->map);
}
int     FDF_MAP::getWidth() {
    return (this->width);
}
int     FDF_MAP::getHeight() {
    return (this->height);
}
string  FDF_MAP::getFileName() {
    return (this->fileName);
}
int     FDF_MAP::getWindowHeight() {
    return (this->windowHeight);
}
int     FDF_MAP::getWindowWidth() {
    return (this->windowWidth);
}

//POINT
float   POINT::getX() {
    return (this->x);
}
float   POINT::getY() {
    return (this->y);
}
float   POINT::getZ() {
    return (this->z);
}

//MAP COLORS
int    MAP_COLORS::getRX() {
    return (this->rX);
}
int    MAP_COLORS::getGX() {
    return (this->gX);
}
int    MAP_COLORS::getBX() {
    return (this->bX);
}
int    MAP_COLORS::getRY() {
    return (this->rY);
}
int    MAP_COLORS::getGY() {
    return (this->gY);
}
int    MAP_COLORS::getBY() {
    return (this->bY);
}