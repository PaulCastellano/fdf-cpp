#include "../includes/fdf.h"

void    FDF_MAP::scalingMinus() {
    float   distanceX;
    float   distanceY;

    if (this->scaleFactor > 0) {
        this->scaleFactor = 0.999;
    	distanceX = this->windowWidth / 2;
	    distanceY = this->windowHeight / 2;
    	for (int i = 0; i < this->height; i++) {
        	for (int j = 0; j < this->width; j++) {
            	this->map[i][j].setX(this->map[i][j].getX() - distanceX - this->translateX);
	            this->map[i][j].setY(this->map[i][j].getY() - distanceY - this->translateY);
				this->map[i][j].setX(this->map[i][j].getX() * this->scaleFactor);
				this->map[i][j].setY(this->map[i][j].getY() * this->scaleFactor);
				this->map[i][j].setZ(this->map[i][j].getZ() * this->scaleFactor);
				this->map[i][j].setX(this->map[i][j].getX() + distanceX + this->translateX);
    	        this->map[i][j].setY(this->map[i][j].getY() + distanceY + this->translateY);
            }
        }
    }
}

void    FDF_MAP::scalingPlus() {
    float   distanceX;
    float   distanceY;

    if (this->scaleFactor > 0) {
        this->scaleFactor = 1.001;
    	distanceX = this->windowWidth / 2;
	    distanceY = this->windowHeight / 2;
    	for (int i = 0; i < this->height; i++) {
        	for (int j = 0; j < this->width; j++) {
            	this->map[i][j].setX(this->map[i][j].getX() - distanceX - this->translateX);
	            this->map[i][j].setY(this->map[i][j].getY() - distanceY - this->translateY);
				this->map[i][j].setX(this->map[i][j].getX() * this->scaleFactor);
				this->map[i][j].setY(this->map[i][j].getY() * this->scaleFactor);
				this->map[i][j].setZ(this->map[i][j].getZ() * this->scaleFactor);
				this->map[i][j].setX(this->map[i][j].getX() + distanceX + this->translateX);
    	        this->map[i][j].setY(this->map[i][j].getY() + distanceY + this->translateY);
            }
        }
    }
}