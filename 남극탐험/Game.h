#pragma once

#include<cstdlib>
#include"Output.h"
#include"control.h"
#include"Character.h"
#include"Ground.h"
#include"Hole.h"
#include<mmsystem.h>
#pragma comment(lib,"winmm.lib")

#ifndef __GAME_H__
#define __GAME_H__

class Game {
public:
	Character *avatar;
	int action = IDLE;
	int stageCleared = 0;
	void startMenu();
	void selectAvatar();
	void mapMenu();
	void setNextStage();
	void playStage();
	void update();
private:
	int nextStage;
	
	Output graphic;	//게임 화면 출력을 위한 객체
	Ground *land = new Ground(graphic.board);
	Hole *pit;
	int destination;
	int distance;
	int rest;
	int speed;
	int time;
	int score;
};

#endif //!__GAME_H__