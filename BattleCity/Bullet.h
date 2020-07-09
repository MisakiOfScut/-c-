#pragma once
#include"BaseOBject.h"
#include"DrawObject.h"
#include"Tank.h"
#include<vector>

class Bullet:virtual public  BaseOBject
{
public:
	Bullet();
	~Bullet();

	//��ӡ�ӵ�
	void draw();
	//ɾ���ӵ���ͼ��
	void deleBullet();

	//��̹��������������ӵ�
	Bullet createBullet(Tank&, std::vector<Tank>& );
	//�ı��ӵ������ƶ��ӵ�
	bool moveBullet(std::vector<Tank>&);
	//����ӵ��Ƿ�����ײ
	bool bulletCollision(Bullet& , std::vector<Tank>& );
	//����=�ŷ��㴴���ӵ�
	bool operator=(Tank&);
	//����==�������ӵ���̹�˵���ײ
	bool operator==(Tank&);//use to detect collision
	//���ص�ͼָ��
	Map *getMap();
	bool getLive();
	int getBulletPosX();
	int getBulletPosY();
	int getBulletDir();
	int getBulletType();

	
private:
	bool ifAlive;//�ӵ��Ƿ�����ʱΪ��
	int posX, posY;
	int dir;
	int ntype;//�ӵ����࣬��̹��������ͬ
	int bulletColor;//�ӵ���ɫ
	Map* pToMap;//��ͼָ��
	Tank* pToTank;
};
