#ifndef TANK_H
#define TANK_H
#include"BaseOBject.h"
#include"DrawObject.h"
#include"Map.h"
enum DIRE { UP, DOWN, RIGHT, LEFT };//ö�ٷ���

class Tank : virtual public BaseOBject
{
public:
	Tank(int);
	~Tank();
	//��ӡ̹��
	void draw();
	//ɾ��̹��ͼ��
	void DeleTank();
	//���ݼ�������ı�̹�˷���
	bool MoveTank(char);
	//���̹���Ƿ���ײ
	bool CollisionDetect(char);
	//�ı�̹������ʵ���ƶ�
	void posChange(DIRE);//zuo biao zhuan huan, get pos data for draw func
	//����ָ��
	void setMap(Map * mapObject);
	//��ȡ̹��ĳһ���ֵ�coord����
	COORD getTankPst(int);

	int getValue();
	//����̹��Ѫ�����ڿ�Ѫ
	void setValue(int);
	void setScore(int);
	int getTanktype();
	int getTankColor();
	int getTankPosX();
	int getTankPosY();
	int getTankDir();
	int getScore();
	bool getLive();
	Map* getMapObj();

private:
	void setLive(bool);//����̹�˴��״̬
	bool ifAlive;//�ж�̹���Ƿ���
	//�洢̹��8�����ֵ�coord���꣬����ɳ���������ڹ�
	COORD TankPos[8];
	int posX, posY;//̹����������
	int Direction;
	int value;//Ѫ��
	int tankType;//̹�����ͣ����ڷֱ�̹����Ӫ���ȼ�
	int tankColor;
	int tankScore;
	Map* pToMap;//��ͼָ��
};

#endif
