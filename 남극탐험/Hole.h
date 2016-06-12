
#ifndef __HOLE_H__
#define __HOLE_H__

#include"Element.h"
#include"Output.h"

class Hole : public Element //Element상속. Element의 멤버를 기본으로 가진다.
{
public:
	Hole(const int start_x);
	//int x, y;
	void movePos();
	void motionPrint(Output* graphic);
private:
	const static int form[5][9][11];
};

#endif //!__HOLE_H__
