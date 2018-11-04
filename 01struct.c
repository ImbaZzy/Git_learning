/*
	结构体练习
*/
#include <stdio.h>
typedef struct{
	int row;
	int col;
}pt;

typedef struct{
	pt center;
	int radius;
}circle;

int len2(const pt* pt1,const pt* pt2){
	int le;
	le = (pt1->row - pt2->row)*(pt1->row - pt2->row)+(pt1->col - pt2->col)*(pt1->col - pt2->col);	
	return le;
}

int relation(const pt* p_pt,const circle* p_circle){
	int le = len2(p_pt,&p_circle->center);
	int r2 = p_circle->radius * p_circle->radius;
	if(le > r2) return 0;
	else if(le == r2) return 1;
	else return 2;
}
int main()
{	
	pt pt1 = {0};
	circle circle1 = {0};
	printf("请输入圆的半径与圆心坐标：");
	scanf("%d%d%d",&circle1.radius,&circle1.center.row,&circle1.center.col);
	printf("请输入点的坐标：");
	scanf("%d%d",&pt1.row,&pt1.col);
	if(!relation(&pt1,&circle1)) printf("点在圆外\n");
	else if(relation(&pt1,&circle1) == 1) printf("点在圆上\n");
	else printf("点在圆内\n");
	return 0;
}
