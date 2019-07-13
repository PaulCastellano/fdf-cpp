#include "../includes/fdf.h"

void    FDF_MAP::showMap(SDL_Renderer *renderer) {
    	SDL_RenderClear(renderer);
		for (int i = 0; i < this->height; i++) {
			for (int j = 0; j < this->width; j++) {
				if (j != this->width - 1) {
					SDL_SetRenderDrawColor(renderer, this->mapColors[i][j].getRX(), this->mapColors[i][j].getGX(), this->mapColors[i][j].getBX(), 255);
					SDL_RenderDrawLine(renderer,this->map[i][j].getX(),this->map[i][j].getY(),this->map[i][j + 1].getX(),this->map[i][j + 1].getY());
				}
				if (i != this->height - 1) {
					SDL_SetRenderDrawColor(renderer, this->mapColors[i][j].getRY(), this->mapColors[i][j].getGY(), this->mapColors[i][j].getBY(), 255);
					SDL_RenderDrawLine(renderer,this->map[i][j].getX(),this->map[i][j].getY(),this->map[i + 1][j].getX(),this->map[i + 1][j].getY());
				}
			}
		}
		SDL_RenderPresent(renderer);
}