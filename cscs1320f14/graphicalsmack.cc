/**************************************
 *
 * Matthew Page
 * 
 * 11/18/2014
 * CSCS 1320
 *
 * graphicalsmack.cc -  more graphical
 *                      stuff.
 *
 *************************************/

#include <stdio.h>
#include <stdlib.h>
#include <gd.h>

int main()
{
    unsigned int red, green, blue, white, black, purple; 
    FILE *out;
    gdImagePtr img;
    unsigned short int wide, high;
    wide=800;
    high=600;

    img=gdImageCreateTrueColor(wide, high);
    black=gdImageColorAllocate(img, 0x00, 0x00, 0x00);
    white=gdImageColorAllocate(img, 0xff, 0xff, 0xff);
    red=gdImageColorAllocate(img, 0xff, 0x00, 0x00);
    green=gdImageColorAllocate(img, 0x00, 0xff, 0x00);
    blue=gdImageColorAllocate(img, 0x00, 0x00, 0xff);
    purple=gdImageColorAllocate(img, 0xff, 0x00, 0xff);

    gdImageFilledRectangle(img, 0, 0, wide, high, black);
    gdImageFilledRectangle(img, 0, 0, 400, 200, white);
    gdImageFilledRectangle(img, 0, 200, 400, 400, red);
    gdImageFilledRectangle(img, 0, 400, 400, 600, black); //maybe unnecessary
    gdImageFilledRectangle(img, 400, 0, 800, 300, green);
    gdImageFilledRectangle(img, 400, 300, 800, 600, blue);

    gdImageFilledArc(img, 400, 300, 100, 100, 30, 330, purple, gdArc);

    out=fopen("myfile3.png", "wb");
    gdImagePngEx(img, out, -1);
    fclose(out);
    gdImageDestroy(img);

    return (0);
}

