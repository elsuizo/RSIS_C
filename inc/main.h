/* -------------------------------------------------------------------------
@file main.h

@date 03/14/17 13:30:30
@author Martin Noblia
@email martin.noblia@openmailbox.org

@brief

@detail

Licence:
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or (at
your option) any later version.

This program is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
General Public License for more details.

You should have received a copy of the GNU General Public License
---------------------------------------------------------------------------*/
#ifndef _MAIN_H_
#define _MAIN_H_
/*-------------------------------------------------------------------------
                              includes
-------------------------------------------------------------------------*/
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <stdio.h>
#include <stdlib.h>
/*-------------------------------------------------------------------------
                              functions
-------------------------------------------------------------------------*/
sfRenderWindow* init_window(int win_width, int win_height, char* win_title);
#endif


