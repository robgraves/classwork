/****************************************************
 *
 * Matthew Page
 * 11/04/2014
 * CSCS 1320
 * 
 * rectangle.cpp -  Introduction to C++ and Object
 *                  Oriented Programming and classes
 *                  and stuff.
 *
 ***************************************************/

#include <stdio.h>
#include <stdlib.h>

class rectangle {
    public:
        rectangle();
        rectangle(int, int);
        int area();
        int perimeter();
        int getLength();
        void setLength(int);
        int getWidth();
        void setWidth(int);
    private:
        int length;
        int width;
};

int rectangle::area()
{
    return ((length*width));
}

int rectangle::perimeter()
{
    return ((length+width+length+width));
}

rectangle::rectangle()
{
    length=0;
    width=0;
}

rectangle::rectangle(int length, int width)
{
    this->length=length;
    this->width=width;
}

int rectangle::getLength()
{
    return (length);
}

void rectangle::setLength(int length)
{
    this->length=length;
}

int rectangle::getWidth()
{
    return (width);
}

void rectangle::setWidth(int width)
{
    this->width=width;
}

int main()
{
    int area;
    int perimeter;
    area=0;
    perimeter=0;

    rectangle rect1;
    rectangle *rect2;
    rect1.setLength(7);
    rect1.setWidth(11);
    rect2=new rectangle(4,10);

    area=rect1.area();
    perimeter=rect1.perimeter();

    printf("rect1 area is %d\n", area);
    printf("rect1 perimeter is %d\n", perimeter);

    area=rect2->area();
    perimeter=rect2->perimeter();

    printf("rect2 area is %d\n", area);
    printf("rect2 perimeter is %d\n", perimeter);

    return (0);
}
