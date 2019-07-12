#include "../includes/fdf.h"

void    FDF_MAP::readMapFromFile() {
    fstream file(this->fileName);
    float   aux;

    if (file.is_open()) {
        file >> this->width >> this->height;
        this->map = new POINT*[this->height];
        for (int i = 0; i < this->height; i++) {
            this->map[i] = new POINT[this->width];
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
    file.close();
}