#ifndef _HIGHLIGHT_H
#define _HIGHLIGHT_H
//������ɫ��
typedef struct
{
	mr_colourSt keyword;//�ؼ���
	mr_colourSt annotation;//ע��
	mr_colourSt text;//�ı�
	mr_colourSt character;//�ַ�
	mr_colourSt macro;//��
	mr_colourSt variate;//����
	mr_colourSt function;//������
}HIGHLIGHTCOR;
//��ʼ���߹�
void HighLightInit(void);
//��ʾһ�и߹�����
void DrawTextKeyWord(char *text,int32 x,int32 y);


#endif