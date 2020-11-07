#include "Include.h"

void Bullet_Init()
{
	g_Bullet.x[100];
	g_Bullet.y[100];
	g_Bullet.attack = 1;
	g_Bullet.fColor = RED;
	g_Bullet.bColor = BLACK;
	g_Bullet.body = '*';
	g_Bullet.speed = 3;
	g_Bullet.summon = false;
	g_Bullet.number = 0;
}

void Bullet_Update()
{
	if (IsKey(VK_SPACE))
	{
		for (int i = 0; i < 10; i++)
		{
			if (g_Time.realTime > 1)
			{
				if (g_Bullet.y[i] < 0)
				{
					g_Bullet.summon = false;
				}
				if (!g_Bullet.summon)
				{
					g_Bullet.summon = true;
					g_Bullet.y[i] = g_Hero.y - 1;
					g_Bullet.x[i] = g_Hero.x;
					g_Time.realTime = 0;
					break;
				}
			}
		}
	}
}

void Bullet_Draw()
{
		for (int i = 0; i < 100; i++)
		{
			DrawCharEx3(g_Bullet.x[i], g_Bullet.y[i], g_Bullet.body,
				g_Bullet.fColor, g_Bullet.bColor);
		}

		for (int i = 0; i<100; i++)
		{
			g_Bullet.y[i] -= g_Bullet.speed;
		}
}