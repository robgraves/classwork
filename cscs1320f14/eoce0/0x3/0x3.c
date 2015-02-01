#include <SDL/SDL.h>
#include <SDL/SDL_image.h>

#define ENDSCORE                  8
#define WIDTH                     800
#define HEIGHT                    600

#define BRICKWIDTH                70
#define BRICKHEIGHT               20

#define YES                       1
#define NO                        0

int main()
{
    SDL_Surface *screen;
    SDL_Surface *background;
    int          i;
    int          j;
    Uint8       *keystate;
    int          numkeys;
    int          quit;
    int          score;
    int          total;
    int          rows;
    int          cols;
    Uint8        red;
    Uint8        green;
    Uint8        blue;

    Uint8        phit;
    Uint8        bhit;
    Uint8        Bhit;

    Uint32       rmask;
    Uint32       gmask;
    Uint32       bmask;
    Uint32       amask;

#if SDL_BYTEORDER == SDL_BIG_ENDIAN
    rmask                       =  0xff000000;
    gmask                       =  0x00ff0000;
    bmask                       =  0x0000ff00;
    amask                       =  0x000000ff;
#else
    rmask                       =  0x000000ff;
    gmask                       =  0x0000ff00;
    bmask                       =  0x00ff0000;
    amask                       =  0xff000000;
#endif

    struct player {
        SDL_Surface *sprite;
        SDL_Rect     pos;
    };
    typedef struct player Player;

    struct missile {
        SDL_Surface *sprite;
        SDL_Rect     pos;
        int          visible;
        int          xmove;
        int          ymove;
    };
    typedef struct missile Missile;

    struct object {
        SDL_Surface *sprite;
        SDL_Rect     pos;
        Uint8        visible;
        Uint8        alpha;
    };
    typedef struct object Object;

    SDL_Init(SDL_INIT_EVERYTHING);
    screen                      = SDL_SetVideoMode(WIDTH, HEIGHT, 32, SDL_HWSURFACE);

    cols                        = WIDTH / BRICKWIDTH;
    rows                        = 14;

    Player  paddle;
    Missile ball;
    Object  brick[rows][cols];

    phit                        = 0;
    Bhit                        = 0;
    score                       = 0;
    total                       = 0;
    quit                        = NO;

    background                  = SDL_CreateRGBSurface(SDL_HWSURFACE, WIDTH, HEIGHT, 32, 0, 0, 0, 0);

    red                         = 0x0f;
    green                       = 0x7f;
    blue                        = 0xff;

    paddle.sprite               = IMG_Load("img/paddle.bmp");
    paddle.pos.w                = paddle.sprite -> w;
    paddle.pos.h                = paddle.sprite -> h;
    paddle.pos.x                = screen -> w / 2 - (paddle.sprite -> w / 2);
    paddle.pos.y                = screen -> h - paddle.sprite -> h - (paddle.sprite -> h * 0.10);
    SDL_FillRect(paddle.sprite, &(paddle.pos), SDL_MapRGB(paddle.sprite -> format, red, green, blue));
    phit                        = 0x7f;
    
    ball.sprite                 = IMG_Load("img/ball.bmp");
    ball.pos.w                  = ball.sprite -> w;
    ball.pos.h                  = ball.sprite -> h;
    ball.pos.x                  = screen -> w / 2 - (ball.sprite -> w / 2);
    ball.pos.y                  = screen -> h / 2 - ball.sprite -> h;
    ball.visible                = YES;
    ball.xmove                  = 8;
    ball.ymove                  = 8;

    red                         = 0xff;
    green                       = 0x00;
    blue                        = 0x00;
    
    for (j = 0; j < rows; j++)
    {
        switch(j)
        {
            case 0x00:
            case 0x01:
                red             = 0xff;
                green           = 0x00;
                blue            = 0x00;
                break;

            case 0x02:
            case 0x03:
                red             = 0xff;
                green           = 0x7f;
                blue            = 0x00;
                break;

            case 0x04:
            case 0x05:
                red             = 0xff;
                green           = 0xff;
                blue            = 0x00;
                break;

            case 0x06:
            case 0x07:
                red             = 0x00;
                green           = 0xff;
                blue            = 0x00;
                break;

            case 0x08:
            case 0x09:
                red             = 0x00;
                green           = 0x00;
                blue            = 0xff;
                break;

            case 0x0a:
            case 0x0b:
                red             = 0x4b;
                green           = 0x00;
                blue            = 0x82;
                break;

            case 0x0c:
            case 0x0d:
                red             = 0x8f;
                green           = 0x00;
                blue            = 0xff;
                break;
        }
    
        for(i = 0; i < cols; i++)
        {
            brick[j][i].sprite  = SDL_CreateRGBSurface(SDL_HWSURFACE|SDL_SRCALPHA, BRICKWIDTH, BRICKHEIGHT, 32, rmask, gmask, bmask, amask);

            brick[j][i].pos.w   = brick[j][i].sprite -> w - 4;
            brick[j][i].pos.h   = brick[j][i].sprite -> h - 4;
            brick[j][i].pos.x   = 4;
            brick[j][i].pos.y   = 4;
            brick[j][i].alpha   = 0xff;
            SDL_FillRect(brick[j][i].sprite, &(brick[j][i].pos), SDL_MapRGBA(brick[j][i].sprite -> format, red, green, blue, brick[j][i].alpha));
            brick[j][i].pos.w   = brick[j][i].sprite -> w;
            brick[j][i].pos.h   = brick[j][i].sprite -> h;
            brick[j][i].pos.x   = i * brick[j][i].pos.w + ((screen -> w % cols) / 2);
            brick[j][i].pos.y   = j * brick[j][i].pos.h;
            brick[j][i].visible = YES;
            brick[j][i].sprite  = SDL_ConvertSurface(brick[j][i].sprite, screen->format, SDL_SRCALPHA | SDL_HWSURFACE);

            total               = total + 1;
        }
    }

    while (quit == NO)
    {
        SDL_BlitSurface(background, NULL, screen, NULL);

        SDL_PumpEvents();
            keystate                    = SDL_GetKeyState(&numkeys);

        if (keystate[SDLK_ESCAPE]      == YES)
        {
            quit                        = YES;
        }
        else if (keystate[SDLK_LEFT]   == YES)
        {
			// your code here
        }
        else if (keystate[SDLK_RIGHT]  == YES)
        {
			// your code here
        }
        else if (keystate[SDLK_h]      == YES)
        {
            ball.visible                = ~ball.visible;
        }
        else if (keystate[SDLK_p]      == YES)
        {
            if ((ball.xmove            >  0) ||
				(ball.ymove            >  0))
            {
                ball.xmove              = NO;
                ball.ymove              = NO;
                ball.visible            = YES;
            }
            else
            {
                ball.xmove              = 8;
                ball.ymove              = 8;
                ball.visible            = YES;
            }
        }
        else if (keystate[SDLK_RETURN] == YES)
        {
            ball.visible                = YES;
            ball.xmove                  = 8;
            ball.ymove                  = 8;
            ball.pos.x                  = screen -> w / 2 - (ball.sprite -> w / 2);
            ball.pos.y                  = screen -> h / 2 - ball.sprite -> h;
        }

        // keep paddle on the screen
        if (paddle.pos.x               <  0)
            paddle.pos.x                = 0;
        else if (paddle.pos.x          >  screen -> w - paddle.pos.w)
            paddle.pos.x                = screen -> w - paddle.pos.w;

        if (phit                       >  0x7f)
            phit                        = phit - 4;
        else
            phit                        = 0x7f;

        SDL_SetAlpha(paddle.sprite, SDL_SRCALPHA, phit);
    
        // display paddle
        SDL_BlitSurface(paddle.sprite,   NULL, screen, &(paddle.pos));

        // if the ball is visible, check for collisions and display
        if (ball.visible               == YES)
        {
            // ball collision with paddle (y-axis)
            if ((ball.pos.y < paddle.pos.y + paddle.pos.h) &&
                (ball.pos.y + ball.pos.h > paddle.pos.y))
            {
                // ball collision with paddle (x-axis)
                if ((ball.pos.x < paddle.pos.x + paddle.pos.w) &&
                    (ball.pos.x + ball.pos.w > paddle.pos.x))
                {
                    // from the bottom
                    if ((ball.pos.y - ball.ymove) - paddle.pos.y > 0)
                    {
                        if (((ball.pos.x - ball.xmove + ball.pos.w) <= paddle.pos.x) || // left side hit 
                        ((ball.pos.x - ball.xmove + ball.pos.w) >= paddle.pos.x + paddle.pos.w)) // right side hit
                        {
                            ball.xmove *= -1;
                            phit        = 0xff;
                        }
                        else // top or bottom hit
                        {
                            ball.ymove *= -1;
                            phit        = 0xff;
                        }
                    }
                    else // from the top
                    {
                        if (((ball.pos.x - ball.xmove + ball.pos.w) <= paddle.pos.x) || // left side hit 
                        ((ball.pos.x - ball.xmove + ball.pos.w) >= paddle.pos.x + paddle.pos.w)) // right side hit
                        {
                            ball.xmove *= -1;
                            phit        = 0xff;
                        }
                        else // top or bottom hit
                        {
                            ball.ymove *= -1;
                            phit        = 0xff;
                            if (ball.pos.x < paddle.pos.x + (paddle.pos.w / 3))
                            {
                                ball.xmove -= 4;
                            }
                            else if (ball.pos.x > paddle.pos.x + 2 * (paddle.pos.w / 3))
                            {
                                ball.xmove += 4;
                            }

                            if (ball.xmove < -12)
                                ball.xmove = -12;
                            else if (ball.xmove > 12)
                                ball.xmove = 12;
                        }
                    }
                }
            }

            ball.pos.x             += ball.xmove;
            ball.pos.y             += ball.ymove;

            if (ball.pos.x < 0)
            {
                ball.pos.x          =  0;
                ball.xmove         *= -1;
            }
            else if (ball.pos.x    >= screen -> w - ball.pos.w)
            {
                ball.pos.x          = screen -> w - ball.pos.w;
                ball.xmove         *= -1;
            }

            if (ball.pos.y <= 0)
            {
                ball.pos.y          =  0;
                ball.ymove         *= -1;
            }
            else if (ball.pos.y    >= screen -> h - ball.pos.h)
            {
                ball.visible        = YES;
                ball.xmove         *= -1;
                ball.ymove          =  8;
                ball.pos.x          = screen -> w / 2 - (ball.sprite -> w / 2);
                ball.pos.y          = screen -> h / 2 - ball.sprite -> h;
                score               = score - 1;
                if (score          < 0)
                    score           = 0;
                //printf("score: %d\ttotal: %d\n", score, total);
            }

            if (phit               > 0x7f)
                bhit                = bhit + 4;
            else if (Bhit          > 0)
            {
                bhit                = 0xff;
                Bhit                = 0;
            }
            else if (bhit          > 0x7f)
                bhit                = bhit - 4;
            else
            {
                bhit                = 0x7f;
                Bhit                = 0;
            }

            SDL_SetAlpha(ball.sprite, SDL_SRCALPHA, bhit);

            SDL_BlitSurface(ball.sprite, NULL, screen, &(ball.pos));

            for (j = 0; j < rows; j++)
            {
                for(i = 0; i < cols; i++)
                {
                    if ((brick[j][i].visible == NO) && (brick[j][i].alpha > 0))
                    {
                        brick[j][i].alpha     = brick[j][i].alpha - 4;

                        if (brick[j][i].alpha < 8)
                            brick[j][i].alpha = 0;
                    }

                    if (brick[j][i].visible  == NO)
                        continue;

                    if ((ball.pos.y < brick[j][i].pos.y + brick[j][i].pos.h) &&
                        (ball.pos.y + ball.pos.h > brick[j][i].pos.y))
                    {
                        if ((ball.pos.x < brick[j][i].pos.x + brick[j][i].pos.w) &&
                            (ball.pos.x + ball.pos.w > brick[j][i].pos.x))
                        {
                            brick[j][i].visible = NO;
                            brick[j][i].alpha   = 0x7f;
                            score               = score + 1;
                            total               = total - 1;
                            //printf("score: %d\ttotal: %d\n", score, total);
                            Bhit                = 1;
                            // from the bottom
                            if ((ball.pos.y - ball.ymove) - brick[j][i].pos.y > 0)
                            {
                                if (((ball.pos.x - ball.xmove + ball.pos.w) <= brick[j][i].pos.x) || // left side hit 
                                ((ball.pos.x - ball.xmove + ball.pos.w) >= brick[j][i].pos.x + brick[j][i].pos.w)) // right side hit
                                {
                                    ball.xmove *= -1;
                                }
                                else // top or bottom hit
                                {
                                    ball.ymove *= -1;
                                }
                            }
                        }
                    }
                }
            }
        }

        for (j = 0; j < rows; j++)
        {
            for(i = 0; i < cols; i++)
            {
                if (brick[j][i].alpha > 0)
                {
					SDL_SetAlpha(brick[j][i].sprite, SDL_SRCALPHA, brick[j][i].alpha);
					SDL_BlitSurface(brick[j][i].sprite, NULL, screen, &(brick[j][i].pos));
                }
            }
        }

        SDL_Flip(screen);
        SDL_Delay(20);

        if (total <= 0)
            quit = YES;
    }

    SDL_Quit();

    return(0);
}
