#pragma once
#include"Element.h"

class Hole : public Element //Element상속. Element의 멤버를 기본으로 가진다.
{
public:
	Hole(int rand_x) :Element( rand_x, 3) {}
	//int x, y;
	void movePos();
	void motionPrint(Output* graphic);
private:
	const static int form[5][9][11];
};
