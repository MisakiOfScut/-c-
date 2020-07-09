#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include"BaseOBject.h"
#include"Map.h"
#include"DrawObject.h"
#include"Tank.h"
#include"Bullet.h"
#include<Windows.h>
#include<vector>
using namespace std;

class MainWindow
{
public:
	MainWindow();
	~MainWindow();
	//���ô��ڴ�С
	bool setWindow(const char*, short width, short height);
	//����������
	void showCursor();
	//��ȡ��ͼ�����ַ
	Map& getMapObj();
	//������̹�˵�ֵд���ͼ��
	Map pushMap(Map &);
	//��һ��̹�˵�ֵд���ͼ
	Map pushOneMap(Map &,int);

	//��ӡ��ʼ�˵�
	void Menu();
	//��Ӯ����
	void winMenu();
	void lostMenu();
	//��ӡ�Ʒְ�
	void scoreBoard(int);
	//��ӡ̹�˽��ܰ�
	void tankIntroBoard();
	//��ʼ��������Ϸ
	void initialGame1();
	//��ʼ��˫�˶�ս��Ϸ
	void initialGame2();
	//����ϳ���Ϸ������
	void clearLastGame();
	// ���ɵ���
	void setProps();
	void Game();
	//������Ϸ����
	void onePlayer();
	//˫�˶�ս��Ϸ����
	void douPlayers();
	//һ���򵥵ĵ���AI
	bool enemyMove(Tank&);
	//�Ӽ����ϻ�����벢��Ӧ����
	bool Press(int);
	//��ȡ�����
	int getRand();

private:
	Map mapObject;//��ͼ����
	vector <Tank> tankSet;//̹������
	vector<Bullet> bulletSet;//�ӵ�����
};


#endif