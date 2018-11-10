/*
	联合体练习
*/

#include<stdio.h>
typedef union{
	char ch;
	int num;
	float fnum;
}tmp;
int main()
{
	tmp tmp_union = {0};
	printf("tmp_union.ch是%p\n",&tmp_union.ch);
	printf("tmp_union.num是%p\n",&tmp_union.num);
	printf("tmp_union.fnum是%p\n",&tmp_union.fnum);
	printf("tmp长度是：%ld\n",sizeof(tmp));


	return 0;
}
