#include "intro.h"

// Constructor
intro::intro(){
  // Sets Starting Images
  img_title = load_png( "images/title.png", NULL);
  img_intro = load_png( "images/intro.png", NULL);
}

// Destructor
intro::~intro(){
  // Clean up images
  destroy_bitmap( img_intro);
  destroy_bitmap( img_title);
}

// Draw to screen
void intro::draw(){
  // A.D.S. Games Splash
  highcolor_fade_in( img_intro, 8);
  rest( 1000);
  highcolor_fade_out( 8);

  // Minesweeper Splash
  highcolor_fade_in( img_title, 8);
  readkey();
  highcolor_fade_out( 8);

  set_next_state( STATE_MENU);
}
