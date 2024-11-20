#include<stdio.h>
#include<math.h>

struct Space
{
	int x;
	int y;
};
float distance(struct Space points[] );
int point_check(struct Space points[],int x1,int x2,int y1,int y2); 

int main(){ int i;
struct Space points[2];
for(i=0;i<2;i++){
	printf("Enter point %d x cordinate : ",i+1);
	scanf("%d",&points[i].x);
	printf("Enter point %d y cordinate : ",i+1);
	scanf("%d",&points[i].y);
}
float dist;
dist= distance(points);
printf("%f",dist);
point_check(points,0,8,0,4);
}


float distance(struct Space points[] ){
	return sqrt(pow(points[1].x-points[0].x,2)+pow(points[1].y-points[0].y,2));
}
int point_check(struct Space points[],int x1,int x2,int y1,int y2){
	int minX,maxX,minY,maxY,flag=0,flag1=0;
	minX=(x1>x2)?x2:x1;
	maxX=(x1>x2)?x1:x2;
	minY=(y1>y2)?y2:y1;
	maxY=(y1>y2)?y1:y2;
	for(int i=0;i<2;i++){
		if(points[0].x>=minX&&points[0].x<=maxX&&points[0].y>=minY&&points[0].y<=maxY)
		{ flag=1;
		}
		if(points[1].x>=minX&&points[1].x<=maxX&&points[1].y>=minY&&points[1].y<=maxY)
		{ flag1=1;
		}
	}
	if(flag==1&&flag1==1){
		printf("\nBoth points lie inside the rectangle");
	}
	else if(flag==1&&flag1==0){
	printf("\nPoint 1 lie inside whereas Point 2 lie outside");
	}
	else if(flag==0&&flag1==1){
	printf("\nPoint 1 lie outside whereas Point 2 lie inside");

	}
	else{
	printf("\nBoth points are outside the rectangle");}
}
