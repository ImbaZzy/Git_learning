/*
	枚举
*/
#include <stdio.h>
int main()
{
	enum season {spring,summer=5,autumn,winter};
	printf("秋是：%d\n",autumn);
	printf("春是：%d\n",spring);
	printf("夏是：%d\n",summer);
	return 0;
}
