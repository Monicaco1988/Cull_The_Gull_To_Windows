//This function takes a char array as input.
//It iterates over the array and draws characters on screen. The characters are taken from the font.png image that is distributed with the program.
#include <stdio.h>
#include <time.h>
#include <allegro5/allegro.h>
#include <allegro5/allegro_image.h>
#include <allegro5/allegro_primitives.h>


void draw_text(char* array, int x, int y, int r, int g, int b, ALLEGRO_BITMAP* bitmap_bird) {




//Setting target bitmap for drawing.
//al_set_target_bitmap(al_create_bitmap(480, 270)); 

//Loop iterator.
int f = 0;

//Position at destination to draw at.
int position_x = 0;
int position_y = 0;

//Getting the length of the array.
while (f < 255) {

//Quitting loop if we have reached the end of the array.
if (array[f] == '\0') {
break;
}

//If there is a newline character, we decrement the position back to the starting point on the x axis and move the y axis a little down.
if (array[f] == '\n') {

position_y += 9;
position_x = 0;
f += 1;

continue;
}

//This switch statement decides what character to draw to the destination and how to increment the position of the text cursor.
switch (array[f]) {

case 'A':
al_draw_tinted_bitmap_region(bitmap_bird, al_map_rgb(r, g, b),  7.0*0.0, 0.0, 6.0, 7.0, (float)(x+position_x), (float)(y+position_y), 0);
position_x += 6;
break;

case 'B':
al_draw_tinted_bitmap_region(bitmap_bird , al_map_rgb(r, g, b), 7.0*1.0, 0.0, 6.0, 7.0, (float)(x+position_x), (float)(y+position_y), 0);
position_x += 6;
break;

case 'C':
al_draw_tinted_bitmap_region(bitmap_bird, al_map_rgb(r, g, b), 7.0*2.0, 0.0, 6.0, 7.0, (float)(x+position_x), (float)(y+position_y), 0);
position_x += 6;
break;

case 'D':
al_draw_tinted_bitmap_region(bitmap_bird, al_map_rgb(r, g, b), 7.0*3.0, 0.0, 6.0, 7.0, (float)(x+position_x), (float)(y+position_y), 0);
position_x += 6;
break;

case 'E':
al_draw_tinted_bitmap_region(bitmap_bird, al_map_rgb(r, g, b), 7.0*4.0, 0.0, 6.0, 7.0, (float)(x+position_x), (float)(y+position_y), 0);
position_x += 6;
break;

case 'F':
al_draw_tinted_bitmap_region(bitmap_bird, al_map_rgb(r, g, b), 7.0*5.0, 0.0, 6.0, 7.0, (float)(x+position_x), (float)(y+position_y), 0);
position_x += 6;
break;

case 'G':
al_draw_tinted_bitmap_region(bitmap_bird, al_map_rgb(r, g, b), 7.0*6.0, 0.0, 6.0, 7.0, (float)(x+position_x), (float)(y+position_y), 0);
position_x += 6;
break;

case 'H':
al_draw_tinted_bitmap_region(bitmap_bird, al_map_rgb(r, g, b), 7.0*7.0, 0.0, 6.0, 7.0, (float)(x+position_x), (float)(y+position_y), 0);
position_x += 6;
break;

case 'I':
al_draw_tinted_bitmap_region(bitmap_bird, al_map_rgb(r, g, b), 7.0*8.0, 0.0, 6.0, 7.0, (float)(x+position_x), (float)(y+position_y), 0);
position_x += 4;
break;

case 'J':
al_draw_tinted_bitmap_region(bitmap_bird, al_map_rgb(r, g, b), 7.0*9.0, 0.0, 6.0, 7.0, (float)(x+position_x), (float)(y+position_y), 0);
position_x += 6;
break;

case 'K':
al_draw_tinted_bitmap_region(bitmap_bird, al_map_rgb(r, g, b), 7.0*10.0, 0.0, 6.0, 7.0, (float)(x+position_x), (float)(y+position_y), 0);
position_x += 5;
break;

case 'L':
al_draw_tinted_bitmap_region(bitmap_bird, al_map_rgb(r, g, b), 7.0*11.0, 0.0, 6.0, 7.0, (float)(x+position_x), (float)(y+position_y), 0);
position_x += 5;
break;

case 'M':
al_draw_tinted_bitmap_region(bitmap_bird, al_map_rgb(r, g, b), 7.0*12.0, 0.0, 6.0, 7.0, (float)(x+position_x), (float)(y+position_y), 0);
position_x += 6;
break;

case 'N':
al_draw_tinted_bitmap_region(bitmap_bird, al_map_rgb(r, g, b), 7.0*13.0, 0.0, 6.0, 7.0, (float)(x+position_x), (float)(y+position_y), 0);
position_x += 6;
break;

case 'O':
al_draw_tinted_bitmap_region(bitmap_bird, al_map_rgb(r, g, b), 7.0*14.0, 0.0, 6.0, 7.0, (float)(x+position_x), (float)(y+position_y), 0);
position_x += 6;
break;

case 'P':
al_draw_tinted_bitmap_region(bitmap_bird, al_map_rgb(r, g, b), 7.0*15.0, 0.0, 6.0, 7.0, (float)(x+position_x), (float)(y+position_y), 0);
position_x += 6;
break;

case 'Q':
al_draw_tinted_bitmap_region(bitmap_bird, al_map_rgb(r, g, b), 7.0*16.0, 0.0, 6.0, 7.0, (float)(x+position_x), (float)(y+position_y), 0);
position_x += 6;
break;

case 'R':

al_draw_tinted_bitmap_region(bitmap_bird, al_map_rgb(r, g, b), 7.0*17.0, 0.0, 6.0, 7.0, (float)(x+position_x), (float)(y+position_y), 0);
position_x += 6;
break;

case 'S':
al_draw_tinted_bitmap_region(bitmap_bird, al_map_rgb(r, g, b), 7.0*18.0, 0.0, 6.0, 7.0, (float)(x+position_x), (float)(y+position_y), 0);
position_x += 6;
break;

case 'T':
al_draw_tinted_bitmap_region(bitmap_bird, al_map_rgb(r, g, b), 7.0*19.0, 0.0, 6.0, 7.0, (float)(x+position_x), (float)(y+position_y), 0);
position_x += 6;
break;

case 'U':
al_draw_tinted_bitmap_region(bitmap_bird, al_map_rgb(r, g, b), 7.0*20.0, 0.0, 6.0, 7.0, (float)(x+position_x), (float)(y+position_y), 0);
position_x += 6;
break;

case 'V':
al_draw_tinted_bitmap_region(bitmap_bird, al_map_rgb(r, g, b), 7.0*21.0, 0.0, 6.0, 7.0, (float)(x+position_x), (float)(y+position_y), 0);
position_x += 6;
break;

case 'W':
al_draw_tinted_bitmap_region(bitmap_bird, al_map_rgb(r, g, b), 7.0*22.0, 0.0, 6.0, 7.0, (float)(x+position_x), (float)(y+position_y), 0);
position_x += 6;
break;

case 'X':
al_draw_tinted_bitmap_region(bitmap_bird, al_map_rgb(r, g, b), 7.0*23.0, 0.0, 6.0, 7.0, (float)(x+position_x), (float)(y+position_y), 0);
position_x += 6;
break;

case 'Y':
al_draw_tinted_bitmap_region(bitmap_bird, al_map_rgb(r, g, b), 7.0*24.0, 0.0, 6.0, 7.0, (float)(x+position_x), (float)(y+position_y), 0);
position_x += 6;
break;

case 'Z':
al_draw_tinted_bitmap_region(bitmap_bird, al_map_rgb(r, g, b), 7.0*25.0, 0.0, 6.0, 7.0, (float)(x+position_x), (float)(y+position_y), 0);
position_x += 6;
break;

case '1':
al_draw_tinted_bitmap_region(bitmap_bird, al_map_rgb(r, g, b), 7.0*52.0, 0.0, 6.0, 7.0, (float)(x+position_x), (float)(y+position_y), 0);
position_x += 6;
break;

case '2':
al_draw_tinted_bitmap_region(bitmap_bird, al_map_rgb(r, g, b), 7.0*53.0, 0.0, 6.0, 7.0, (float)(x+position_x), (float)(y+position_y), 0);
position_x += 6;
break;

case '3':
al_draw_tinted_bitmap_region(bitmap_bird, al_map_rgb(r, g, b), 7.0*54.0, 0.0, 6.0, 7.0, (float)(x+position_x), (float)(y+position_y), 0);
position_x += 6;
break;

case '4':
al_draw_tinted_bitmap_region(bitmap_bird, al_map_rgb(r, g, b), 7.0*55.0, 0.0, 6.0, 7.0, (float)(x+position_x), (float)(y+position_y), 0);
position_x += 6;
break;

case '5':
al_draw_tinted_bitmap_region(bitmap_bird, al_map_rgb(r, g, b), 7.0*56.0, 0.0, 6.0, 7.0, (float)(x+position_x), (float)(y+position_y), 0);
position_x += 6;
break;

case '6':
al_draw_tinted_bitmap_region(bitmap_bird, al_map_rgb(r, g, b), 7.0*57.0, 0.0, 6.0, 7.0, (float)(x+position_x), (float)(y+position_y), 0);
position_x += 6;
break;

case '7':
al_draw_tinted_bitmap_region(bitmap_bird, al_map_rgb(r, g, b), 7.0*58.0, 0.0, 6.0, 7.0, (float)(x+position_x), (float)(y+position_y), 0);
position_x += 6;
break;

case '8':
al_draw_tinted_bitmap_region(bitmap_bird, al_map_rgb(r, g, b), 7.0*59.0, 0.0, 6.0, 7.0, (float)(x+position_x), (float)(y+position_y), 0);
position_x += 6;
break;

case '9':
al_draw_tinted_bitmap_region(bitmap_bird, al_map_rgb(r, g, b), 7.0*60.0, 0.0, 6.0, 7.0, (float)(x+position_x), (float)(y+position_y), 0);
position_x += 6;
break;

case '0':
al_draw_tinted_bitmap_region(bitmap_bird, al_map_rgb(r, g, b), 7.0*61.0, 0.0, 6.0, 7.0, (float)(x+position_x), (float)(y+position_y), 0);
position_x += 6;
break;

case '!':
al_draw_tinted_bitmap_region(bitmap_bird, al_map_rgb(r, g, b), 7.0*62.0, 0.0, 6.0, 7.0, (float)(x+position_x), (float)(y+position_y), 0);
position_x += 2;
break;

case '/':
al_draw_tinted_bitmap_region(bitmap_bird, al_map_rgb(r, g, b), 7.0*63.0, 0.0, 6.0, 7.0, (float)(x+position_x), (float)(y+position_y), 0);
position_x += 5;
break;

case '"':
al_draw_tinted_bitmap_region(bitmap_bird, al_map_rgb(r, g, b), 7.0*64.0, 0.0, 6.0, 7.0, (float)(x+position_x), (float)(y+position_y), 0);
position_x += 4;
break;

case ',':
al_draw_tinted_bitmap_region(bitmap_bird, al_map_rgb(r, g, b), 7.0*65.0, 0.0, 6.0, 7.0, (float)(x+position_x), (float)(y+position_y), 0);
position_x += 3;
break;

case '.':
al_draw_tinted_bitmap_region(bitmap_bird, al_map_rgb(r, g, b), 7.0*66.0, 0.0, 6.0, 7.0, (float)(x+position_x), (float)(y+position_y), 0);
position_x += 2;
break;

case '-':
al_draw_tinted_bitmap_region(bitmap_bird, al_map_rgb(r, g, b), 7.0*67.0, 0.0, 6.0, 7.0, (float)(x+position_x), (float)(y+position_y), 0);
position_x += 6;
break;

case '_':
al_draw_tinted_bitmap_region(bitmap_bird, al_map_rgb(r, g, b), 7.0*68.0, 0.0, 6.0, 7.0, (float)(x+position_x), (float)(y+position_y), 0);
position_x += 7;
break;

case ':':
al_draw_tinted_bitmap_region(bitmap_bird, al_map_rgb(r, g, b), 7.0*69.0, 0.0, 6.0, 7.0, (float)(x+position_x), (float)(y+position_y), 0);
position_x += 2;
break;

case '(':
al_draw_tinted_bitmap_region(bitmap_bird, al_map_rgb(r, g, b), 7.0*70.0, 0.0, 6.0, 7.0, (float)(x+position_x), (float)(y+position_y), 0);
position_x += 4;
break;

case ')':
al_draw_tinted_bitmap_region(bitmap_bird, al_map_rgb(r, g, b), 7.0*71.0, 0.0, 6.0, 7.0, (float)(x+position_x), (float)(y+position_y), 0);
position_x += 4;
break;

case '?':
al_draw_tinted_bitmap_region(bitmap_bird, al_map_rgb(r, g, b), 7.0*72.0, 0.0, 6.0, 7.0, (float)(x+position_x), (float)(y+position_y), 0);
position_x += 5;
break;

default:
position_x += 6; //When there is an unrecognizable character or a space we will draw nothing but still increment the text cursor to the next position.
break;

};



//



//Incrementing draw position so we draw a little further to the right for the next character.




f += 1;
}






}