//********************************************
//	�����˵� ��غ���
//  ������2000��7��09��
//********************************************

#ifndef _MENUTOP_H_
#define _MENUTOP_H_

//********��Ʒ��*********
class CMenuTop : public CWindow{
public:
	int ButtonNum;			//��ť����
	CCButton *Button;		//��ť

	int MoneyX, MoneyY;		//Ǯ��λ��

public:
	CMenuTop();
	~CMenuTop();

	void LoadMenuTopIni(char *, char *);						//��������
	void ShowMenuTop(LPDIRECTDRAWSURFACE, bool=true);	//��ʾ
	void DoMenu(LPDIRECTDRAWSURFACE, bool=true);	//�˵�ѭ��
};

#endif