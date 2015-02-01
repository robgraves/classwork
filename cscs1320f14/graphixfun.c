/*************************************************
 *
 *  Matthew Page
 *  CSCS1320 Fall 2014
 *  10/07/2014
 *
 *  graphixfun.c -  a program to play around with
 *                  interactive graphics.
 *
 ************************************************/

#include <SDL/SDL.h>
#include <SDL/SDL_image.h>

int main()
{
    int i, j,quit=0;
    SDL_Surface *screen;
    SDL_Surface *box;
    SDL_Surface *box2;
    SDL_Surface *background;
    SDL_Event event;
    SDL_Rect offset;
    SDL_Rect offset2;

    SDL_Init(SDL_INIT_EVERYTHING);

    screen=SDL_SetVideoMode(640,480,32,SDL_SWSURFACE);

    box=IMG_Load("box.bmp");
    box2=IMG_Load("box.bmp");
    background=IMG_Load("background.bmp");
    offset.x = 320;
    offset.y = 240;
    offset2.x = 0;
    offset2.y = 0;
    
    offset.x = 320;
    offset.y = 240;

    while (quit==0)
    {
        SDL_BlitSurface(background, NULL, screen, NULL);

        if (SDL_PollEvent(&event))
        {
            if (event.type==SDL_KEYDOWN)
            {
                switch(event.key.keysym.sym)
                {
                    case SDLK_ESCAPE:
                        quit=1;
                        break;
                    case SDLK_RETURN:
                        offset.x=320;
                        offset.y=240;
                        //offset.w=box->w;
                        //offset.h=box->h;
                        break;
                    case SDLK_UP:
                        offset.y=offset.y-10;
                        break;
                    case SDLK_DOWN:
                        offset.y=offset.y+10;
                        break;
                    case SDLK_LEFT:
                        offset.x=offset.x-10;
                        break;
                    case SDLK_RIGHT:
                        offset.x=offset.x+10;
                        break;
                }
            }
            else if (event.type == SDL_QUIT)
                quit = 1;

        }
        if (offset2.x <= 0)
            i=10;
        else if (offset2.x >= 640)
            i=-10;
        if (offset2.y <= 0)
            j=10;
        else if (offset2.y >= 480)
            j=-10;
        offset2.x +=i;
        offset2.y +=j;

        SDL_BlitSurface(box2,NULL,screen,&offset2);
        SDL_BlitSurface(box,NULL,screen,&offset);
        SDL_Flip(screen);
        SDL_Delay(20);
    }
    return (0);
}
