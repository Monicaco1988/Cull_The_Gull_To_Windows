//Including stuff.
#include <stdio.h>
#include <time.h>
#include "collision.h"
#include <allegro5/allegro.h>
#include <allegro5/allegro_image.h>
#include <allegro5/allegro_audio.h>
#include <allegro5/allegro_acodec.h>
#include <allegro5/allegro_primitives.h>



//This function takes a char array as input.
//It iterates over the array and draws characters on screen. The characters are taken from the font.png image that is distributed with the program.

void draw_text(char* array, int x, int y, int r, int g, int b, ALLEGRO_BITMAP* bitmap_font, ALLEGRO_BITMAP* internal_display) {




	//Setting target bitmap for drawing.
	al_set_target_bitmap(internal_display);

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
			al_draw_tinted_bitmap_region(bitmap_font, al_map_rgb(r, g, b), 7.0 * 0.0, 0.0, 6.0, 7.0, (float)(x + position_x), (float)(y + position_y), 0);
			position_x += 6;
			break;

		case 'B':
			al_draw_tinted_bitmap_region(bitmap_font, al_map_rgb(r, g, b), 7.0 * 1.0, 0.0, 6.0, 7.0, (float)(x + position_x), (float)(y + position_y), 0);
			position_x += 6;
			break;

		case 'C':
			al_draw_tinted_bitmap_region(bitmap_font, al_map_rgb(r, g, b), 7.0 * 2.0, 0.0, 6.0, 7.0, (float)(x + position_x), (float)(y + position_y), 0);
			position_x += 6;
			break;

		case 'D':
			al_draw_tinted_bitmap_region(bitmap_font, al_map_rgb(r, g, b), 7.0 * 3.0, 0.0, 6.0, 7.0, (float)(x + position_x), (float)(y + position_y), 0);
			position_x += 6;
			break;

		case 'E':
			al_draw_tinted_bitmap_region(bitmap_font, al_map_rgb(r, g, b), 7.0 * 4.0, 0.0, 6.0, 7.0, (float)(x + position_x), (float)(y + position_y), 0);
			position_x += 6;
			break;

		case 'F':
			al_draw_tinted_bitmap_region(bitmap_font, al_map_rgb(r, g, b), 7.0 * 5.0, 0.0, 6.0, 7.0, (float)(x + position_x), (float)(y + position_y), 0);
			position_x += 6;
			break;

		case 'G':
			al_draw_tinted_bitmap_region(bitmap_font, al_map_rgb(r, g, b), 7.0 * 6.0, 0.0, 6.0, 7.0, (float)(x + position_x), (float)(y + position_y), 0);
			position_x += 6;
			break;

		case 'H':
			al_draw_tinted_bitmap_region(bitmap_font, al_map_rgb(r, g, b), 7.0 * 7.0, 0.0, 6.0, 7.0, (float)(x + position_x), (float)(y + position_y), 0);
			position_x += 6;
			break;

		case 'I':
			al_draw_tinted_bitmap_region(bitmap_font, al_map_rgb(r, g, b), 7.0 * 8.0, 0.0, 6.0, 7.0, (float)(x + position_x), (float)(y + position_y), 0);
			position_x += 4;
			break;

		case 'J':
			al_draw_tinted_bitmap_region(bitmap_font, al_map_rgb(r, g, b), 7.0 * 9.0, 0.0, 6.0, 7.0, (float)(x + position_x), (float)(y + position_y), 0);
			position_x += 6;
			break;

		case 'K':
			al_draw_tinted_bitmap_region(bitmap_font, al_map_rgb(r, g, b), 7.0 * 10.0, 0.0, 6.0, 7.0, (float)(x + position_x), (float)(y + position_y), 0);
			position_x += 5;
			break;

		case 'L':
			al_draw_tinted_bitmap_region(bitmap_font, al_map_rgb(r, g, b), 7.0 * 11.0, 0.0, 6.0, 7.0, (float)(x + position_x), (float)(y + position_y), 0);
			position_x += 5;
			break;

		case 'M':
			al_draw_tinted_bitmap_region(bitmap_font, al_map_rgb(r, g, b), 7.0 * 12.0, 0.0, 6.0, 7.0, (float)(x + position_x), (float)(y + position_y), 0);
			position_x += 6;
			break;

		case 'N':
			al_draw_tinted_bitmap_region(bitmap_font, al_map_rgb(r, g, b), 7.0 * 13.0, 0.0, 6.0, 7.0, (float)(x + position_x), (float)(y + position_y), 0);
			position_x += 6;
			break;

		case 'O':
			al_draw_tinted_bitmap_region(bitmap_font, al_map_rgb(r, g, b), 7.0 * 14.0, 0.0, 6.0, 7.0, (float)(x + position_x), (float)(y + position_y), 0);
			position_x += 6;
			break;

		case 'P':
			al_draw_tinted_bitmap_region(bitmap_font, al_map_rgb(r, g, b), 7.0 * 15.0, 0.0, 6.0, 7.0, (float)(x + position_x), (float)(y + position_y), 0);
			position_x += 6;
			break;

		case 'Q':
			al_draw_tinted_bitmap_region(bitmap_font, al_map_rgb(r, g, b), 7.0 * 16.0, 0.0, 6.0, 7.0, (float)(x + position_x), (float)(y + position_y), 0);
			position_x += 6;
			break;

		case 'R':

			al_draw_tinted_bitmap_region(bitmap_font, al_map_rgb(r, g, b), 7.0 * 17.0, 0.0, 6.0, 7.0, (float)(x + position_x), (float)(y + position_y), 0);
			position_x += 6;
			break;

		case 'S':
			al_draw_tinted_bitmap_region(bitmap_font, al_map_rgb(r, g, b), 7.0 * 18.0, 0.0, 6.0, 7.0, (float)(x + position_x), (float)(y + position_y), 0);
			position_x += 6;
			break;

		case 'T':
			al_draw_tinted_bitmap_region(bitmap_font, al_map_rgb(r, g, b), 7.0 * 19.0, 0.0, 6.0, 7.0, (float)(x + position_x), (float)(y + position_y), 0);
			position_x += 6;
			break;

		case 'U':
			al_draw_tinted_bitmap_region(bitmap_font, al_map_rgb(r, g, b), 7.0 * 20.0, 0.0, 6.0, 7.0, (float)(x + position_x), (float)(y + position_y), 0);
			position_x += 6;
			break;

		case 'V':
			al_draw_tinted_bitmap_region(bitmap_font, al_map_rgb(r, g, b), 7.0 * 21.0, 0.0, 6.0, 7.0, (float)(x + position_x), (float)(y + position_y), 0);
			position_x += 6;
			break;

		case 'W':
			al_draw_tinted_bitmap_region(bitmap_font, al_map_rgb(r, g, b), 7.0 * 22.0, 0.0, 6.0, 7.0, (float)(x + position_x), (float)(y + position_y), 0);
			position_x += 6;
			break;

		case 'X':
			al_draw_tinted_bitmap_region(bitmap_font, al_map_rgb(r, g, b), 7.0 * 23.0, 0.0, 6.0, 7.0, (float)(x + position_x), (float)(y + position_y), 0);
			position_x += 6;
			break;

		case 'Y':
			al_draw_tinted_bitmap_region(bitmap_font, al_map_rgb(r, g, b), 7.0 * 24.0, 0.0, 6.0, 7.0, (float)(x + position_x), (float)(y + position_y), 0);
			position_x += 6;
			break;

		case 'Z':
			al_draw_tinted_bitmap_region(bitmap_font, al_map_rgb(r, g, b), 7.0 * 25.0, 0.0, 6.0, 7.0, (float)(x + position_x), (float)(y + position_y), 0);
			position_x += 6;
			break;

		case '1':
			al_draw_tinted_bitmap_region(bitmap_font, al_map_rgb(r, g, b), 7.0 * 52.0, 0.0, 6.0, 7.0, (float)(x + position_x), (float)(y + position_y), 0);
			position_x += 6;
			break;

		case '2':
			al_draw_tinted_bitmap_region(bitmap_font, al_map_rgb(r, g, b), 7.0 * 53.0, 0.0, 6.0, 7.0, (float)(x + position_x), (float)(y + position_y), 0);
			position_x += 6;
			break;

		case '3':
			al_draw_tinted_bitmap_region(bitmap_font, al_map_rgb(r, g, b), 7.0 * 54.0, 0.0, 6.0, 7.0, (float)(x + position_x), (float)(y + position_y), 0);
			position_x += 6;
			break;

		case '4':
			al_draw_tinted_bitmap_region(bitmap_font, al_map_rgb(r, g, b), 7.0 * 55.0, 0.0, 6.0, 7.0, (float)(x + position_x), (float)(y + position_y), 0);
			position_x += 6;
			break;

		case '5':
			al_draw_tinted_bitmap_region(bitmap_font, al_map_rgb(r, g, b), 7.0 * 56.0, 0.0, 6.0, 7.0, (float)(x + position_x), (float)(y + position_y), 0);
			position_x += 6;
			break;

		case '6':
			al_draw_tinted_bitmap_region(bitmap_font, al_map_rgb(r, g, b), 7.0 * 57.0, 0.0, 6.0, 7.0, (float)(x + position_x), (float)(y + position_y), 0);
			position_x += 6;
			break;

		case '7':
			al_draw_tinted_bitmap_region(bitmap_font, al_map_rgb(r, g, b), 7.0 * 58.0, 0.0, 6.0, 7.0, (float)(x + position_x), (float)(y + position_y), 0);
			position_x += 6;
			break;

		case '8':
			al_draw_tinted_bitmap_region(bitmap_font, al_map_rgb(r, g, b), 7.0 * 59.0, 0.0, 6.0, 7.0, (float)(x + position_x), (float)(y + position_y), 0);
			position_x += 6;
			break;

		case '9':
			al_draw_tinted_bitmap_region(bitmap_font, al_map_rgb(r, g, b), 7.0 * 60.0, 0.0, 6.0, 7.0, (float)(x + position_x), (float)(y + position_y), 0);
			position_x += 6;
			break;

		case '0':
			al_draw_tinted_bitmap_region(bitmap_font, al_map_rgb(r, g, b), 7.0 * 61.0, 0.0, 6.0, 7.0, (float)(x + position_x), (float)(y + position_y), 0);
			position_x += 6;
			break;

		case '!':
			al_draw_tinted_bitmap_region(bitmap_font, al_map_rgb(r, g, b), 7.0 * 62.0, 0.0, 6.0, 7.0, (float)(x + position_x), (float)(y + position_y), 0);
			position_x += 2;
			break;

		case '/':
			al_draw_tinted_bitmap_region(bitmap_font, al_map_rgb(r, g, b), 7.0 * 63.0, 0.0, 6.0, 7.0, (float)(x + position_x), (float)(y + position_y), 0);
			position_x += 5;
			break;

		case '"':
			al_draw_tinted_bitmap_region(bitmap_font, al_map_rgb(r, g, b), 7.0 * 64.0, 0.0, 6.0, 7.0, (float)(x + position_x), (float)(y + position_y), 0);
			position_x += 4;
			break;

		case ',':
			al_draw_tinted_bitmap_region(bitmap_font, al_map_rgb(r, g, b), 7.0 * 65.0, 0.0, 6.0, 7.0, (float)(x + position_x), (float)(y + position_y), 0);
			position_x += 3;
			break;

		case '.':
			al_draw_tinted_bitmap_region(bitmap_font, al_map_rgb(r, g, b), 7.0 * 66.0, 0.0, 6.0, 7.0, (float)(x + position_x), (float)(y + position_y), 0);
			position_x += 2;
			break;

		case '-':
			al_draw_tinted_bitmap_region(bitmap_font, al_map_rgb(r, g, b), 7.0 * 67.0, 0.0, 6.0, 7.0, (float)(x + position_x), (float)(y + position_y), 0);
			position_x += 6;
			break;

		case '_':
			al_draw_tinted_bitmap_region(bitmap_font, al_map_rgb(r, g, b), 7.0 * 68.0, 0.0, 6.0, 7.0, (float)(x + position_x), (float)(y + position_y), 0);
			position_x += 7;
			break;

		case ':':
			al_draw_tinted_bitmap_region(bitmap_font, al_map_rgb(r, g, b), 7.0 * 69.0, 0.0, 6.0, 7.0, (float)(x + position_x), (float)(y + position_y), 0);
			position_x += 2;
			break;

		case '(':
			al_draw_tinted_bitmap_region(bitmap_font, al_map_rgb(r, g, b), 7.0 * 70.0, 0.0, 6.0, 7.0, (float)(x + position_x), (float)(y + position_y), 0);
			position_x += 4;
			break;

		case ')':
			al_draw_tinted_bitmap_region(bitmap_font, al_map_rgb(r, g, b), 7.0 * 71.0, 0.0, 6.0, 7.0, (float)(x + position_x), (float)(y + position_y), 0);
			position_x += 4;
			break;

		case '?':
			al_draw_tinted_bitmap_region(bitmap_font, al_map_rgb(r, g, b), 7.0 * 72.0, 0.0, 6.0, 7.0, (float)(x + position_x), (float)(y + position_y), 0);
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






};





//Start of main function. 
int main() {

	//Initializing allegro.
	al_init();
	al_init_image_addon();
	al_init_primitives_addon();
	al_install_keyboard();
	al_install_audio();
	al_init_acodec_addon();

	//Font image.
	ALLEGRO_BITMAP* bitmap_font = al_load_bitmap("video/font.png");
	al_convert_mask_to_alpha(bitmap_font, al_map_rgb(0, 0, 0));


	//Image that covers screen when you get hurt. white hurt frame.
	ALLEGRO_BITMAP* bitmap_whitescreen = al_create_bitmap(480, 270);
	al_set_target_bitmap(bitmap_whitescreen);
	al_clear_to_color(al_map_rgb(255, 255, 255));


	//Other whitescreen that is shown at the end of the game.
	ALLEGRO_BITMAP* bitmap_white = al_create_bitmap(480, 270);
	al_set_target_bitmap(bitmap_white);
	al_clear_to_color(al_map_rgb(255, 255, 255));

	//Primitive variables.
	int running = 1;
	int time_current = 0;
	int time_previous = 0;
	int time_target = 0;
	int hold_right = 0;
	int hold_left = 0;
	int press_space = 0;
	int hold_a = 0;
	int hold_d = 0;

	int birdx = -44 * 8;
	int birdy = 100 * 8;

	int birdx_velocity = 0;
	int birdy_velocity = 0;

	int draw_direction = 1;
	int space_previous = 0;

	double camera_x = 0.0;

	int f, i, p, h, e, d;

	char text_lives[] = "LIVES LEFT: 4";
	char text_game_over[] = "GAME OVER\n THE GULL HAS BEEN CULLED!";

	int game_over_position = 270;

	int lives = 4; // How many lives you hav.

	int slowness = 0; //If 1, the framerate becomes 15.

	int whiteness = 0; //How white is the whitescreen?

	int slowness_timer = 0; //Once the timer runs out the slowness effect will stop.

	int bird_frame = 0;

	int slowanimation = 0;

	int victory = 0;

	int background_frame = 0;

	int inv = 0; //You can't tie during this timer.

	int birddam_frame = 0; //This represents what frame to show when the bird is damaged.

	char text_victory[] = "THE GULL IS FREE";

	int death_delay = 10;

	int hurtsound = 0; //When we get hurt we play the hurt but this variable will alternate between 0 and 1 and play different sounds depending on this variale.

	char text_press_enter[] = "PRESS THE ENTER KEY";

	int frames_passed = 0;

	char text_restart[] = "PRESS SPACE TO RESTART";

	int alternating_title = 0;

	int waitenter = 1;

	int enterfade = 0;
	int fadedir = 1;

	int ease_timer = 126; //During this timer in the start of the game the movement is slightly slower and more forgiving.

	int last_dir = 0;

	int delay_velocity = 0; //

	int white = 0; //Represents the whiteness of the whitescreen at the end of the game.
	int white2 = 0; //The transparency of the final end screen.

	int beam_frame = 0;

	int beam_timer = 0; //Timer that determines if the beam is on or off. When on you start taking damage.

	int tutorial = 1; //In the start of the game there will be a tutorial message on screen until you press the spacebar for the first time.

	char tutorial_title[] = "CONTROLS";
	char tutorial_direction[] = "USE 'A' AND 'D' KEYS FOR HORIZONTAL MOVEMENT";
	char tutorial_jump[] = "USE SPACEBAR TO JUMP";

	int time_taken = 0;

	float music_gain = 1.0;

	int space_delay = 30;

	char text_progress[] = "- PROGRESS -";

	double ff = 0.0;

	//Hitboxes.
	BOX* bird_box = create_box(birdx, birdy, birdx + 24 * 8, birdy + 24 * 8);

	//Lines that go on the top and the bottom of the screen. 
	LINE* top_line = create_line(0, 0, 480 * 10 * 8, 0);
	LINE* bottom_line = create_line(0, 270 * 8, 480 * 10 * 8, 270 * 8);


	BOX* view = create_box(0, 0, 480, 270);

	//Rectangle hitbox for beam.
	BOX* beam1 = create_box(510 * 8, 0, 522 * 8, 270 * 8);
	BOX* beam2 = create_box(1600 * 8, 0, 1612 * 8, 270 * 8);
	BOX* beam3 = create_box(1730 * 8, 0, 1742 * 8, 270 * 8);

	//Setting window mode to fullscreen.
	al_set_new_display_flags(ALLEGRO_FULLSCREEN_WINDOW);

	//Creating allegro display. 
	ALLEGRO_BITMAP* internal_display = al_create_bitmap(480, 270);
	ALLEGRO_DISPLAY* external_display = al_create_display(480, 270);

	//Level image.
	ALLEGRO_BITMAP* bitmap_level = al_load_bitmap("video/test_level.png");

	//Creating game over bitmap.
	ALLEGRO_BITMAP* bitmap_game_over_small = al_load_bitmap("video/game_over.png");
	ALLEGRO_BITMAP* bitmap_game_over = al_create_bitmap(480, 270);
	al_convert_mask_to_alpha(bitmap_game_over_small, al_map_rgb(0, 0, 0));
	al_set_target_bitmap(bitmap_game_over);
	al_draw_scaled_bitmap(bitmap_game_over_small, 0, 0, 139, 17, 0, 0, 139 * 2, 17 * 2, 0);

	//Level background.
	ALLEGRO_BITMAP* bitmap_level_background1 = al_load_bitmap("video/level_background1.png");
	ALLEGRO_BITMAP* bitmap_level_background2 = al_load_bitmap("video/level_background2.png");
	ALLEGRO_BITMAP* bitmap_level_background3 = al_load_bitmap("video/level_background3.png");

	//Title.
	ALLEGRO_BITMAP* bitmap_title = al_load_bitmap("video/titlenew.png");
	ALLEGRO_BITMAP* bitmap_title2 = al_load_bitmap("video/title2.png");

	//The bitmap for the birt when he is danmaged
	ALLEGRO_BITMAP* bitmap_birddam1 = al_load_bitmap("video/birddam1.png");
	ALLEGRO_BITMAP* bitmap_birddam2 = al_load_bitmap("video/birddam2.png");
	ALLEGRO_BITMAP* bitmap_birddam3 = al_load_bitmap("video/birddam3.png");


	//
	ALLEGRO_BITMAP* bitmap_healthbar = al_load_bitmap("video/healthbar.png");

	//Chicken wings.
	ALLEGRO_BITMAP* bitmap_wing = al_load_bitmap("video/drumstick.png");

	ALLEGRO_BITMAP* bitmap_end = al_load_bitmap("video/end2.png");

	//Removing white in birddam.
	al_convert_mask_to_alpha(bitmap_birddam1, al_map_rgb(255, 255, 255));
	al_convert_mask_to_alpha(bitmap_birddam2, al_map_rgb(255, 255, 255));
	al_convert_mask_to_alpha(bitmap_birddam3, al_map_rgb(255, 255, 255));

	//Loading in all bird assets.
	ALLEGRO_BITMAP* bitmap_bird1 = al_load_bitmap("video/bird1.png");
	ALLEGRO_BITMAP* bitmap_bird2 = al_load_bitmap("video/bird2.png");
	ALLEGRO_BITMAP* bitmap_bird3 = al_load_bitmap("video/bird3.png");
	ALLEGRO_BITMAP* bitmap_bird4 = al_load_bitmap("video/bird4.png");

	//Electricution beams.
	ALLEGRO_BITMAP* bitmap_beam = al_load_bitmap("video/beam.png");
	al_convert_mask_to_alpha(bitmap_beam, al_map_rgb(255, 255, 255));

	//The icon for your health.
	ALLEGRO_BITMAP* bitmap_icon = al_load_bitmap("video/icon.png");

	//
	ALLEGRO_BITMAP* bitmap_door1 = al_load_bitmap("video/door1.png");
	ALLEGRO_BITMAP* bitmap_door2 = al_load_bitmap("video/door2.png");


	//Dead. Death animation. Dead bird.
	ALLEGRO_BITMAP* bitmap_dead1 = al_load_bitmap("video/death1.png");
	al_convert_mask_to_alpha(bitmap_dead1, al_map_rgb(255, 255, 255));

	//Removing the white in the images.
	al_convert_mask_to_alpha(bitmap_bird1, al_map_rgb(255, 255, 255));
	al_convert_mask_to_alpha(bitmap_bird2, al_map_rgb(255, 255, 255));
	al_convert_mask_to_alpha(bitmap_bird3, al_map_rgb(255, 255, 255));
	al_convert_mask_to_alpha(bitmap_bird4, al_map_rgb(255, 255, 255));

	//Setting up samples and stuff.
	al_reserve_samples(16);


	//Loading in all the sound effects and the music.
	ALLEGRO_SAMPLE* music = al_load_sample("music.ogg");
	ALLEGRO_SAMPLE_INSTANCE* music_instance = al_create_sample_instance(music);
	al_attach_sample_instance_to_mixer(music_instance, al_get_default_mixer());
	al_set_sample_instance_speed(music_instance, 1.0);
	al_set_sample_instance_playmode(music_instance, ALLEGRO_PLAYMODE_LOOP);


	//Flapping wings sound.
	ALLEGRO_SAMPLE* flap = al_load_sample("flap.ogg");


	//Hurt sounds.
	ALLEGRO_SAMPLE* hurt1 = al_load_sample("hurt1.ogg");
	ALLEGRO_SAMPLE* hurt2 = al_load_sample("hurt2.ogg");
	ALLEGRO_SAMPLE* hurt3 = al_load_sample("hurt3.ogg");
	ALLEGRO_SAMPLE* hurt4 = al_load_sample("hurt4.ogg");

	//chock sound.
	ALLEGRO_SAMPLE* shock = al_load_sample("shock2.ogg");

	//Sound you hear when you win.
	ALLEGRO_SAMPLE* win = al_load_sample("win.ogg");

	//Making a sample instance to slow down hurt sound for when you die.
	ALLEGRO_SAMPLE_INSTANCE* hurt2_instance = al_create_sample_instance(hurt2);
	al_attach_sample_instance_to_mixer(hurt2_instance, al_get_default_mixer());

	al_set_sample_instance_speed(hurt2_instance, 0.5);

	//
	if (music == NULL) {
		running = 0;
	}


	al_play_sample_instance(music_instance);

	/*
	ALLEGRO_SAMPLE_INSTANCE * music_instance = al_create_sample_instance(music);

	al_attach_sample_instance_to_mixer(music_instance ,al_get_default_mixer());
	al_play_sample_instance(music_instance);
	*/
	//
	/*
	ALLEGRO_BITMAP * menu_background = al_create_bitmap(80, 40);
	al_set_target_bitmap(menu_background);
	al_clear_to_color(al_map_rgb(255, 0, 255));
	*/

	//Storing the keyboard state in this struct.
	ALLEGRO_KEYBOARD_STATE keyboard_state;

	//This color will be compared with the hitbox mask to check for.
	ALLEGRO_COLOR color_white = al_map_rgb(255, 255, 255);
	ALLEGRO_COLOR color_compare;
	unsigned char r, g, b;

	//Hitbox level. Level hitbox.
	ALLEGRO_BITMAP* bitmap_level_hitbox = al_load_bitmap("video/level_hitbox.png");
	//al_convert_mask_to_alpha(bitmap_level_hitbox, al_map_rgb(255, 255, 255));

	//Text for loading.
	char text_loading[] = "LOADING                            ";

	//Draw text setup.
//#include "draw_text_setup.h"

	ALLEGRO_KEYBOARD_STATE keyboard_state2;
	//Making hitbox. Level hibtox. dangerous area. array of points.
	POINT** array_points = (POINT**)malloc(sizeof(POINT) * 480 * 270);
	f = 0;
	p = 0;
	//al_lock_bitmap(bitmap_level_hitbox, ALLEGRO_LOCK_READWRITE);
	ALLEGRO_LOCKED_REGION* locked_region = al_lock_bitmap(bitmap_level_hitbox, ALLEGRO_PIXEL_FORMAT_ANY, ALLEGRO_LOCK_READWRITE);
	while (f < 273) {
		i = 0;
		while (i < 2405) {

			color_compare = al_get_pixel(bitmap_level_hitbox, i, f);

			al_unmap_rgb(color_compare, &r, &g, &b);


			if (r == 218) {
				array_points[p] = create_point(i * 8, f * 8);
				p += 1;
			}

			i += 1;
		}

		//Quitting game by pressing escape.

		al_get_keyboard_state(&keyboard_state2);
		if (al_key_down(&keyboard_state2, ALLEGRO_KEY_ESCAPE) == 1) {
			running = 0;
		}


		al_set_target_bitmap(internal_display);
		al_clear_to_color(al_map_rgb(218, 218, 218));

		sprintf_s(text_loading, "LOADING: %d PERCENT%%", (int)(((float)f / 273.0) * 100));

		if (alternating_title < 7) {
			alternating_title += 1;
		}
		else {
			alternating_title = 0;
		}


		if (alternating_title < 4) {
			al_draw_bitmap(bitmap_title, 0, 0, 0);
		}
		else {
			al_draw_bitmap(bitmap_title, 0, 0, 0);
		}


		draw_text(text_loading, 175, 250, 255, 255, 255, bitmap_font, internal_display);


		//Drawing the internal display to the external one.
		al_set_target_bitmap(al_get_backbuffer(external_display));
		al_draw_scaled_bitmap(internal_display, 0, 0, 480, 270, 0, 0, al_get_display_width(external_display), al_get_display_height(external_display), 0);


		al_flip_display();

		f += 1;

		//Limiting the framerate to 60.
		while (clock() < time_target/2) {

		}
	}
	//printf("%d\n", p);
	al_unlock_bitmap(bitmap_level_hitbox);




	while (waitenter == 1) {

		al_set_target_bitmap(internal_display);
		al_clear_to_color(al_map_rgb(0, 0, 0));
		al_get_keyboard_state(&keyboard_state2);
		if (al_key_down(&keyboard_state2, ALLEGRO_KEY_ENTER) == 1) {
			waitenter = 0;
		}

		al_draw_bitmap(bitmap_title, 0, 0, 0);
		draw_text(text_press_enter, 170, 200, 255, 255, 255, bitmap_font, internal_display);

		//Drawing the internal display to the external one.
		al_set_target_bitmap(al_get_backbuffer(external_display));
		al_draw_scaled_bitmap(internal_display, 0, 0, 480, 270, 0, 0, al_get_display_width(external_display), al_get_display_height(external_display), 0);

		if (fadedir == 1) {
			enterfade += 10;
		}
		if (enterfade == 250) {
			fadedir = 0;
		}
		if (fadedir == 0) {
			enterfade -= 5;
		}
		if (enterfade == 0) {
			fadedir = 1;
		}

		al_flip_display();


	}



	//ALLEGRO_BITMAP * bird = al_create_bitmap(32, 32);
	//al_set_target_bitmap(bitmap_bird);
	//al_clear_to_color(al_map_rgb(255, 255, 255));


	//Loading bird image.
	ALLEGRO_BITMAP* bitmap_bird;
	bitmap_bird = al_load_bitmap("video/bird.png");
	if (bitmap_bird == NULL) {
		running = 0;
	}

	//Start of main game loop.
	while (running == 1) {

		//Getting time.
		time_current = clock();
		if (slowness == 0) {
			time_target = clock() + (CLOCKS_PER_SEC / 60);
		}
		if (slowness == 1) {
			time_target = clock() + (CLOCKS_PER_SEC / 20);
		}

		//Clearing image.
		al_set_target_bitmap(internal_display);
		al_clear_to_color(al_map_rgb(218, 218, 218));


		//Animating level background.
		background_frame += 1;
		if (background_frame > 5) {
			background_frame = 0;
		}

		//Drawing backgrounds.
		switch (background_frame) {

		case 0:
			al_draw_bitmap(bitmap_level_background1, 0 - camera_x, 0, 0);
			break;

		case 1:
			al_draw_bitmap(bitmap_level_background1, 0 - camera_x, 0, 0);
			break;

		case 2:
			al_draw_bitmap(bitmap_level_background2, 0 - camera_x, 0, 0);
			break;

		case 3:
			al_draw_bitmap(bitmap_level_background2, 0 - camera_x, 0, 0);
			break;

		case 4:
			al_draw_bitmap(bitmap_level_background3, 0 - camera_x, 0, 0);
			break;

		case 5:
			al_draw_bitmap(bitmap_level_background3, 0 - camera_x, 0, 0);
			break;
		}

		//Moving camera along according to players movement. 
		if (birdx / 8 > (camera_x + ((480 / 2) + 20))) {
			//camera_x += ((float)birdx/8.0-camera_x/8.0)/100.0;
			camera_x += 2.0;
		}

		if (birdx / 8 < (camera_x + ((480 / 2) - 50))) {
			camera_x -= 2.0;
		}

		//Camera clamp so it can't moce out of view.
		if (camera_x < 0) {
			camera_x = 0;
		}

		//Drawing level background.
		//al_draw_bitmap(bitmap_level, 0-camera_x, 0, 0);

		//Drawing level hitboxes. Devtest.
		//al_draw_bitmap(bitmap_level_hitbox, 0-camera_x, 0, 0);


		//Getting keyboard input.
		al_get_keyboard_state(&keyboard_state);


		////Drawing menu background.
		//al_set_target_bitmap(internal_display);
		//al_draw_bitmap(menu_background, 0, 0, 0);

		//Drawing healthbar.
		al_draw_bitmap(bitmap_healthbar, 0, 0, 0);
		al_draw_bitmap(bitmap_icon, 3, 3, 0);
		//draw_text(text_lives, 15+10, 5, 255, 255, 255);
		draw_text(text_progress, 3, 40, 255, 255, 255, bitmap_font, internal_display);


		ff = (double)(birdx / 8) / 2400.0;
		/*
		if (ff > 1.0) {
		ff = 1.0;
		}
		*/
		f = 3 + (94 * ff);
		if (f > 97) {
			f < 97;
		}

		if (f < 3) {
			f = 3;
		}

		if (victory == 0) {
			al_draw_filled_rectangle(3, 25, f, 35, al_map_rgb(247, 243, 66));

			al_draw_rectangle(3, 25, 97, 35, al_map_rgb(218, 218, 218), 0);
		}

		printf("%d\n", birdx / 8);

		//Drawing chicken wings that represent your healthbar on healthbar.
		if (lives == 4) {
			al_draw_bitmap(bitmap_wing, 20 + 4, 3, 0);
			al_draw_bitmap(bitmap_wing, 20 + 16 + 4, 3, 0);
			al_draw_bitmap(bitmap_wing, 20 + 16 + 16 + 4, 3, 0);
			al_draw_bitmap(bitmap_wing, 20 + 16 + 16 + 16 + 4, 3, 0);
		}

		if (lives == 3) {
			al_draw_bitmap(bitmap_wing, 20 + 4, 3, 0);
			al_draw_bitmap(bitmap_wing, 20 + 16 + 4, 3, 0);
			al_draw_bitmap(bitmap_wing, 20 + 16 + 16 + 4, 3, 0);
		}

		if (lives == 2) {
			al_draw_bitmap(bitmap_wing, 20 + 4, 3, 0);
			al_draw_bitmap(bitmap_wing, 20 + 16 + 4, 3, 0);
		}

		if (lives == 1) {
			al_draw_bitmap(bitmap_wing, 20 + 4, 3, 0);
		}

		//Quitting game by pressing escape.
		if (al_key_down(&keyboard_state, ALLEGRO_KEY_ESCAPE) == 1) {
			running = 0;
		}



		//Getting keyboard inputs that will controll the player.
		press_space = 0;
		if (al_key_down(&keyboard_state, ALLEGRO_KEY_LEFT) == 1) {
			hold_a = 1;
		}
		if (al_key_down(&keyboard_state, ALLEGRO_KEY_RIGHT) == 1) {
			hold_d = 1;
		}
		if (al_key_down(&keyboard_state, ALLEGRO_KEY_SPACE) == 1) {
			if (space_previous == 0) {
				press_space = 1;

				if (victory == 0) {
					al_play_sample(flap, 1.0, 0.0, 1.0, ALLEGRO_PLAYMODE_ONCE, NULL); //
				}


				space_previous = 1;
			}
		}


		//Showing tutorial message until you press space.
		if (press_space == 1) {
			tutorial = 0;

		}

		if (tutorial == 1) {
			draw_text(tutorial_jump, 10, 225, 255, 255, 255, bitmap_font, internal_display);
		}
		/*
		al_draw_filled_rectangle(60, 40, 480-60, 270-40, al_map_rgb(0, 0, 0));
		draw_text(tutorial_title, 120, 45, 255, 255, 255);
		draw_text(tutorial_direction, 120, 75, 255, 255, 255);
		draw_text(tutorial_jump, 120, 105, 255, 255, 255);
		*/


		//If dead. Decrement space delay.
		if (lives == 0) {
			space_delay -= 1;
		}
		if (space_delay < 0) {
			space_delay = 0;
		}

		//printf("%d\n", );

		//Replay button.
		if (press_space && lives == 0 && space_delay == 0) {
			//#include "reset_game.c"

			//Tracking what direction were pressed last.
				/*
			if (hold_a == 1) {
			last_dir = 0;
			}
			if (hold_d == 1) {
			last_dir = 1;
			}
			*/

			//Resetting the speed of the music.
			al_set_sample_instance_position(music_instance, 0);
			al_set_sample_instance_speed(music_instance, 1.0);


			//Primitive variables.
			running = 1;
			time_current = 0;
			time_previous = 0;
			time_target = 0;
			hold_right = 0;
			hold_left = 0;
			press_space = 0;
			hold_a = 0;
			hold_d = 0;

			birdx = -44 * 8;
			birdy = 100 * 8;

			birdx_velocity = 0;
			birdy_velocity = 0;

			draw_direction = 1;
			space_previous = 0;

			camera_x = 0.0;


			//text_lives[] = "LIVES LEFT: 4";
			//text_game_over[] = "GAME OVER\n THE GULL HAS BEEN CULLED!";

			game_over_position = 270;

			lives = 4; // How many lives you hav.

			slowness = 0; //If 1, the framerate becomes 15.

			whiteness = 0; //How white is the whitescreen?

			slowness_timer = 0; //Once the timer runs out the slowness effect will stop.

			bird_frame = 0;

			slowanimation = 0;

			victory = 0;

			background_frame = 0;

			inv = 0; //You can't tie during this timer.

			birddam_frame = 0; //This represents what frame to show when the bird is damaged.

			//char text_victory[] = "THE GULL IS FREE";

			death_delay = 10;

			hurtsound = 0; //When we get hurt we play the hurt but this variable will alternate between 0 and 1 and play different sounds depending on this variale.

			//char text_press_enter[] = "PRESS THE ENTER KEY";

			frames_passed = 0;

			//char text_restart[] = "PRESS R TO RESTART";

			alternating_title = 0;

			waitenter = 1;

			enterfade = 0;
			fadedir = 1;

			ease_timer = 130; //During this timer in the start of the game the movement is slightly slower and more forgiving.

			delay_velocity = 0; //

			space_delay = 30;

			//


			/*
			text_lives[] = "LIVES LEFT: 4";
			text_game_over[] = "GAME OVER\n THE GULL HAS BEEN CULLED!";
			*/
			game_over_position = 270;

			lives = 4; // How many lives you hav.
			slowness = 0; //If 1, the framerate becomes 15.

			//whiteness = 255; //How white is the whitescreen?

			slowness_timer = 0; //Once the timer runs out the slowness effect will stop.

			bird_frame = 0;

		}

		//The ease timer. Moves slower in the start of the game with this timer active.

		if (ease_timer > 0) {
			ease_timer -= 1;
		}
		if (ease_timer > 0) {
			if (ease_timer < 90) {
				ease_timer -= 1;
			}
		}

		//printf("%d\n", frames_passed);


		if (al_key_down(&keyboard_state, ALLEGRO_KEY_SPACE) == 0) {
			space_previous = 0;
		}

		//When releasing keys makes the press variable become 0.
		if (al_key_down(&keyboard_state, ALLEGRO_KEY_LEFT) == 0) {
			hold_a = 0;
		}

		if (al_key_down(&keyboard_state, ALLEGRO_KEY_RIGHT) == 0) {
			hold_d = 0;
		}


		//Setting direction of drawing and graphics.
		if (birdx_velocity > 0) {
			draw_direction = 1;
		}
		if (birdx_velocity <= 0) {
			draw_direction = 0;
		}

		//Setting target bitmap.
		al_set_target_bitmap(internal_display);


		//Playing chock sound when beam is activating.
		if (beam_timer == 1) {
			if (beam1->x / 8 < camera_x + 480) {
				if (beam1->x2 / 8 > camera_x) {
					al_play_sample(shock, 0.06, 0.0, 1.0, ALLEGRO_PLAYMODE_ONCE, NULL);
				}
			}
			if (beam2->x / 8 < camera_x + 480) {
				if (beam2->x2 / 8 > camera_x) {
					al_play_sample(shock, 0.06, 0.0, 1.0, ALLEGRO_PLAYMODE_ONCE, NULL);
				}
			}
			if (beam3->x / 8 < camera_x + 480) {
				if (beam3->x2 / 8 > camera_x) {
					al_play_sample(shock, 0.06, 0.0, 1.0, ALLEGRO_PLAYMODE_ONCE, NULL);
				}
			}


		}


		//Drawing the first dangerous beam.
		//Only draw beam when timer is withing a certain range.
		if (beam_timer <= 60) {
			if (background_frame == 0) {

				if (frames_passed % 100 > 0) {
					al_draw_bitmap_region(bitmap_beam, 0, 0, 30, 270, 500 - camera_x, 0, 0);
				}
				else {
					al_draw_bitmap_region(bitmap_beam, 0, 270, 30, 270, 500 - camera_x, 0, 0);
				}

			}

			if (background_frame == 1) {
				if (frames_passed % 100 > 0) {
					al_draw_bitmap_region(bitmap_beam, 0, 270, 30, 270, 500 - camera_x, 0, 0);
				}
				else {
					al_draw_bitmap_region(bitmap_beam, 0, 540, 30, 270, 500 - camera_x, 0, 0);
				}
			}

			if (background_frame == 2) {
				if (frames_passed % 100 > 0) {
					al_draw_bitmap_region(bitmap_beam, 0, 540, 30, 270, 500 - camera_x, 0, 0);
				}
				else {
					al_draw_bitmap_region(bitmap_beam, 0, 0, 30, 270, 500 - camera_x, 0, 0);
				}
			}
		}//Timer check.



		if (beam_timer <= 60) {
			if (background_frame == 0) {

				if (frames_passed % 100 > 0) {
					al_draw_bitmap_region(bitmap_beam, 0, 0, 30, 270, 1590 - camera_x, 0, 0);
				}
				else {
					al_draw_bitmap_region(bitmap_beam, 0, 270, 30, 270, 1590 - camera_x, 0, 0);
				}
			}

			if (background_frame == 1) {
				if (frames_passed % 100 > 0) {
					al_draw_bitmap_region(bitmap_beam, 0, 270, 30, 270, 1590 - camera_x, 0, 0);
				}
				else {
					al_draw_bitmap_region(bitmap_beam, 0, 540, 30, 270, 1590 - camera_x, 0, 0);
				}
			}

			if (background_frame == 2) {
				if (frames_passed % 100 > 0) {
					al_draw_bitmap_region(bitmap_beam, 0, 540, 30, 270, 1590 - camera_x, 0, 0);
				}
				else {
					al_draw_bitmap_region(bitmap_beam, 0, 0, 30, 270, 1590 - camera_x, 0, 0);
				}
			}
		}//Timer check.




		if (beam_timer <= 60) {
			if (background_frame == 0) {

				if (frames_passed % 100 > 0) {
					al_draw_bitmap_region(bitmap_beam, 0, 0, 30, 270, 1720 - camera_x, 0, 0);
				}
				else {
					al_draw_bitmap_region(bitmap_beam, 0, 270, 30, 270, 1720 - camera_x, 0, 0);
				}
			}

			if (background_frame == 1) {
				if (frames_passed % 100 > 0) {
					al_draw_bitmap_region(bitmap_beam, 0, 270, 30, 270, 1720 - camera_x, 0, 0);
				}
				else {
					al_draw_bitmap_region(bitmap_beam, 0, 540, 30, 270, 1720 - camera_x, 0, 0);
				}
			}

			if (background_frame == 2) {
				if (frames_passed % 100 > 0) {
					al_draw_bitmap_region(bitmap_beam, 0, 540, 30, 270, 1720 - camera_x, 0, 0);
				}
				else {
					al_draw_bitmap_region(bitmap_beam, 0, 0, 30, 270, 1720 - camera_x, 0, 0);
				}
			}
		}//Timer check.



		//Beam timer. Beam off. Beam on.
		beam_timer += 1;
		if (beam_timer > 110) {
			beam_timer = 0;
		}

		//Devtest.
		/*
		al_draw_rectangle(beam1->x/8 - camera_x, beam1->y, beam1->x2/8 - camera_x, beam1->y2/8, al_map_rgb(255, 0, 255), 0);
		al_draw_rectangle(beam2->x/8 - camera_x, beam3->y, beam2->x2/8 - camera_x, beam2->y2/8, al_map_rgb(255, 0, 255), 0);
		al_draw_rectangle(beam3->x/8 - camera_x, beam3->y, beam3->x2/8 - camera_x, beam3->y2/8, al_map_rgb(255, 0, 255), 0);
		*/


		//Drawing door1 at the end of level.
		al_draw_bitmap(bitmap_door1, 480 * 5 - camera_x, 0, 0);


		//Drawing bird animation.
		if (slowness_timer == 0) {
			if (lives == 4) {
				if (birdx_velocity < 0) {
					switch (bird_frame) {

					case 0:
						al_draw_bitmap_region(bitmap_bird4, 0, 2, 46, 24, birdx / 8 - camera_x, birdy / 8 - 10, 0);
						break;

					case 1:
						al_draw_bitmap_region(bitmap_bird4, 0, 46, 46, 22, birdx / 8 - camera_x, birdy / 8 - 8, 0);
						break;

					case 2:
						al_draw_bitmap_region(bitmap_bird4, 0, 88, 46, 22, birdx / 8 - camera_x, birdy / 8 - 7, 0);
						break;

					case 3:
						al_draw_bitmap_region(bitmap_bird4, 0, 138, 46, 23, birdx / 8 - camera_x, birdy / 8, 0);
						break;

					case 4:
						al_draw_bitmap_region(bitmap_bird4, 0, 179, 46, 21, birdx / 8 - camera_x, birdy / 8, 0);
						break;

					case 5:
						al_draw_bitmap_region(bitmap_bird4, 0, 221, 46, 19, birdx / 8 - camera_x, birdy / 8, 0);
						break;
					}
				}


				if (birdx_velocity >= 0) {
					switch (bird_frame) {

					case 0:
						al_draw_bitmap_region(bitmap_bird4, 0, 2, 46, 24, birdx / 8 - camera_x, birdy / 8 - 10, ALLEGRO_FLIP_HORIZONTAL);
						break;

					case 1:
						al_draw_bitmap_region(bitmap_bird4, 0, 46, 46, 22, birdx / 8 - camera_x, birdy / 8 - 8, ALLEGRO_FLIP_HORIZONTAL);
						break;

					case 2:
						al_draw_bitmap_region(bitmap_bird4, 0, 88, 46, 22, birdx / 8 - camera_x, birdy / 8 - 7, ALLEGRO_FLIP_HORIZONTAL);
						break;

					case 3:
						al_draw_bitmap_region(bitmap_bird4, 0, 138, 46, 23, birdx / 8 - camera_x, birdy / 8, ALLEGRO_FLIP_HORIZONTAL);
						break;

					case 4:
						al_draw_bitmap_region(bitmap_bird4, 0, 179, 46, 21, birdx / 8 - camera_x, birdy / 8, ALLEGRO_FLIP_HORIZONTAL);
						break;

					case 5:
						al_draw_bitmap_region(bitmap_bird4, 0, 221, 46, 19, birdx / 8 - camera_x, birdy / 8, ALLEGRO_FLIP_HORIZONTAL);
						break;
					}
				}
			} //4 lives.


			if (lives == 3) {
				if (birdx_velocity >= 0) {
					switch (bird_frame) {

					case 0:
						al_draw_bitmap_region(bitmap_bird3, 0, 11, 46, 25, birdx / 8 - camera_x, birdy / 8, ALLEGRO_FLIP_HORIZONTAL);
						break;

					case 1:
						al_draw_bitmap_region(bitmap_bird3, 0, 54, 46, 21, birdx / 8 - camera_x, birdy / 8, ALLEGRO_FLIP_HORIZONTAL);
						break;

					case 2:
						al_draw_bitmap_region(bitmap_bird3, 0, 95, 46, 21, birdx / 8 - camera_x, birdy / 8, ALLEGRO_FLIP_HORIZONTAL);
						break;

					case 3:
						al_draw_bitmap_region(bitmap_bird3, 0, 128, 46, 22, birdx / 8 - camera_x, birdy / 8 - 9, ALLEGRO_FLIP_HORIZONTAL);
						break;

					case 4:
						al_draw_bitmap_region(bitmap_bird3, 0, 171, 46, 21, birdx / 8 - camera_x, birdy / 8 - 8, ALLEGRO_FLIP_HORIZONTAL);
						break;

					case 5:
						al_draw_bitmap_region(bitmap_bird3, 0, 214, 46, 20, birdx / 8 - camera_x, birdy / 8 - 7, ALLEGRO_FLIP_HORIZONTAL);
						break;
					}
				}


				if (birdx_velocity < 0) {
					switch (bird_frame) {

					case 0:
						al_draw_bitmap_region(bitmap_bird3, 0, 11, 46, 25, birdx / 8 - camera_x, birdy / 8, 0);
						break;

					case 1:
						al_draw_bitmap_region(bitmap_bird3, 0, 54, 46, 21, birdx / 8 - camera_x, birdy / 8, 0);
						break;

					case 2:
						al_draw_bitmap_region(bitmap_bird3, 0, 95, 46, 21, birdx / 8 - camera_x, birdy / 8, 0);
						break;

					case 3:
						al_draw_bitmap_region(bitmap_bird3, 0, 128, 46, 22, birdx / 8 - camera_x, birdy / 8 - 9, 0);
						break;

					case 4:
						al_draw_bitmap_region(bitmap_bird3, 0, 171, 46, 21, birdx / 8 - camera_x, birdy / 8 - 8, 0);
						break;

					case 5:
						al_draw_bitmap_region(bitmap_bird3, 0, 214, 46, 20, birdx / 8 - camera_x, birdy / 8 - 7, 0);
						break;
					}
				}


			} //3 lives.


			if (lives == 2) {
				if (birdx_velocity >= 0) {
					switch (bird_frame) {

					case 0:
						al_draw_bitmap_region(bitmap_bird2, 0, 1, 46, 23, birdx / 8 - camera_x, birdy / 8 - 10, ALLEGRO_FLIP_HORIZONTAL);
						break;

					case 1:
						al_draw_bitmap_region(bitmap_bird2, 0, 44, 46, 22, birdx / 8 - camera_x, birdy / 8 - 9, ALLEGRO_FLIP_HORIZONTAL);
						break;

					case 2:
						al_draw_bitmap_region(bitmap_bird2, 0, 88, 46, 20, birdx / 8 - camera_x, birdy / 8 - 7, ALLEGRO_FLIP_HORIZONTAL);
						break;

					case 3:
						al_draw_bitmap_region(bitmap_bird2, 0, 137, 46, 25, birdx / 8 - camera_x, birdy / 8, ALLEGRO_FLIP_HORIZONTAL);
						break;

					case 4:
						al_draw_bitmap_region(bitmap_bird2, 0, 180, 46, 21, birdx / 8 - camera_x, birdy / 8, ALLEGRO_FLIP_HORIZONTAL);
						break;

					case 5:
						al_draw_bitmap_region(bitmap_bird2, 0, 221, 46, 20, birdx / 8 - camera_x, birdy / 8, ALLEGRO_FLIP_HORIZONTAL);
						break;
					}
				}


				if (birdx_velocity < 0) {
					switch (bird_frame) {

					case 0:
						al_draw_bitmap_region(bitmap_bird2, 0, 1, 46, 23, birdx / 8 - camera_x, birdy / 8 - 10, 0);
						break;

					case 1:
						al_draw_bitmap_region(bitmap_bird2, 0, 44, 46, 22, birdx / 8 - camera_x, birdy / 8 - 9, 0);
						break;

					case 2:
						al_draw_bitmap_region(bitmap_bird2, 0, 88, 46, 20, birdx / 8 - camera_x, birdy / 8 - 7, 0);
						break;

					case 3:
						al_draw_bitmap_region(bitmap_bird2, 0, 137, 46, 25, birdx / 8 - camera_x, birdy / 8, 0);
						break;

					case 4:
						al_draw_bitmap_region(bitmap_bird2, 0, 180, 46, 21, birdx / 8 - camera_x, birdy / 8, 0);
						break;

					case 5:
						al_draw_bitmap_region(bitmap_bird2, 0, 221, 46, 20, birdx / 8 - camera_x, birdy / 8, 0);
						break;
					}
				}


			} //1 lives.



			if (lives == 1) {
				if (birdx_velocity >= 0) {
					switch (bird_frame) {

					case 0:
						al_draw_bitmap_region(bitmap_bird1, 0, 1, 46, 28, birdx / 8 - camera_x, birdy / 8 - 10, ALLEGRO_FLIP_HORIZONTAL);
						break;

					case 1:
						al_draw_bitmap_region(bitmap_bird1, 0, 45, 46, 24, birdx / 8 - camera_x, birdy / 8 - 9, ALLEGRO_FLIP_HORIZONTAL);
						break;

					case 2:
						al_draw_bitmap_region(bitmap_bird1, 0, 89, 46, 22, birdx / 8 - camera_x, birdy / 8 - 6, ALLEGRO_FLIP_HORIZONTAL);
						break;

					case 3:
						al_draw_bitmap_region(bitmap_bird1, 0, 137, 46, 25, birdx / 8 - camera_x, birdy / 8, ALLEGRO_FLIP_HORIZONTAL);
						break;

					case 4:
						al_draw_bitmap_region(bitmap_bird1, 0, 180, 46, 20, birdx / 8 - camera_x, birdy / 8, ALLEGRO_FLIP_HORIZONTAL);
						break;

					case 5:
						al_draw_bitmap_region(bitmap_bird1, 0, 221, 46, 19, birdx / 8 - camera_x, birdy / 8, ALLEGRO_FLIP_HORIZONTAL);
						break;
					}
				}


				if (birdx_velocity < 0) {
					switch (bird_frame) {

					case 0:
						al_draw_bitmap_region(bitmap_bird1, 0, 1, 46, 28, birdx / 8 - camera_x, birdy / 8 - 10, 0);
						break;

					case 1:
						al_draw_bitmap_region(bitmap_bird1, 0, 45, 46, 24, birdx / 8 - camera_x, birdy / 8 - 9, 0);
						break;

					case 2:
						al_draw_bitmap_region(bitmap_bird1, 0, 89, 46, 22, birdx / 8 - camera_x, birdy / 8 - 6, 0);
						break;

					case 3:
						al_draw_bitmap_region(bitmap_bird1, 0, 137, 46, 25, birdx / 8 - camera_x, birdy / 8, 0);
						break;

					case 4:
						al_draw_bitmap_region(bitmap_bird1, 0, 180, 46, 20, birdx / 8 - camera_x, birdy / 8, 0);
						break;

					case 5:
						al_draw_bitmap_region(bitmap_bird1, 0, 221, 46, 19, birdx / 8 - camera_x, birdy / 8, 0);
						break;
					}
				}

			} //1 lives.
		} //Is slowness active?


		//Drawing the second part of the door.
		al_draw_bitmap(bitmap_door2, 480 * 5 - camera_x + 323, 0, 0);


		//You become invincible for a while.
		if (inv > 0) {
			inv -= 1;
		}


		//Decreasing whitescreen intensity.
		if (lives > 0) {
			whiteness -= 32;
		}
		else {
			whiteness -= 4;
		}



		//Clamping whitene ss so it does not go below 0.
		if (whiteness < 0) {
			whiteness = 0;
		}

		//Clamping hitbox position so it does not go negative. Only after the first intro has happened.
		if (birdx < 0) {
			if (ease_timer < 90) {
				birdx = 0;
			}
		}
		if (birdy < 0) {
			birdy = 0;
		}

		//Updating bird hitbox.
		bird_box->x = birdx + (7 * 8);
		bird_box->y = birdy + (4 * 8);
		bird_box->x2 = birdx + 39 * 8;
		bird_box->y2 = birdy + 12 * 8;

		//Bird animation. Bird frames.
		if (slowanimation < 4) {
			slowanimation += 1;
		}
		else {
			slowanimation = 0;
			bird_frame += 1;
			if (bird_frame > 5) {
				bird_frame = 0;
			}
		}


		//printf("%d\n", frames_passed%100);

		//Updating live counter so it showes the correct value.
		sprintf_s(text_lives, "%d", lives);


		//If we collide with the top line the upwards velocity stops.
		if (line_collide_box(top_line, bird_box) == 1) {
			birdy += 2;
			birdy_velocity = 0;
		}

		//Collision between bird and top and bottom edges of the screen causes damage to be taken.
		//If you touch the bottom or the top of the screen you get hurt and die.
		if (lives > 0 && inv == 0) {
			if (line_collide_box(top_line, bird_box) == 1) {
				birdy -= birdy_velocity;
				birdy_velocity = 32;
				whiteness = 255;
				slowness = 1;
				slowness_timer = 10;
				lives -= 1;

				//If we die we set a longer slowness timer.
				if (lives == 0) {
					slowness_timer = 60;
					birdy_velocity = -48;
					al_set_sample_instance_speed(music_instance, 0.9);
					al_set_sample_instance_gain(music_instance, 1.2);
					al_play_sample(hurt3, 2.0, 0.0, 0.8, ALLEGRO_PLAYMODE_ONCE, NULL);
				}

				if (hurtsound > 3) {
					hurtsound = 0;
				}
				hurtsound += 1;

				if (hurtsound == 0) {
					al_play_sample(hurt1, 1.0, 0.0, 1.0, ALLEGRO_PLAYMODE_ONCE, NULL);
				}
				if (hurtsound == 1) {
					if (lives > 0) {
						al_play_sample(hurt2, 1.0, 0.0, 1.0, ALLEGRO_PLAYMODE_ONCE, NULL);
					}
				}
				if (hurtsound == 2) {
					if (lives > 0) {
						al_play_sample(hurt3, 1.3, 0.0, 1.0, ALLEGRO_PLAYMODE_ONCE, NULL);
					}
				}
				if (hurtsound == 3) {
					if (lives > 0) {
						al_play_sample(hurt4, 1.2, 0.0, 1.0, ALLEGRO_PLAYMODE_ONCE, NULL);
					}
				}

				inv = 20;
			}
			if (line_collide_box(bottom_line, bird_box) == 1) {
				birdy -= birdy_velocity;
				birdy_velocity = -32;
				whiteness = 255;
				slowness = 1;
				slowness_timer = 10;
				lives -= 1;

				//If we die we set a longer slowness timer.
				if (lives == 0) {
					slowness_timer = 60;
					birdy_velocity = -48;
					al_set_sample_instance_speed(music_instance, 0.9);
					al_set_sample_instance_gain(music_instance, 1.2);
					al_play_sample(hurt3, 2.0, 0.0, 0.8, ALLEGRO_PLAYMODE_ONCE, NULL);
				}

				if (hurtsound > 3) {
					hurtsound = 0;
				}
				hurtsound += 1;

				if (hurtsound == 0) {
					al_play_sample(hurt1, 1.0, 0.0, 1.0, ALLEGRO_PLAYMODE_ONCE, NULL);
				}
				if (hurtsound == 1) {
					if (lives > 0) {
						al_play_sample(hurt2, 1.0, 0.0, 1.0, ALLEGRO_PLAYMODE_ONCE, NULL);
					}
				}
				if (hurtsound == 2) {
					if (lives > 0) {
						al_play_sample(hurt3, 1.3, 0.0, 1.0, ALLEGRO_PLAYMODE_ONCE, NULL);
					}
				}
				if (hurtsound == 3) {
					if (lives > 0) {
						al_play_sample(hurt4, 1.2, 0.0, 1.0, ALLEGRO_PLAYMODE_ONCE, NULL);
					}
				}


				inv = 20;
			}
		}


		//Looping through level hitbox points and checking for collisions with birds.
		if (lives > 0 && inv == 0) {
			f = 0;
			while (f < p) {

				if (point_collide_box(array_points[f], bird_box) == 1) {


					if (birdy_velocity > 0) {
						birdy -= birdy_velocity;
						birdy_velocity = -16;
						goto skipstuff;
					}

					if (birdy_velocity <= 0) {
						birdy -= birdy_velocity;
						birdy_velocity = 16;
					}
				skipstuff:


					if (birdx_velocity > 0) {
						birdx -= birdx_velocity;
						birdx_velocity = 8;
						goto skipstuff2;
					}

					if (birdx_velocity <= 0) {
						birdx -= birdx_velocity;
						birdx_velocity = -8;
					}
				skipstuff2:


					/*
					if (birdy_velocity <= 0) {
					birdy += birdy_velocity;
					birdy_velocity = 32;
					}
					*/


					whiteness = 255;
					slowness = 1;
					slowness_timer = 10;
					lives -= 1;
					inv = 20;

					//If we die we set a longer slowness timer.
					if (lives == 0) {
						slowness_timer = 60;
						birdy_velocity = -48;
						al_set_sample_instance_speed(music_instance, 0.9);
						al_set_sample_instance_gain(music_instance, 1.2);
						al_play_sample(hurt3, 2.0, 0.0, 0.8, ALLEGRO_PLAYMODE_ONCE, NULL);
					}


					if (hurtsound > 3) {
						hurtsound = 0;
					}
					hurtsound += 1;

					if (hurtsound == 0) {
						al_play_sample(hurt1, 1.0, 0.0, 1.0, ALLEGRO_PLAYMODE_ONCE, NULL);
					}
					if (hurtsound == 1) {
						if (lives > 0) {
							al_play_sample(hurt2, 1.0, 0.0, 1.0, ALLEGRO_PLAYMODE_ONCE, NULL);
						}
					}
					if (hurtsound == 2) {
						if (lives > 0) {
							al_play_sample(hurt3, 1.3, 0.0, 1.0, ALLEGRO_PLAYMODE_ONCE, NULL);
						}
					}
					if (hurtsound == 3) {
						if (lives > 0) {
							al_play_sample(hurt4, 1.2, 0.0, 1.0, ALLEGRO_PLAYMODE_ONCE, NULL);
						}
					}

					break;
				}

				f += 1;
			}
		}




		//Colliding with beams.
		if (lives > 0 && inv == 0) {
			if (box_collide_box(bird_box, beam1) == 1) {
				if (beam_timer <= 60) {



					if (birdy_velocity > 0) {
						birdy -= birdy_velocity;
						birdy_velocity = -16;
						goto skipstuff3;
					}

					if (birdy_velocity <= 0) {
						birdy -= birdy_velocity;
						birdy_velocity = 16;
					}
				skipstuff3:


					if (birdx_velocity > 0) {
						birdx -= birdx_velocity;
						birdx_velocity = 8;
						goto skipstuff4;
					}

					if (birdx_velocity <= 0) {
						birdx -= birdx_velocity;
						birdx_velocity = -8;
					}
				skipstuff4:


					/*
					if (birdy_velocity <= 0) {
					birdy += birdy_velocity;
					birdy_velocity = 32;
					}
					*/


					whiteness = 255;
					slowness = 1;
					slowness_timer = 10;
					lives -= 1;
					inv = 20;

					//If we die we set a longer slowness timer.
					if (lives == 0) {
						slowness_timer = 60;
						birdy_velocity = -48;
						al_set_sample_instance_speed(music_instance, 0.9);
						al_set_sample_instance_gain(music_instance, 1.2);
						al_play_sample(hurt3, 2.0, 0.0, 0.8, ALLEGRO_PLAYMODE_ONCE, NULL);
					}


					if (hurtsound > 3) {
						hurtsound = 0;
					}
					hurtsound += 1;

					if (hurtsound == 0) {
						al_play_sample(hurt1, 1.0, 0.0, 1.0, ALLEGRO_PLAYMODE_ONCE, NULL);
					}
					if (hurtsound == 1) {
						if (lives > 0) {
							al_play_sample(hurt2, 1.0, 0.0, 1.0, ALLEGRO_PLAYMODE_ONCE, NULL);
						}
					}
					if (hurtsound == 2) {
						if (lives > 0) {
							al_play_sample(hurt3, 1.3, 0.0, 1.0, ALLEGRO_PLAYMODE_ONCE, NULL);
						}
					}
					if (hurtsound == 3) {
						if (lives > 0) {
							al_play_sample(hurt4, 1.2, 0.0, 1.0, ALLEGRO_PLAYMODE_ONCE, NULL);
						}
					}




				}
			}
		}//Checking for invincibility







		//Colliding with beams.
		if (lives > 0 && inv == 0) {
			if (box_collide_box(bird_box, beam2) == 1) {
				if (beam_timer <= 60) {



					if (birdy_velocity > 0) {
						birdy -= birdy_velocity;
						birdy_velocity = -16;
						goto skipstuff5;
					}

					if (birdy_velocity <= 0) {
						birdy -= birdy_velocity;
						birdy_velocity = 16;
					}
				skipstuff5:


					if (birdx_velocity > 0) {
						birdx -= birdx_velocity;
						birdx_velocity = 8;
						goto skipstuff6;
					}

					if (birdx_velocity <= 0) {
						birdx -= birdx_velocity;
						birdx_velocity = -8;
					}
				skipstuff6:


					/*
					if (birdy_velocity <= 0) {
					birdy += birdy_velocity;
					birdy_velocity = 32;
					}
					*/


					whiteness = 255;
					slowness = 1;
					slowness_timer = 10;
					lives -= 1;
					inv = 20;

					//If we die we set a longer slowness timer.
					if (lives == 0) {
						slowness_timer = 60;
						birdy_velocity = -48;
						al_set_sample_instance_speed(music_instance, 0.9);
						al_set_sample_instance_gain(music_instance, 1.2);
						al_play_sample(hurt3, 2.0, 0.0, 0.8, ALLEGRO_PLAYMODE_ONCE, NULL);
					}


					if (hurtsound > 3) {
						hurtsound = 0;
					}
					hurtsound += 1;

					if (hurtsound == 0) {
						al_play_sample(hurt1, 1.0, 0.0, 1.0, ALLEGRO_PLAYMODE_ONCE, NULL);
					}
					if (hurtsound == 1) {
						if (lives > 0) {
							al_play_sample(hurt2, 1.0, 0.0, 1.0, ALLEGRO_PLAYMODE_ONCE, NULL);
						}
					}
					if (hurtsound == 2) {
						if (lives > 0) {
							al_play_sample(hurt3, 1.3, 0.0, 1.0, ALLEGRO_PLAYMODE_ONCE, NULL);
						}
					}
					if (hurtsound == 3) {
						if (lives > 0) {
							al_play_sample(hurt4, 1.2, 0.0, 1.0, ALLEGRO_PLAYMODE_ONCE, NULL);
						}
					}




				}
			}
		}//Checking for invincibility





		//Colliding with beams.
		if (lives > 0 && inv == 0) {
			if (box_collide_box(bird_box, beam3) == 1) {
				if (beam_timer <= 60) {



					if (birdy_velocity > 0) {
						birdy -= birdy_velocity;
						birdy_velocity = -16;
						goto skipstuff7;
					}

					if (birdy_velocity <= 0) {
						birdy -= birdy_velocity;
						birdy_velocity = 16;
					}
				skipstuff7:


					if (birdx_velocity > 0) {
						birdx -= birdx_velocity;
						birdx_velocity = 8;
						goto skipstuff8;
					}

					if (birdx_velocity <= 0) {
						birdx -= birdx_velocity;
						birdx_velocity = -8;
					}
				skipstuff8:


					/*
					if (birdy_velocity <= 0) {
					birdy += birdy_velocity;
					birdy_velocity = 32;
					}
					*/


					whiteness = 255;
					slowness = 1;
					slowness_timer = 10;
					lives -= 1;
					inv = 20;

					//If we die we set a longer slowness timer.
					if (lives == 0) {
						slowness_timer = 60;
						birdy_velocity = -48;
						al_set_sample_instance_speed(music_instance, 0.9);
						al_set_sample_instance_gain(music_instance, 1.2);
						al_play_sample(hurt3, 2.0, 0.0, 0.8, ALLEGRO_PLAYMODE_ONCE, NULL);
					}


					if (hurtsound > 3) {
						hurtsound = 0;
					}
					hurtsound += 1;

					if (hurtsound == 0) {
						al_play_sample(hurt1, 1.0, 0.0, 1.0, ALLEGRO_PLAYMODE_ONCE, NULL);
					}
					if (hurtsound == 1) {
						if (lives > 0) {
							al_play_sample(hurt2, 1.0, 0.0, 1.0, ALLEGRO_PLAYMODE_ONCE, NULL);
						}
					}
					if (hurtsound == 2) {
						if (lives > 0) {
							al_play_sample(hurt3, 1.3, 0.0, 1.0, ALLEGRO_PLAYMODE_ONCE, NULL);
						}
					}
					if (hurtsound == 3) {
						if (lives > 0) {
							al_play_sample(hurt4, 1.2, 0.0, 1.0, ALLEGRO_PLAYMODE_ONCE, NULL);
						}
					}




				}
			}
		}//Checking for invincibility




		//Clamping camera at the end of the level.
		if (camera_x > 480.0 * 5.0 - 2) {
			camera_x = 480.0 * 5.0 - 2;
		}



		//Clamping lives.
		if (lives < 0) {
			lives = 0;
		}

		//Counting down the slowness timer and once it runs out you will be back to normal speed.
		if (slowness_timer > 0) {
			slowness_timer -= 1;
		}
		else {
			slowness = 0;
		}




		//Clamping the position of the game over screen.
		if (game_over_position < 90) {
			game_over_position = 90;
		}

		//Win condition.
		if (birdx / 8 > 480 * 5) {
			victory = 1;
			//lives = 1000000;
		}

		//Clampign movement so we can't go off screen.
		if (lives > 0) {
			if (birdy > (270 * 8) - 30) {
				birdy = (270 * 8) - 30;
				birdy_velocity = -48;
			}
		}

		//birdx += 50;

		//When you win the gull flies off the screen.
		if (victory == 1) {

			birdy_velocity = 0;

			if (birdy / 8 > 135) {
				birdy -= 2;
			}

			if (birdy / 8 < 135) {
				birdy += 2;
			}

			birdx_velocity = 16;

		}


		//Drawing win screen once you have won.
		//Making sure you can't die no more.
		if (birdx > 480 * 6 * 8 == 1) {
			//draw_text(text_victory, 85, 100, 255, 255, 0);

		}




		//Drawing whitescreen. 
		al_set_target_bitmap(internal_display);
		al_draw_tinted_bitmap(bitmap_whitescreen, al_map_rgba(whiteness, 0, 0, whiteness), 0, 0, 0);



		//If the player has died. draw game over bitmap. Also set the velocity so we are falling off the screen.
		if (lives < 1) {
			game_over_position -= 8;
			al_set_target_bitmap(internal_display);
			al_draw_bitmap(bitmap_game_over, 100, game_over_position, 0);
			draw_text(text_restart, 170, game_over_position + 40, 255, 0, 0, bitmap_font, internal_display);


			birdy_velocity += 2;


		}

		//
		if (birdx_velocity >= 0) {
			if (lives == 4) {

				if (slowness_timer > 0) {


					if (slowness_timer >= 7 && slowness_timer <= 9) {
						al_draw_bitmap_region(bitmap_birddam1, 0, 5, 42, 29, birdx / 8 - camera_x, birdy / 8 - 4, 0);
					}

					if (slowness_timer >= 4 && slowness_timer <= 6) {
						al_draw_bitmap_region(bitmap_birddam1, 0, 42, 42, 42, birdx / 8 - camera_x, birdy / 8 - 6 - 4, 0);
					}

					if (slowness_timer >= 1 && slowness_timer <= 3) {
						al_draw_bitmap_region(bitmap_birddam1, 0, 85, 42, 41, birdx / 8 - camera_x, birdy / 8 - 5 - 4, 0);
					}


				}

			} //4 lives.

			//
			//
			if (lives == 3) {
				if (slowness_timer > 0) {


					if (slowness_timer >= 7 && slowness_timer <= 9) {
						al_draw_bitmap_region(bitmap_birddam1, 0, 5, 42, 29, birdx / 8 - camera_x, birdy / 8 - 4, 0);
					}

					if (slowness_timer >= 4 && slowness_timer <= 6) {
						al_draw_bitmap_region(bitmap_birddam1, 0, 42, 42, 42, birdx / 8 - camera_x, birdy / 8 - 6 - 4, 0);
					}

					if (slowness_timer >= 1 && slowness_timer <= 3) {
						al_draw_bitmap_region(bitmap_birddam1, 0, 85, 42, 41, birdx / 8 - camera_x, birdy / 8 - 5 - 4, 0);
					}


				}

			} //3 Lives.


			if (lives == 2 || lives == 1) {
				if (slowness_timer > 0) {


					if (slowness_timer >= 7 && slowness_timer <= 9) {
						al_draw_bitmap_region(bitmap_birddam1, 0, 5, 42, 29, birdx / 8 - camera_x, birdy / 8 - 4, 0);
					}

					if (slowness_timer >= 4 && slowness_timer <= 6) {
						al_draw_bitmap_region(bitmap_birddam1, 0, 42, 42, 42, birdx / 8 - camera_x, birdy / 8 - 6 - 4, 0);
					}

					if (slowness_timer >= 1 && slowness_timer <= 3) {
						al_draw_bitmap_region(bitmap_birddam1, 0, 85, 42, 41, birdx / 8 - camera_x, birdy / 8 - 5 - 4, 0);
					}


				}

			} //3 Lives.

		} //Facing right.




		//
		if (birdx_velocity < 0) {
			if (lives == 4) {

				if (slowness_timer > 0) {

					if (slowness_timer >= 7 && slowness_timer <= 9) {
						al_draw_bitmap_region(bitmap_birddam1, 0, 5, 42, 29, birdx / 8 - camera_x, birdy / 8 - 4, ALLEGRO_FLIP_HORIZONTAL);
					}

					if (slowness_timer >= 4 && slowness_timer <= 6) {
						al_draw_bitmap_region(bitmap_birddam1, 0, 42, 42, 42, birdx / 8 - camera_x, birdy / 8 - 6 - 4, ALLEGRO_FLIP_HORIZONTAL);
					}

					if (slowness_timer >= 1 && slowness_timer <= 3) {
						al_draw_bitmap_region(bitmap_birddam1, 0, 85, 42, 41, birdx / 8 - camera_x, birdy / 8 - 5 - 4, ALLEGRO_FLIP_HORIZONTAL);
					}


				}

			} //4 lives.

			//
			//
			if (lives == 3) {
				if (slowness_timer > 0) {


					if (slowness_timer >= 7 && slowness_timer <= 9) {
						al_draw_bitmap_region(bitmap_birddam1, 0, 5, 42, 29, birdx / 8 - camera_x, birdy / 8 - 4, ALLEGRO_FLIP_HORIZONTAL);
					}

					if (slowness_timer >= 4 && slowness_timer <= 6) {
						al_draw_bitmap_region(bitmap_birddam1, 0, 42, 42, 42, birdx / 8 - camera_x, birdy / 8 - 6 - 4, ALLEGRO_FLIP_HORIZONTAL);
					}

					if (slowness_timer >= 1 && slowness_timer <= 3) {
						al_draw_bitmap_region(bitmap_birddam1, 0, 85, 42, 41, birdx / 8 - camera_x, birdy / 8 - 5 - 4, ALLEGRO_FLIP_HORIZONTAL);
					}


				}

			} //3 Lives.


			if (lives == 2 || lives == 1) {
				if (slowness_timer > 0) {


					if (slowness_timer >= 7 && slowness_timer <= 9) {
						al_draw_bitmap_region(bitmap_birddam1, 0, 5, 42, 29, birdx / 8 - camera_x, birdy / 8 - 4, ALLEGRO_FLIP_HORIZONTAL);
					}

					if (slowness_timer >= 4 && slowness_timer <= 6) {
						al_draw_bitmap_region(bitmap_birddam1, 0, 42, 42, 42, birdx / 8 - camera_x, birdy / 8 - 6 - 4, ALLEGRO_FLIP_HORIZONTAL);
					}

					if (slowness_timer >= 1 && slowness_timer <= 3) {
						al_draw_bitmap_region(bitmap_birddam1, 0, 85, 42, 41, birdx / 8 - camera_x, birdy / 8 - 5 - 4, ALLEGRO_FLIP_HORIZONTAL);
					}


				}

			} //3 Lives.

		} //Facing left.




		//If dead show upside down image.
		if (lives == 0) {

			if (slowness_timer >= 50 && slowness_timer <= 60) {
				al_draw_bitmap_region(bitmap_dead1, 0, 0, 42, 40, birdx / 8 - camera_x, birdy / 8 - 4, ALLEGRO_FLIP_HORIZONTAL);
			}

			if (slowness_timer <= 49) {
				al_draw_bitmap_region(bitmap_dead1, 0, 41, 42, 43, birdx / 8 - camera_x, birdy / 8 - 4, ALLEGRO_FLIP_HORIZONTAL);
			}

		}



		//Drawing healthbar.
		al_draw_bitmap(bitmap_healthbar, 0, 0, 0);
		al_draw_bitmap(bitmap_icon, 3, 3, ALLEGRO_FLIP_HORIZONTAL);
		//draw_text(text_lives, 15+10, 5, 255, 255, 255);

		//Drawing chicken wings that represent your healthbar on healthbar.
		if (lives == 4) {
			al_draw_bitmap(bitmap_wing, 20 + 4, 3, 0);
			al_draw_bitmap(bitmap_wing, 20 + 16 + 4, 3, 0);
			al_draw_bitmap(bitmap_wing, 20 + 16 + 16 + 4, 3, 0);
			al_draw_bitmap(bitmap_wing, 20 + 16 + 16 + 16 + 4, 3, 0);
		}

		if (lives == 3) {
			al_draw_bitmap(bitmap_wing, 20 + 4, 3, 0);
			al_draw_bitmap(bitmap_wing, 20 + 16 + 4, 3, 0);
			al_draw_bitmap(bitmap_wing, 20 + 16 + 16 + 4, 3, 0);
		}

		if (lives == 2) {
			al_draw_bitmap(bitmap_wing, 20 + 4, 3, 0);
			al_draw_bitmap(bitmap_wing, 20 + 16 + 4, 3, 0);
		}

		if (lives == 1) {
			al_draw_bitmap(bitmap_wing, 20 + 4, 3, 0);
		}



		//In the beginnign of the game we want to automatically move the bird onto the screen.
		if (ease_timer >= 90) {
			birdx += 8;
		}


		//Moving bird on x axis.
		birdx += birdx_velocity;

		if (lives > 0) {
			if (ease_timer < 90) {
				if (hold_a == 1) {
					birdx_velocity -= 3;
				}
				if (hold_d == 1) {
					birdx_velocity += 3;
				}
			}
		}

		//Clamping birdx movement.
		if (birdx_velocity > 16) {
			birdx_velocity = 16;
		}
		if (birdx_velocity < -16) {
			birdx_velocity = -16;
		}

		//If we are not pressing any left or right keys the bird will stop.
		if (hold_a == 0 && hold_d == 0) {
			birdx_velocity = birdx_velocity * 0.95;
		}

		//When pressing space the movement starts moving up.
		if (lives > 0) {
			if (press_space == 1) {

				if (ease_timer < 90) {
					birdy_velocity -= 14;
				}

				if (ease_timer < 60) {
					birdy_velocity -= 14;
				}

				if (ease_timer < 30) {
					birdy_velocity -= 14;
				}

			}
		}

		//Clamping birdy velocity.
		if (birdy_velocity < -42) {
			birdy_velocity = -42;
		}

		//Bird y movement.
		birdy += birdy_velocity;


		//Increasing velocity every frame and clamping it to a max value.
		if (ease_timer == 0) {
			birdy_velocity += 1;
		}


		if (ease_timer >= 0 && ease_timer <= 29) { //This code makes the bird fall at a slower rate at the start of the game to make it a little easier.
			delay_velocity += 1;
			if (delay_velocity > 1) {
				birdy_velocity += 1;
				delay_velocity = 0;
			}

		}

		if (ease_timer >= 25 && ease_timer <= 59) {
			delay_velocity += 1;
			if (delay_velocity > 2) {
				birdy_velocity += 1;
				delay_velocity = 0;
			}

		}

		if (ease_timer >= 60 && ease_timer <= 90) {
			delay_velocity += 1;
			if (delay_velocity > 3) {
				birdy_velocity += 1;
				delay_velocity = 0;
			}

		}


		if (birdy_velocity > 42) {
			birdy_velocity = 42;
		}


		//Devtest. Drawing hitbox.
		//al_draw_rectangle(bird_box->x/8-camera_x,bird_box->y/8, bird_box->x2/8-camera_x, bird_box->y2/8, al_map_rgb(255, 0, 255), 0);
		//al_draw_line(top_line->x/8, top_line->y/8, top_line->x2/2, top_line->y2/8, al_map_rgb(255, 0, 255), 0);

		//Drawing end screen and whitescreen before it
		if (birdx > 480 * 6 * 8 == 1) {

			white += 2;

			if (white > 255) {
				white = 255;
			}

			if (music_gain < 0) {
				music_gain = 0;
			}

			if (white > 50) {
				music_gain -= 0.015;
				al_set_sample_instance_gain(music_instance, music_gain);
			}


			//Play win sound when you transition into the final screen.
			if (white == 244) {
				al_play_sample(win, 1.0, 0.0, 0.85, ALLEGRO_PLAYMODE_ONCE, NULL); //
			}


			al_draw_tinted_bitmap(bitmap_white, al_map_rgba(white, white, white, white), 0, 0, 0);

			if (white == 255) {
				white2 += 15;
				if (white2 > 255) {
					white2 = 255;
				}
				al_draw_tinted_bitmap(bitmap_end, al_map_rgba(white2, white2, white2, white2), 0, 0, 0);
			}


		}



		//Drawing the internal display to the external one.
		al_set_target_bitmap(al_get_backbuffer(external_display));

		al_draw_scaled_bitmap(internal_display, 0, 0, 480, 270, 0, 0, al_get_display_width(external_display), al_get_display_height(external_display), 0);


		//Flipping the backbuffer.
		al_flip_display();

		//Incrementing frame counter.
		frames_passed += 1;


		//Limiting the framerate to 60.
		while (clock() < time_target) {

		}

	}


	//When quitting the game do cleanup.
	al_uninstall_system();


	return 0;
} //End of main function. 