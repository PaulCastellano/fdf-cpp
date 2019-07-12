#include "../includes/fdf.h"

void    FDF_MAP::showMap(SDL_Renderer *renderer) {
    	SDL_RenderClear(renderer);
		SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
		for (int i = 0; i < this->height; i++) {
			for (int j = 0; j < this->width; j++) {
				if (j != this->width - 1) {
					SDL_RenderDrawLine(renderer,this->map[i][j].getX(),this->map[i][j].getY(),this->map[i][j + 1].getX(),this->map[i][j + 1].getY());
				}
				if (i != this->height - 1) {
					SDL_RenderDrawLine(renderer,this->map[i][j].getX(),this->map[i][j].getY(),this->map[i + 1][j].getX(),this->map[i + 1][j].getY());
				}
			}
		}
		SDL_RenderPresent(renderer);
}