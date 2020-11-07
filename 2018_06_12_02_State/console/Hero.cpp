#include "Include.h"

void Hero_Init()
{
	g_Hero.x = 0;
	g_Hero.y = 0;
	g_Hero.attack = 1;
	g_Hero.hp = 5;
	g_Hero.fColor = WHITE;
	g_Hero.bColor = BLACK;
	g_Hero.body = 'H';
	g_Hero.speed = 1;

}

void Hero_Update()
{
	// > IsKey : 매크로 함수
		if (IsKey(VK_LEFT))
		{
			g_Hero.x -= g_Hero.speed;
		}

		if (IsKey(VK_RIGHT))
		{
			g_Hero.x += g_Hero.speed;
		}

		if (IsKey(VK_UP))
		{
			g_Hero.y -= g_Hero.speed;
		}

		if (IsKey(VK_DOWN))
		{
			g_Hero.y += g_Hero.speed;
		}
}

	void Hero_cliping()
	{
		if (g_Hero.x >= 120 && g_Hero.x < 0 && g_Hero.y < 0 && g_Hero.y >= 30)
		{
			if (g_Hero.x >= 120)
			{
				g_Hero.x = 119;
			}

			if (g_Hero.x < 0)
			{
				g_Hero.x = 0;
			}

			if (g_Hero.y >= 30)
			{
				g_Hero.y = 29;
			}

			if (g_Hero.y < 0)
			{
				g_Hero.y = 0;
			}
		}
	}

void Hero_Draw()
{
	DrawCharEx3(g_Hero.x, g_Hero.y, g_Hero.body,
		g_Hero.fColor, g_Hero.bColor);
}
