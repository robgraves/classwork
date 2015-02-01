/**************************************
 *
 * Matthew Page
 * 
 * 11/20/2014
 * CSCS 1320
 *
 * polygonsmack.cc -    more graphical
 *                      stuff with 
 *                      polygons.
 *
 *************************************/

#include <stdio.h>
#include <stdlib.h>
#include <gd.h>

int main()
{
    unsigned int red, green, blue, white, black, purple, yellow; 
    FILE *out;
    gdImagePtr img;
    unsigned short int wide, high;
    wide=800;
    high=800;
    gdPoint triangle[3];
    //gdPoint star[10];

    img=gdImageCreateTrueColor(wide, high);
    black=gdImageColorAllocate(img, 0x00, 0x00, 0x00);
    white=gdImageColorAllocate(img, 0xff, 0xff, 0xff);
    red=gdImageColorAllocate(img, 0xff, 0x00, 0x00);
    green=gdImageColorAllocate(img, 0x00, 0xff, 0x00);
    blue=gdImageColorAllocate(img, 0x00, 0x00, 0xff);
    purple=gdImageColorAllocate(img, 0xff, 0x00, 0xff);
    yellow=gdImageColorAllocate(img, 0xff, 0xff, 0x00);

    triangle[0].x=400;
    triangle[0].y=0;
    triangle[1].x=800;
    triangle[1].y=600;
    triangle[2].x=0;
    triangle[2].y=600;
    
    /*
    star[0].x=100;
    star[0].y=700;
    star[1].x=400;
    star[1].y=500;
    star[2].x=700;
    star[2].y=700;
    star[3].x=550;
    star[3].y=400;
    star[4].x=800;
    star[4].y=250;
    star[5].x=500;
    star[5].y=250;
    star[6].x=400;
    star[6].y=0;
    star[7].x=300;
    star[7].y=250;
    star[8].x=0;
    star[8].y=250;
    star[9].x=250;
    star[9].y=400;

        
    gdImageFilledRectangle(img, 0, 0, wide, high, black);
    gdImageFilledRectangle(img, 0, 0, 400, 200, white);
    gdImageFilledRectangle(img, 0, 200, 400, 400, red);
    gdImageFilledRectangle(img, 0, 400, 400, 600, black); //maybe unnecessary
    gdImageFilledRectangle(img, 400, 0, 800, 300, green);
    gdImageFilledRectangle(img, 400, 300, 800, 600, blue);

    gdImageFilledArc(img, 400, 300, 100, 100, 30, 330, purple, gdArc);
    */

    gdImageFilledPolygon(img, triangle, 3, yellow);
    gdImagePolygon(img, triangle, 3, green);
    //gdImageFilledPolygon(img, star, 10, yellow);

    out=fopen("myfile5.png", "wb");
    gdImagePngEx(img, out, -1);
    fclose(out);
    gdImageDestroy(img);

    return (0);
}

