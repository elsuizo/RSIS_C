/* -------------------------------------------------------------------------
@file main.c

@date 03/04/17 19:56:14
@author Martin Noblia
@email martin.noblia@openmailbox.org

@brief
test for compile CSFML proyects
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
#include "../inc/main.h"

int main(void)
{
   sfRenderWindow* window;
   window = init_window(640, 480, "Rosette");
   if(!window) {
      printf("Unable to create RenderWindow\n");
      exit(EXIT_FAILURE);
   }

   sfEvent event;
   /* main loop  */
   while (sfRenderWindow_isOpen(window)) {
      /* process events */
      while (sfRenderWindow_pollEvent(window, &event)) {
         switch (event.type) {
            case(sfEvtKeyPressed):
            case(sfEvtKeyReleased):
               {
                  printf("Key pressed!!!\n");
                  break;
               }
            case(sfEvtClosed):
               sfRenderWindow_close(window);
               break;
            default:
               break;
         }
      }
      sfRenderWindow_clear(window, sfRed);
      sfRenderWindow_display(window);
   }
   /* clean up */
   sfRenderWindow_destroy(window);
   return EXIT_SUCCESS;
}


sfRenderWindow* init_window(int win_width, int win_height, char* win_title) {
   sfRenderWindow* win;
   sfVideoMode mode = {win_width, win_height, 32};
   win = sfRenderWindow_create(mode, win_title, sfClose|sfResize, NULL);
   return win;
}
