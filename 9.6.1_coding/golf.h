#pragma once


const int len = 40;
struct golf
{
	char fullname[40];
	int handicap;
};
void SetGolf(golf &g, const char* name, int hc);
int Setgolf(golf &g);
void handicap(golf &g,int hc);
void ShowGolf(const golf &g);