#include<stdio.h>
struct date {
	int Year, Month, Day;	//定义表示日期的结构体类型变量
};
struct student {
	char Name[8];
	int Eng, Math, Prog;
	struct date Birth;	//定义表示学生信息的结构体类型
}; 
void main() {
	struct student Org = { "Tom", 80, 90, 85, 1926,11,30 }, Bak;
	Bak = Org;	//同一个类型的结构体变量直接赋值
	printf("%s, %d,%d, %d,%d-%d-%d", Bak.Name, Bak.Math,Bak.Eng, Bak.Prog, Bak.Birth.Year, Bak.Birth.Month, Bak.Birth.Day);
	getch();
}