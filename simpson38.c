#include<stdio.h>
#define f(x) (1/(1+x*x))
#include<math.h>
int main()
{
	float a,b,h,x[10],y[10],iv;
	int n,i;
	printf("Enter upper limit(b) and lower limit(a):");
	scanf("%f%f",&b,&a);
	printf("Enter the no of segment say(n):");
	scanf("%d",&n);
	h=(b-a)/n;
	x[0]=a;
	x[n]=b;
	for(i=1;i<n;i++)
	{
		x[i]=x[i-1]+h;
		y[i]=f(x[i]);
	}
	iv=f(a)+f(b);
	for(i=1;i<n;i++)
	{
		if(i%3==0)
		{
			iv=iv+2*y[i];
		}
		else
		{
				iv=iv+3*y[i];
		}
	
	}
	iv=iv*(h*3/8);
	printf("%f is a solution of integral value",iv);
	return 0;
}
