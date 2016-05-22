#pragma once

#ifndef __OUTPUT_H__
#define __OUTPUT_H__

#include"control.h"	//setColor, goto선언 되어있음.element도 제어되야하므로.
//#include"Game.h"


class Output {	//시각화 객체
public:
	void printStartMenu();
	void printFrame();
	void fixOnBoard(const Element* a);
	void draw();
	//게임 점수, 거리, 시간 저장하는 변수 만들기. 밑에 출력하는 함수도 만들고.
	int board[22][38];// 프라이빗 하려그랬는데... 레이아웃은 쉽게 접근해야하니깐..?
};

#endif //!__OUTPUT_H__