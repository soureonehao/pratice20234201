#include<stdio.h>
struct date {
	int Year, Month, Day;	//�����ʾ���ڵĽṹ�����ͱ���
};
struct student {
	char Name[8];
	int Eng, Math, Prog;
	struct date Birth;	//�����ʾѧ����Ϣ�Ľṹ������
}; 
void main() {
	struct student Org = { "Tom", 80, 90, 85, 1926,11,30 }, Bak;
	Bak = Org;	//ͬһ�����͵Ľṹ�����ֱ�Ӹ�ֵ
	printf("%s, %d,%d, %d,%d-%d-%d", Bak.Name, Bak.Math,Bak.Eng, Bak.Prog, Bak.Birth.Year, Bak.Birth.Month, Bak.Birth.Day);
	getch();
}