#include"DrawObject.h"
#include<Windows.h>
#include<iostream>

DrawObject::DrawObject()
{
}
DrawObject::~DrawObject()
{
}

bool DrawObject::paintPst(int nX, int nY, int nType)
{
	//��������ͼ������Ϊ�����ַ�
	switch (nType)
	{
	case 0: paint(nX, nY, "  ", 0);
		break;

	case 1:paint(nX, nY, "��", 7);
		break;

	case 2:paint(nX, nY, "��", 4);
		break;

	case 3:paint(nX, nY, "��", 9);
		break;
	default:
		break;
	}
	return true;
}
/*��������ͼ��ռ�����ַ�λ��ʵ����ʾ�ĵ�ͼ����ǵ�ͼ���������
���������coord�����е�x����Ҫ�����������������*/
void DrawObject::paint(int nX, int nY, const char* psz, WORD wArr)
{
	//��ȡ���
	HANDLE hOutStd = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos;

	//�����X��Y�����ǿ���̨�������ֵ
	pos.X = nX * 2;
	pos.Y = nY;
	//���ù��λ�ã����λ�ã�
	SetConsoleCursorPosition(hOutStd, pos);
	//����������ɫ
	SetConsoleTextAttribute(hOutStd, wArr);
	std::cout << psz;
}
//������ԭ�������ԭλ�ô�ӡ���ַ�����ԭ����ַ�
void DrawObject::erase(int nX, int nY, const char* psz, WORD wArr)
{
	HANDLE hOutStd = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos;
	pos.X = nX * 2;
	pos.Y = nY;
	SetConsoleCursorPosition(hOutStd, pos);
	SetConsoleTextAttribute(hOutStd, wArr);
	std::cout <<"  ";
}