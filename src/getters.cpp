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