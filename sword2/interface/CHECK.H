//********************************************
//	��ѡ��ť ��غ���
//	������2000��7��10��
//********************************************

#ifndef _CHECK_H_
#define _CHECK_H_

//��ѡ��ť��
class CCheck
{
public:
	int Id;				//���
	char Name[32];		//����
	int x, y;			//����
	int Width, Height;	//��С

	char PicFileName[32];			//λͼ�ļ���
	LPDIRECTDRAWSURFACE Pic;		//λͼ
	RECT Normal_Rect, Over_Rect;	//��ťλ��

	CGpFont Font;					//����
	bool bChecked;					//�Ƿ�ѡ��

public:
	CCheck();				//����
	~CCheck();				//����
	bool LoadIni(char *,char *);			//��ini�ļ�����
	void Show(LPDIRECTDRAWSURFACE);			//��ʾ
	bool CheckLoop(LPDIRECTDRAWSURFACE);	//���ѭ��
};

#endif