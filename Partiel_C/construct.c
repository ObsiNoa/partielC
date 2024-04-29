#include "construct.h"

void window() {
	Window = SDL_CreateWindow("snake", 0, 0, 800, 600, 0);
    if (NULL == window)
    {
        //printf("Erreur SDL_CreateWindow : %s", SDL_GetError());
        return EXIT_FAILURE;
    }
}

void renderer() {
	Render = SDL_CreateRenderer(Window, -1, 0);
}