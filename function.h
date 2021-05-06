#ifndef _FUNCTION_H
#define _FUNCTION_H

#include <SDL.h>
#include <stdio.h>
#include <stdbool.h>

#define CELL_SIZE 20
#define SCREEN_WIDTH (WIDTH * CELL_SIZE)
#define SCREEN_HEIGHT (HEIGHT * CELL_SIZE)


int WIDTH;
int HEIGHT;
int buffer1[8000][8000];
void load_file();
SDL_Window *createWindow(char *title);
SDL_Renderer *createRenderer(SDL_Window *window);
void drawGrid(SDL_Renderer *r, int cells[][WIDTH]);
void update(int cells[][WIDTH]);
int count(int cells[][WIDTH], int x, int y);
void save_file();

#endif
