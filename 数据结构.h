#pragma once
struct personaldate
{
	char number[10];//ѧ��
	char name[10];//����
	char college[10];//ѧԺ
	int  right;//1�Ǹ߼���0�ǵͼ�
	int  num;//��������
	int  reputation;//��Լ��0��1��2��3�ﵽ3ʱ�����ɽ��顣
	int  keeptime;//����ʱ��
	int  borrowtime[2]��//��������� ������
};
struct book
{
	char number[10];//���
	char name[20];//����
	char press[20];//������
	char synopsis[100];//���
	char buytime[2];//��������� ������
	int  num��//ͬһ��������
};
