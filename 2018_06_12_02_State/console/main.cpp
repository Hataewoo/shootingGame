#include "Include.h"


// �밡���� ǥ���
// int    n�̸�
// char   c�̸�
// bool   b�̸�	
// DWORD  dw�̸�
// short  s�̸�
// long   l�̸�
// ����ü �ɹ������� 
// int m_n�̸�
// char  m_c�̸�
// �۷ι� g_?�̸�
// int nVlaue = 0;
// void Quit();

stHero g_Hero;
stBullet g_Bullet;
stTime g_Time;

int main()
{
	InitialConsole();//�ʱ�ȭ�Լ�
	Hero_Init();
	Bullet_Init();
	SetWindowTitle("Shooting");

	while (true)
	{
		g_Time.currentTime = GetTickCount();
		g_Time.deltaTime = (g_Time.currentTime - g_Time.elapsedTime) / 1000.0;
		g_Time.elapsedTime = g_Time.currentTime;
		g_Time.realTime += g_Time.deltaTime;

		CheckInput();
		ClearScreenEx3(BLACK);

		Hero_Update();
		Hero_cliping();
		Hero_Draw();

		Bullet_Update();
		Bullet_Draw();
		

		Flip();
		EngineSync(30);
	}

	ReleaseConsole();
	return 0;
}
