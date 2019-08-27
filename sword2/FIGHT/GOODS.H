//********************************************
//	��Ʒ ��غ���
//  ������2000��7��07��
//********************************************

class CRole;

//��Ʒ����
enum GOODSCLASS{
	GC_ARMS=0,			//����
	GC_CORSELET,		//����
	GC_GOODS,			//��Ʒ
	GC_OHTER,			//����
};

typedef struct{
	int Id;					//���
	char Name[32];			//����
	char About[128];		//����
	int Class;				//����
	int Money;				//��ֵ
	
	int Exp;		//����
	int Hp;			//����
	int MaxHp;		//�������ֵ
	int Mp;			//ħ��
	int MaxMp;		//ħ�����ֵ

	int Attack;		//����
	int Defend;		//����
	int MagicAct;	//ħ������
	int MagicDef;	//ħ������

	int Stamina;	//����
	int Luck;		//����
	int Speed;		//����
	int Bp;			//����
	int Ip;			//����

	char PicFileName[32];		//ͼƬ�ļ���
	LPDIRECTDRAWSURFACE Pic;	//ͼƬ
}stGoods;

//********��Ʒ��*********
class CGoods : public CListWindow{
public:
	static int MAX_GOODS;			//��Ʒ����
	static stGoods *GOODS;		//��Ʒ�б�
	static RECT GoodsRect;			//��ƷͼƬ��С

	int PicWidth, PicHeight;		//��ƷͼƬ�Ĵ�С
	CWindow AboutWindow;			//˵������

public:
	CGoods();
	~CGoods();

	void LoadWindowIni(char *, char *);		//���봰�ڵ�����
	void LoadGoodsIni(char *);				//������Ʒ�б�

	void ShowGoodsListWindow(LPDIRECTDRAWSURFACE, bool bShowWindow=true, int left=-1, int top=-1);	//��ʾ
	void ShowAboutWindow(LPDIRECTDRAWSURFACE, bool);	//��ʾ��Ʒ˵��

	void Init(LPDIRECTDRAWSURFACE);						//��ʼ������
	void DoMenu(LPDIRECTDRAWSURFACE , bool =true);		//�˵�ѭ��

	static int GetGoodsNum(char *name);			//��ȡ������
	void UseGoods(int);							//ʹ��һ����Ʒ
	int GoodEffect(int GoodNum, CRole *Role);	//ʹ����Ʒ�Ľ��
};