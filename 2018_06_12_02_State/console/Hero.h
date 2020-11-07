#pragma once

struct stHero
{
	int x, y;
	char body;
	int speed;
	int attack;
	int hp;

	DWORD fColor; //from Color
	DWORD bColor; //background Color
};

void Hero_Init();
void Hero_Update();//값처리
void Hero_Draw();//순순그려주기
void Hero_cliping();
