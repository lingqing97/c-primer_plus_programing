#pragma once
#ifndef GOLF
#define GOLF
const int Len = 40;
struct golf
{
	char fullname[Len];
	int handicap;
};
void setgolf(golf& g, char name[], int handicap);
int setgolf(golf& g);
void showgolf(const golf& g);
#endif