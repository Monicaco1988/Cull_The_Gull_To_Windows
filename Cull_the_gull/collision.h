///// A collision detection API written by Filip Hedman //////////////////////////////////////////////////////////////////////////////
///// Version 1.0 ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdlib.h>
#include <stdio.h>

///// Data structures ////////////////////////////////////////////////////////////////////////////////////////////////////////////////
typedef struct POINT {unsigned int x, y;}POINT;

typedef struct LINE {unsigned int x, y, x2, y2;}LINE;

typedef struct BOX {unsigned int x, y, x2, y2;}BOX;
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////  



///// Function declarations //////////////////////////////////////////////////////////////////////////////////////////////////////////
POINT* create_point(unsigned int x, unsigned int y)
{
    POINT* new_point= (POINT*)malloc(sizeof(POINT)); // Allocate memory for the new point  
    // Set the coordinates of the new point
    new_point->x = x;
    new_point->y = y;

    return new_point;
}

LINE* create_line(unsigned int x, unsigned int y, unsigned int x2, unsigned int y2) {
    LINE* line = (LINE*)malloc(sizeof(LINE));
    if (line == NULL) {
        printf("Error: Memory allocation failed\n");
        return NULL;
    }

    line->x = x;
    line->y = y;
    line->x2 = x2;
    line->y2 = y2;

    return line;
}

BOX* create_box(unsigned int x, unsigned int y, unsigned int x2, unsigned int y2)
{

    BOX* box = (BOX*)malloc(sizeof(BOX));
    box->x = x;
    box->y = y;
    box->x2 = x2;
    box->y2 = y2;


    return box;
}

char point_collide_point(POINT* point1, POINT* point2);

char point_collide_box(POINT* point, BOX* box)
{
    int point_x = point->x;
    int point_y = point->y;
    int box_left = box->x;
    int box_right = box->x2;
    int box_top = box->y;
    int box_bottom = box->y2;

    // Check if the point is colliding with any of the box edges
    if ((point_x == box_left || point_x == box_right) &&
        point_y >= box_top && point_y <= box_bottom) {
        return 1; // Colliding
    }
    if ((point_y == box_top || point_y == box_bottom) &&
        point_x >= box_left && point_x <= box_right) {
        return 1; // Colliding
    }
    return 0; // Not colliding
}

char line_collide_line(LINE* line1, LINE* line2);

char line_collide_box(LINE* line, BOX* box)
{
    // Check if any of the line's endpoints are inside the box
    if (line->x >= box->x && line->x2 <= box->x2 &&
        line->y >= box->y && line->y2 <= box->y2) {
        return 1; // Colliding
    }

    if (line->x >= box->x && line->x2 <= box->x2 &&
        line->y >= box->y && line->y2 <= box->y2) {
        return 1; // Colliding
    }

    // Check if the line intersects with any of the box's edges
    if (line->x >= box->x && line->x2 <= box->x2 &&
        ((line->y <= box->y && line->y2 >= box->y2) ||
            (line->y >= box->y2 && line->y2 <= box->y2))) {
        return 1; // Colliding
    }

    if (line->y >= box->y && line->y <= box->y2 &&
        ((line->x <= box->x && line->x2 >= box->x) ||
            (line->x >= box->x2 && line->x2 <= box->x2))) {
        return 1; // Colliding
    }

    // No collisions found
    return 0;
};

char box_collide_box(BOX* box1, BOX* box2)
{
    int box1_left = box1->x;
    int box2_left = box2->x;
    int box1_right = box1->x2;
    int box2_right = box2->x2;
    int box1_top = box1->y;
    int box2_top = box2->y;
    int box1_bottom = box1->y2;
    int box2_bottom = box2->y2;

    // Check if the boxes are colliding
    if (box1_left <= box2_right && box1_right >= box2_left &&
        box1_top <= box2_bottom && box1_bottom >= box2_top) {
        return 1; // Colliding
    }
    return 0; // Not colliding
}

char box_contain_box(BOX* box1, BOX* box2);

char box_contain_line(BOX* box, LINE* line);
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////





///// Documentation and function explanations ////////////////////////////////////////////////////////////////////////////////////////
/*
This API is designed for two dimensional collision detection only and is NOT well suited 
towards 3D development of any kind. The API provides functions and data structures that help 
check collisions between boxes, lines and points in 2D space using an X and Y coordinate system.
There are also functions available for determining if a line or a box is fully contained
within a box with no parts protruding outside it's bounding box area.


Caution!
For the sake of simplicity and performance, this api provides no safety features.
The three functions that return a struct does not check if the coordinates are outside the 32bit unsigned integer range.
No function checks if the coordinates are outside the 32bit unsigned integer range. This API never returns any errors.
The second set of coordinates in a BOX struct has to be equal to or greater than the first set of coordinates,
otherwise it might not function properly. 



POINT * create_point(unsigned int x, unsigned int y) -
takes two "unsigned int" arguments that represent coordinates and returns a POINT structure.

LINE * create_line(unsigned int x, unsigned int y, unsigned int x2, unsigned int y2) -
takes four "unsigned int" arguments that represent the beginning and the end of the LINE structure 
that will be returned from the function.

BOX * create_box(unsigned int x, unsigned int y, unsigned int x2, unsigned int y2) -
takes four "unsigned int" arguments that represent the top left and the bottom right coordinates 
of the BOX structure that will be returned from the function.

int point_collide_point(POINT * point1, POINT * point2) -
takes two "POINT*" arguments and checks if the two points are colliding with each other.
Returns 1 if they are colliding and 0 if they are not.

int line_collide_line(LINE * line1, LINE * line2) - 
Takes two "LINE*" arguments and checks if the two lines are intersecting at any point.
Returns 1 if they are intersecting and 0 if they are not.

int line_collide_box(LINE * line, BOX * box) -
Takes one "LINE*" argument and one "BOX*" argument and checks if the line collides with the box edge at any point.
Returns 1 if they are colliding and 0 if they are not.

int box_collide_box(BOX * box1, BOX * box2) -
Takes two "BOX*" arguments and checks if the boxes are colliding with each other.
Returns 1 if they are colliding and 0 if they are not.

int box_contain_box(BOX * box1, BOX * box2) -
Takes two "BOX*" arguments and checks if the second box is fully contained within the first box.
Returns 1 if contained and 0 if not.

int box_contain_line(BOX * box, LINE * line) -
Takes one "BOX*" argument and one "LINE*" argument and checks if the line is fully contained within the box.
Returns 1 if contained and 0 if not.
*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////




