#ifndef DRAWOBJECT_H
#define DRAWOBJECT_H

#include<Windows.h>
#include<iostream>

class DrawObject
{
public:
	DrawObject();
	~DrawObject();
	//�����������ض�λ�ô�ӡ�ض�ͼ��
	bool paintPst(int nX, int nY, int nType);
	//�����������ض�λ�ô�ӡ��������
	void paint(int nX, int nY, const char* psz, WORD wArr);
	//���������ڲ����ض�λ�õ�ͼ��
	void erase(int nX, int nY, const char* psz, WORD wArr);

};
#endif