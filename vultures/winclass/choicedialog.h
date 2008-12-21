/* Copyright (c) Daniel Thaler, 2008                              */
/* NetHack may be freely redistributed.  See license for details. */

#ifndef _choicedialog_h_
#define _choicedialog_h_

#include "menuwin.h"

class button;

class choicedialog : public mainwin
{
public:
	choicedialog(window *p, string question, const char *choices, char defchoice);
	virtual bool draw();
	virtual eventresult event_handler(window* target, void* result, SDL_Event* event);

private:
	char defchoice;
	button *defbutton;
};


#endif
