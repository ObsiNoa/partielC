#include "construct.h"
#include "formes.h"

xbserpent = 10;
ybserpent = 10;
xserpent = 10;
yserpent = 290;
vitesse = 10;

void snake() {
	const SDL_Rect* snake = (xserpent,yserpent, xbserpent, ybserpent);
	SDL_SetRenderDrawColor(snake, 0, 255, 0, 1);
	SDL_RenderDrawRect(Render, snake);
}

void deplacement() {
	SDL_Event event;
	SDL_WaitEvent(&event);
	switch (event.type) {
	case SDL_KEYDOWN:
		switch (event.key.keysym.sym)
		{
		case SDLK_LEFT:  xserpent -= vitesse; break;
		case SDLK_RIGHT: xserpent += vitesse; break;
		case SDLK_UP:    yserpent -= vitesse; break;
		case SDLK_DOWN:  yserpent += vitesse; break;
		}
	break;
	}
}