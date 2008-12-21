/* Copyright (c) Daniel Thaler, 2008                              */
/* NetHack may be freely redistributed.  See license for details. */

#ifndef _enhancebutton_h_
#define _enhancebutton_h_

#include <SDL.h>
#include "window.h"

#define V_FILENAME_ENHANCE              "enhance"


class enhancebutton : public window
{
public:
	enhancebutton(window *p);
	virtual ~enhancebutton();
	virtual bool draw();
	virtual eventresult event_handler(window* target, void* result, SDL_Event* event);
	void check_enhance(void);

private:
	SDL_Surface *image;
};

extern enhancebutton *enhancebtn;

#endif
