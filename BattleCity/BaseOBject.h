#ifndef BASEOBJECT_H
#define BASEOBJECT_H

//��������ȫ�ֱ���
extern int enemyNum;
extern bool gameFail;

class BaseOBject
{
public:
	BaseOBject();
	virtual ~BaseOBject();
	virtual void draw()=0;
};

#endif

