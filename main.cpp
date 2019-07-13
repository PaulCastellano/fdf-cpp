#include "includes/fdf.h"

int main(int ac, char **av) {

	FDF_MAP fdfMap;
	bool	isRunning = true;
	SDL_Event	ev;
	const	Uint8	*keyState = SDL_GetKeyboardState(NULL);

    //SDL INIT
    if (SDL_Init(SDL_INIT_NOPARACHUTE) && SDL_Init(SDL_INIT_EVERYTHING) != 0) {
        SDL_Log("Fuck this shit %s", SDL_GetError());
		return (-1);
    } else {
        SDL_Log("Start working");
    }

	//Create Window
	SDL_Window	*window = SDL_CreateWindow("FDF C++", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, fdfMap.getWindowWidth(), fdfMap.getWindowHeight(), SDL_WINDOW_OPENGL);
    SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, 0);
	//Main Loop
		fdfMap.setFileName("test/test1.txt");
		fdfMap.readMapFromFile();
		fdfMap.setPointsDistance();
	while (isRunning) {
		//Ready buffers and switch
		SDL_SetRenderDrawColor(renderer, 0, 0, 0, 0);
		SDL_GL_SwapWindow(window);
		SDL_PollEvent(&ev);
		if (keyState[SDL_SCANCODE_ESCAPE]) {
			isRunning = false;
		} else if (keyState[SDL_SCANCODE_A] && keyState[SDL_SCANCODE_S] && keyState[SDL_SCANCODE_D]){
			fdfMap.rotationX();
			fdfMap.rotationY();
			fdfMap.rotationZ();
		}else if (keyState[SDL_SCANCODE_S] && keyState[SDL_SCANCODE_D]){
			fdfMap.rotationY();
			fdfMap.rotationZ();
		} else if (keyState[SDL_SCANCODE_A] && keyState[SDL_SCANCODE_D]){
			fdfMap.rotationX();
			fdfMap.rotationZ();
		} else if (keyState[SDL_SCANCODE_A] && keyState[SDL_SCANCODE_S]){
			fdfMap.rotationX();
			fdfMap.rotationY();
		} else if (keyState[SDL_SCANCODE_A]) {
			fdfMap.rotationX();
		} else if (keyState[SDL_SCANCODE_S]) {
			fdfMap.rotationY();
		} else if (keyState[SDL_SCANCODE_D]) {
			fdfMap.rotationZ();
		} else if (keyState[SDL_SCANCODE_RIGHT]) {
			fdfMap.translationRight();
		} else if (keyState[SDL_SCANCODE_LEFT]) {
			fdfMap.translationLeft();
		} else if (keyState[SDL_SCANCODE_UP]) {
			fdfMap.translationForward();
		} else if (keyState[SDL_SCANCODE_DOWN]) {
			fdfMap.translationBack();
		} else if (keyState[SDL_SCANCODE_P]) {
			fdfMap.scalingPlus();
		} else if (keyState[SDL_SCANCODE_M]) {
			fdfMap.scalingMinus();
		} else if (keyState[SDL_SCANCODE_R]) {
			fdfMap.resetMap();
		}
		fdfMap.showMap(renderer);
	}
	//Clean up
	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);
    return (0);
}