#ifndef LOGIC_H
#define LOGIC_H

#include "general.h"
#include "Map/init.h"
#include "Map/user_map.h"
#include "DPlaya.h"

void fork_off(int tcpSockFd, int udpSockFd, DPlaya allPlayers[], user_map &map, SDL_Surface *screen);
void sig_handler (int sig);
void handle_input(int tcpSockFd, int udpSockFd, SDL_Event event);
void convertMap(unsigned char inMap[15][15], unsigned char outMap[17][17]);
#endif
