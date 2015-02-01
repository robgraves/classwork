/***************************************************
 *
 * Matthew Page
 * 
 * 12/04/2014
 * CSCS1320
 *
 * eoce togo.c - End of Course Experience, 0x1.c is a
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
    //variable declarations and initial assignments
    unsigned int red, green, white, black, yellow;
    FILE *out;
    gdImagePtr img;
    unsigned short int wide, high;
    wide=1920;
    high=1080;
    unsigned short int leftstripe, rightstripe;
    leftstripe=0;
    rightstripe=216;
    int counter=1;

    //10 point star
    gdPoint star[10];
    
    //setting image to dimensions above and color definitions
    img=gdImageCreateTrueColor(wide, high);
    black=gdImageColorAllocate(img, 0x00, 0x00, 0x00);
    white=gdImageColorAllocate(img, 0xff, 0xff, 0xff);
    red=gdImageColorAllocate(img, 0xdd, 0x00, 0x00);
    green=gdImageColorAllocate(img, 0x00, 0x80, 0x00);
    yellow=gdImageColorAllocate(img, 0xff, 0xff, 0x00);

    //creating black background
    gdImageFilledRectangle(img, 0, 0, wide, high, black);

    //while loop generating green stripe if counter is odd, yellow stripe if yellow
    while (counter<6)
    {
        if ((counter%2)==1)
        {
            gdImageFilledRectangle(img, 0, leftstripe, 1920, rightstripe, green);
        }
        else
        {
            gdImageFilledRectangle(img, 0, leftstripe, 1920, rightstripe, yellow);
        }
        rightstripe=rightstripe+216;
        leftstripe=leftstripe+216;
        counter=counter+1;
    }

    //generating red field on top of previous stripes in top left corner
    gdImageFilledRectangle(img, 0, 0, 740, 648, red);

    //star points in the middle of the red field for togo's flag
    star[0].x=180;
    star[0].y=557;
    star[1].x=370;
    star[1].y=425;
    star[2].x=560;
    star[2].y=557;
    star[3].x=470;
    star[3].y=384;
    star[4].x=640;
    star[4].y=292;
    star[5].x=430;
    star[5].y=292;
    star[6].x=370;
    star[6].y=90; 
    star[7].x=310;
    star[7].y=292;
    star[8].x=100;
    star[8].y=292;
    star[9].x=270;
    star[9].y=384;
    
    //generating the star
    gdImageFilledPolygon(img, star, 10, white);

    //writing to a png file and closing everything up
    out=fopen("togo.png", "wb");
    gdImagePngEx(img, out, -1);
    fclose(out);
    gdImageDestroy(img);
    
    return (0);
}
