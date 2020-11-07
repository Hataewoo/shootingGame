//include 파일들
#ifndef _INCLUDE_H_
#define _INCLUDE_H_

#include <crtdbg.h>
#include "../ConsoleEx3/ConWrap.h"
#include "mmsystem.h"

#include "Hero.h"// 자동으로 위의 헤더파일이 속해짐
#include "Bullet.h"
#include "time.h"

extern stHero g_Hero; //외부에 있는 변수를 직접 쓸수 있다.
extern stBullet g_Bullet;
extern stTime g_Time;

#endif