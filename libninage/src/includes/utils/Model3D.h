#ifndef MODEL3D_H 
#define MODEL3D_H

#include <vector>
#include <SDL2/SDL_opengl.h>
#include <SDL2/SDL.h>


class Model3D {
    public:
        Model3D();

        std::vector<std::vector<float> > vertices;
        std::vector<std::vector<float> > texcoords;
        std::vector<std::vector<float> > vertexNormals;
        std::vector<std::vector<float> > parameterSpaceVertices;
        std::vector<std::vector<float> > pologonalFaceElement;

        void draw();
};

#endif
