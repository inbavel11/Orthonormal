#include<stdio.h>
int main()
{
	int a[9];
	printf("enter=");
	for(int i=0;i<9;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nu1=(%d %d %d)",a[0],a[1],a[2]);
	float r1=(a[3]*a[0])+(a[4]*a[1])+(a[5]*a[2]);
	float u1=(a[0]*a[0])+(a[1]*a[1])+(a[2]*a[2]);
	printf("\n<v2,u1>=%.1f\n|u1|=%f\nu2=(%.1f %.1f %.1f)",r1,u1,a[3]-((r1/u1)*a[0]),
	a[4]-((r1/u1)*a[1]),a[5]-((r1/u1)*a[2]));
	a[3]=a[3]-((r1/u1)*a[0]);
	a[4]=a[4]-((r1/u1)*a[1]);
	a[5]=a[5]-((r1/u1)*a[2]);
	float r2=(a[6]*a[0])+(a[7]*a[1])+(a[8]*a[2]);
	float r3=(a[3]*a[6])+(a[4]*a[7])+(a[5]*a[8]);
	float u2=(a[3]*a[3])+(a[4]*a[4])+(a[5]*a[5]);
	printf("\n<v3,u1>=%f\n|u1|=%f\n<v3,u2>=%.1f\n|u2|=%.1f\nu3=(%.1f %.1f %.1f)",r2,u1,r2,u2,a[6]-((r2/u1)*a[0])-((r3/u2)*a[3]),
	a[7]-((r2/u1)*a[1])-((r3/u2)*a[4]),a[8]-((r2/u1)*a[2])-((r3/u2)*a[5]));
	return 0;
}