#include"Game.h"


void Game::startMenu() {
	graphic.printFrame();

	PlaySound(TEXT("Opening.wav"), NULL, SND_FILENAME | SND_ASYNC);

	graphic.printStartMenu();
}

void Game::selectAvatar() {//캐릭터 선택 메뉴 구현..
	avatar = new Character(14, 12);// makePenguin();
}

void Game::playStage() {
	PlaySound(TEXT("Main_Bgm.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

	while (action != STAGE_CLEAR) {


		action = getKey();//제어명령 결정

		avatar->action = action;// 게임 제어 명령 객체에 넣어줌

		avatar->movePos();	//제어명령 바탕으로 캐릭터 좌표이동. 점프를 눌렀을시엔 펭귄이 모두 1로 변하므로 충돌이 일어나지 않음.
		avatar->motionPrint(&graphic);//제어명령 바탕으로 출력될 모양 결정후, 보드에 저장시킨다

		update(); //게임 화면 업데이트

		Sleep(20);
	}
	PlaySound(NULL, 0, 0);
	stageCleared++;
}


void Game::update() {
	graphic.draw();
	land = new Ground(graphic.board);//출력이 완료된 뒤엔 다시 초기화를 시켜줌.
}


void Game::setNextStage() {
	switch (stageCleared) {
	case 0:
		nextStage = 1;
		break;
	}
}

void Game::mapMenu() {};

