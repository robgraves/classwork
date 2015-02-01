/***************************************************
 *
 * Matthew Page
 * 
 * 12/04/2014
 * CSCS1320
 *
 * eoce italy.c - End of Course Experience, 0x1.c is a
 *              a program to generate 3 seperate
 *              flags of varying difficulty using
 *              gd library.
 *
 **************************************************/

#include <stdlib.h>
#include <stdio.h>
#include <gd.h>

int main()
{
    //variable declarations and initial assignements
    unsigned int red, green, white, black;
    FILE *out;
    gdImagePtr img;
    unsigned short int wide, high;
    wide=1920;
    high=1080;

    //generating image size and setting up color definitions
    img=gdImageCreateTrueColor(wide, high);
    black=gdImageColorAllocate(img, 0x00, 0x00, 0x00);
    white=gdImageColorAllocate(img, 0xff, 0xff, 0xff);
    red=gdImageColorAllocate(img, 0x90, 0x00, 0x00);
    green=gdImageColorAllocate(img, 0x00, 0x80, 0x00);
  
    //creating a black background and the 3 stripes
    gdImageFilledRectangle(img, 0, 0, wide, high, black);
    gdImageFilledRectangle(img, 0, 0, 640, 1080, green);
    gdImageFilledRectangle(img, 640, 0, 1280, 1080, white);
    gdImageFilledRectangle(img, 1280, 0, wide, high, red);

    //writing to png file and closing everything up
    out=fopen("italy.png", "wb");
    gdImagePngEx(img, out, -1);
    fclose(out);
    gdImageDestroy(img);
 
	return(0);
}
