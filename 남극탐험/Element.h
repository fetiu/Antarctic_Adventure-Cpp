#pragma once

#ifndef __ELEMENT_H__

#define __ELEMENT_H__

class Element 
{	//게임의 요소를 포괄하는 추상 클래스. 충돌,고정 함수에 객체 정보를 제공할때 사용!!
public:
	Element(int _X, int _Y) :x(_X), y(_Y) { shape = 0; }
	int action;// 요소 제어 명령이 저장되는 변수. 캐릭터는 키에따른 명령일거고, 깃발이나 구멍은 거리에 따른 명령일 것이다.
	virtual void movePos() = 0; //상속시키며 오버라이드 될부분.중요하지않음.
	int presentForm[9][11] = { 0 };
	int getX() const { return x; }
	int getY() const { return y; }
protected:
	int shape;//배열에 박으려면 외부함수에 모양도 알려줘야겠네?...
	int x, y;	//어차피 요소의 좌표를 제어하는 함수는 멤버함수. 같은 클래스 내에서 변경시켜주기!
				//int previousForm[9][11] = { 0 };
};
//visualizer, conceptualizer

#endif // !__ELEMENT_H__
