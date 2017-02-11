#ifndef NINAGE_H
#define NINAGE_H

#include <SDL2/SDL.h>
#include <SDL2/SDL_opengl.h>
#include <GL/glu.h>
#include <iostream>
#include <vector>
#include <map>
#include "SpriteImage.h"
#include <glm/vec2.hpp> 
#include "Scene.h"


class TestObj;
extern const Uint8 *state;

class Ninage {
    private:
        int SCALE;
        int WIDTH;
        int HEIGHT;
        int VIEWMODE;

        bool initGL();
        bool init();

    public:
        Ninage();

        int sceneIndex;
        float FPS;
        bool quit;
        std::string TITLE;
        std::vector<Scene*> *scenes; 
        std::map<std::string, TTF_Font*> *fonts;
        
        SDL_Window* display = NULL;
        SDL_GLContext context;

        bool keyboardDown(int keyCode);
        bool loadFont(std::string fontfile, int size);
        bool isFontLoaded(std::string fontfile);

        SpriteImage* loadImage(std::string path);
        Scene* getCurrentScene();
        glm::vec2 getMousePosition();

        int getWidth();
        int getHeight();
        int run();

        void draw(float delta);
        void tick(float delta);
        void close();
        void drawText(std::string message, std::string fontfile, int size, Color * color);
        void addScene(Scene * scene);
        void randomizeSeed();
        void setViewMode(int viewmode);
        void main();

        float getFPS();
};

#endif