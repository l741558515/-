#pragma once
struct personaldate
{
	char number[10];//学号
	char name[10];//姓名
	char college[10];//学院
	int  right;//1是高级，0是低级
	int  num;//借书数量
	int  reputation;//毁约度0，1，2，3达到3时，不可借书。
	int  keeptime;//借书时长
	int  borrowtime[2]；//借书的日期 年月日
};
struct book
{
	char number[10];//编号
	char name[20];//书名
	char press[20];//出版社
	char synopsis[100];//简介
	char buytime[2];//买书的日期 年月日
	int  num；//同一种书数量
};
