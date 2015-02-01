/************************************************
 *
 * Matthew Page
 *
 * 11/11/2014
 * CSCS 1320 
 *
 * node.h - a header file for something
 *
 *
 * *********************************************/

#ifndef _NODE_H
#define _NODE_H
#include <cstdlib>

class Node {
    public:
        Node();     //constructor
        Node(int);  //2nd constructor
        void setValue(int);
        int getValue();
    private:
        int value;
};
#endif

