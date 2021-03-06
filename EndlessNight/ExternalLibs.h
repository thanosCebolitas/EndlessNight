//Using SDL, SDL_image, standard IO, and strings
#ifdef __APPLE__
    #include <SDL2/SDL.h>
    #include <SDL2_image/SDL_image.h>
	#include <SDL2/SDL_ttf.h>
#else
    #include <SDL.h>
    #include <SDL_image.h>
	#include <SDL_ttf.h>
#endif

#include <stdio.h>
#include <string>
#include <iostream>

//Screen dimension constants
extern const int SCREEN_WIDTH;
extern const int SCREEN_HEIGHT;