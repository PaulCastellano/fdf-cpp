#include "../includes/fdf.h"

void    FDF_MAP::readMapFromFile() {
    fstream file(this->fileName);
    float   aux;

    if (file.is_open()) {
        file >> this->width >> this->height;
        this->map = new POINT*[this->height];
        this->mapColors = new MAP_COLORS*[this->height];
        for (int i = 0; i < this->height; i++) {
            this->map[i] = new POINT[this->width];
            this->mapColors[i] = new MAP_COLORS[this->width];
        }
        for (int i = 0; i < this->height; i++) {
            for (int j = 0; j < this->width; j++) {
                file >> aux;
                this->map[i][j].setZ(aux);
                this->map[i][j].setX(j);
                this->map[i][j].setY(i);
            }
        }
    } else {
        cout << "File can't be open" << endl;
    }
    for (int i = 0; i < this->height; i++) {
        for (int j = 0; j < this->width; j++) {
            if (j != this->width - 1 && this->map[i][j + 1].getZ() <= 0 && this->map[i][j].getZ() <= 0) {
                this->mapColors[i][j].setRGBX(100, 230, 255);
            } else {
                this->mapColors[i][j].setRGBX(255, 255, 255);
            }
            if (i != this->height - 1 && this->map[i + 1][j].getZ() <= 0 && this->map[i][j].getZ() <= 0) {
                this->mapColors[i][j].setRGBY(100, 230, 255);
            } else {
                this->mapColors[i][j].setRGBY(255, 255, 255);
            }
        }
    }
    file.close();
}