#include"Map.h"

Map::Map()
{
}

Map::~Map()
{
}

bool Map::setValue(int nX, int nY, int Value)
{
	//��ֹԽ���������
	if (nX >= 70 || nX <= 0 || nY <= 0 || nY >= 48)
	{
		return false;
	}
	else
	{
		//map��������������ǰ�������ں󣬼�map[y][x]
		ArrMap[nY][nX] = Value;
		return true;
	}
}

int Map::getValue(int nX, int nY)
{
	//map��������������ǰ�������ں󣬼�map[y][x]�����Է��أ�x,y��λ�õ�ֵӦ�÷���������[y][x]λ��
	return ArrMap[nY][nX];
}

void Map::drawMap()
{
	for (int i = 0; i < 48; i++)
	{
		for (int j = 0; j < 70; j++)
		{
			//map��������������ǰ�������ں󣬼�map[y][x]
			//��coord����x�Ǻ�����y�������꣬�������ַ�����2������x=2*j��y=i
			paintPst(j, i, ArrMap[i][j]);
		}
	}
}