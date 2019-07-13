#include "common.h"

class   MAP_COLORS {
    private:
        int rX;
        int gX;
        int bX;
        int rY;
        int gY;
        int bY;
    public:
        //setters
        void    setRGBX(int rX, int gX, int bX);
        void    setRGBY(int rY, int gY, int bY);
        //Getters
        int    getRX();
        int    getGX();
        int    getBX();
        int    getRY();
        int    getGY();
        int    getBY();
};

class POINT {
    private:
        float x;
        float y;
        float z;
    public:
        //Getters
        float   getX();
        float   getY();
        float   getZ();
        //Setters
        void    setX(float x);
        void    setY(float y);
        void    setZ(float z);
};

class FDF_MAP {
    private:
        MAP_COLORS  **mapColors;
        POINT   **map;
        int     width;
        int     height;
        string  fileName;
        fstream file; 
        int     windowHeight = 768;
        int     windowWidth = 1366;
        float   FI = 0.001;
        float   translateX = 0;
        float   translateY = 0;
        float   scaleFactor = 1;
    public:
        // Setters
        void    setMap(POINT **map);
        void    setWidth(int width);
        void    setHeight(int height);
        void    setFileName(string fileName);
        void    setPointsDistance();
        void    setCoordX(float coordX);
        void    setCoordY(float coordY);
        void    resetMap();

        //Getters
        POINT   **getMap();
        int    getWidth();
        int    getHeight();
        int     getWindowHeight();
        int     getWindowWidth();
        string    getFileName();
        SDL_Renderer *getRender();
        float   getCoordX();
        float   getCoordY();
        //Read map from file
        void    readMapFromFile();
        void    showMap(SDL_Renderer *renderer);
        //Rotations
        void    rotationX();
        void    rotationY();
        void    rotationZ();
        //Translations
        void    translationRight();
        void    translationLeft();
        void    translationForward();
        void    translationBack();
        //Scaling
        void    scalingPlus();
        void    scalingMinus();
};