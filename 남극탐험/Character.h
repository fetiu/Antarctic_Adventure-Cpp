#pragma once
#ifndef __CHARACTER_H__
#define __CHARACTER_H__
#include"Element.h"
#include"Output.h"

class Game;

class Character :public Element
{
public:
	Character(int _X, int _Y) :Element(_X, _Y) {}
	//int x, y;
	void movePos();
	void motionPrint(Output* graphic);
private:
	const static int form[5][9][11];
	//presentForm = form[shape];
	
	void idleMotion();
	void stumbleMotion();
	void jumpMotion();
	void crouchMotion();
	bool state_stumble = false;
	bool state_jump = false;
	bool state_crouch = false;
	int tmp_shape = 0;	//이전 동작을 임시로 저장하는 곳.
	int tmp_act=IDLE;	//임시 행동 명령이 저장되는 곳.
	
};

#endif //!__CHARACTER_H__