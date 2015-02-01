/***************************************************
 *
 * Matthew Page
 * 
 * 12/04/2014
 * CSCS1320
 *
 * eoce estadosunidos.c - End of Course Experience, 0x1.c is a
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
    //some initial variable declarations and assignments
    unsigned int red, blue, white, black;
    FILE *out;
    gdImagePtr img;
    unsigned short int wide, high;
    wide=1920;
    high=1080;
    unsigned short int leftstripe, rightstripe;
    leftstripe=0;
    rightstripe=83;
    int counter=1;

    //arrays for the x and y values of each star
    int initstarx[10];
    int initstary[10];

    //values needed for the loops below
    int rightbuffer=80;
    int rowcount=1;

    //10 point star
    gdPoint star[10];
    
    //creating img by dimensions given above
    //and setting up colors to use
    img=gdImageCreateTrueColor(wide, high);
    black=gdImageColorAllocate(img, 0x00, 0x00, 0x00);
    white=gdImageColorAllocate(img, 0xff, 0xff, 0xff);
    red=gdImageColorAllocate(img, 0xdd, 0x00, 0x00);
    blue=gdImageColorAllocate(img, 0x00, 0x00, 0xdd);

    //creating a background thats black but ultimately unseen
    gdImageFilledRectangle(img, 0, 0, wide, high, black);

    //stripe loop, counter starts at 1, when odd does a red stripe, when even does a white stripe
    while (counter<14)
    {
        if ((counter%2)==1)
        {
            gdImageFilledRectangle(img, 0, leftstripe, 1920, rightstripe, red);
        }
        else
        {
            gdImageFilledRectangle(img, 0, leftstripe, 1920, rightstripe, white);
        }
        rightstripe=rightstripe+83;
        leftstripe=leftstripe+83;
        counter=counter+1;
    }

    //ceating the blue field of the US flag
    gdImageFilledRectangle(img, 0, 0, 740, 581, blue);

    //setting initial values for the initial star
    initstarx[0]=30;
    initstary[0]=65;
    initstarx[1]=50;
    initstary[1]=50;
    initstarx[2]=70;
    initstary[2]=65;
    initstarx[3]=58;
    initstary[3]=45;
    initstarx[4]=75;
    initstary[4]=35;
    initstarx[5]=55;
    initstary[5]=35;
    initstarx[6]=50;
    initstary[6]=15;
    initstarx[7]=45;
    initstary[7]=35;
    initstarx[8]=25;
    initstary[8]=35;
    initstarx[9]=42;
    initstary[9]=45;

    //outermost loop generates each row from the inner loop
    while (rowcount<10)
    {
        //if-else statement that creates the offsets for the alternating rows
        if ((rowcount%2)==1)
        {
            initstarx[0]=initstarx[0]+10;
            initstarx[1]=initstarx[1]+10;
            initstarx[2]=initstarx[2]+10;
            initstarx[3]=initstarx[3]+10;
            initstarx[4]=initstarx[4]+10;
            initstarx[5]=initstarx[5]+10;
            initstarx[6]=initstarx[6]+10;
            initstarx[7]=initstarx[7]+10;
            initstarx[8]=initstarx[8]+10;
            initstarx[9]=initstarx[9]+10;

            rightbuffer=rightbuffer+10;
        }
        else
        {

            initstarx[0]=initstarx[0]+70;
            initstarx[1]=initstarx[1]+70;
            initstarx[2]=initstarx[2]+70;
            initstarx[3]=initstarx[3]+70;
            initstarx[4]=initstarx[4]+70;
            initstarx[5]=initstarx[5]+70;
            initstarx[6]=initstarx[6]+70;
            initstarx[7]=initstarx[7]+70;
            initstarx[8]=initstarx[8]+70;
            initstarx[9]=initstarx[9]+70;

            rightbuffer=rightbuffer+70;
        }
        
        //innermost loop runs until it reaches end of the blue field
        //increases x values of all point in the star
        while (rightbuffer<=720)
        {
            star[0].x=initstarx[0]; 
            star[0].y=initstary[0]; 
            star[1].x=initstarx[1];
            star[1].y=initstary[1]; 
            star[2].x=initstarx[2];
            star[2].y=initstary[2];
            star[3].x=initstarx[3];
            star[3].y=initstary[3];
            star[4].x=initstarx[4];
            star[4].y=initstary[4];
            star[5].x=initstarx[5];
            star[5].y=initstary[5];
            star[6].x=initstarx[6];
            star[6].y=initstary[6]; 
            star[7].x=initstarx[7]; 
            star[7].y=initstary[7];
            star[8].x=initstarx[8]; 
            star[8].y=initstary[8];
            star[9].x=initstarx[9];
            star[9].y=initstary[9]; 

            //generating the star
            gdImageFilledPolygon(img, star, 10, white);

            //increasing the x values of the star
            initstarx[0]=initstarx[0]+125;
            initstarx[1]=initstarx[1]+125;
            initstarx[2]=initstarx[2]+125;
            initstarx[3]=initstarx[3]+125;
            initstarx[4]=initstarx[4]+125;
            initstarx[5]=initstarx[5]+125;
            initstarx[6]=initstarx[6]+125;
            initstarx[7]=initstarx[7]+125;
            initstarx[8]=initstarx[8]+125;
            initstarx[9]=initstarx[9]+125;


            rightbuffer=rightbuffer+125;

        }
        
        //resetting x values for star.
        initstarx[0]=30;
        initstarx[1]=50;
        initstarx[2]=70;
        initstarx[3]=58;
        initstarx[4]=75;
        initstarx[5]=55;
        initstarx[6]=50;
        initstarx[7]=45;
        initstarx[8]=25;
        initstarx[9]=42;

        rightbuffer=80;

        //increasing y values of the star
        initstary[0]=initstary[0]+60;
        initstary[1]=initstary[1]+60;
        initstary[2]=initstary[2]+60;
        initstary[3]=initstary[3]+60;
        initstary[4]=initstary[4]+60;
        initstary[5]=initstary[5]+60;
        initstary[6]=initstary[6]+60;
        initstary[7]=initstary[7]+60;
        initstary[8]=initstary[8]+60;
        initstary[9]=initstary[9]+60;

        rowcount=rowcount+1;
    }

    //write to a png file and close up
    out=fopen("estadosunidos.png", "wb");
    gdImagePngEx(img, out, -1);
    fclose(out);
    gdImageDestroy(img);
    
    return (0);
}
