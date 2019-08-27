//********************************************
//	״̬ ��غ���
//  ������2000��7��09��
//********************************************

#ifndef _STATE_H_
#define _STATE_H_

//********״̬��*********
class CState : public CWindow{
public:
	int PhotoWidth, PhotoHeight;
	RECT PhotoRect;

	CCButton Button_Left, Button_Right;	//���һ��˰�ť
	CWindow Window_Magic;				//ħ������
	CWindow Window_Setup;				//װ������

public:
	CState();
	~CState();

	void LoadStateIni(char *, char *);				//���봰�ڵ�����
	void Init(LPDIRECTDRAWSURFACE);					//��ʼ������
	void ShowStateWindow(LPDIRECTDRAWSURFACE, bool bShowWindow=true, int left=-1, int top=-1);	//��ʾ
	void DoMenu(LPDIRECTDRAWSURFACE, bool=true);	//�˵�ѭ��
};

#endif