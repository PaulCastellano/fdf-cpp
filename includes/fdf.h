#include "common.h"

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