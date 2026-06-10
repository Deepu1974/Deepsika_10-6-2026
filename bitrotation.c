#include <stdio.h>
#define SIZE sizeof(int)*8
int leftrotation(int n,int r)
{
	
	return(n<<r|n>>SIZE-r);
}
int rightrotation(int n,int r)
{
	
	return(n>>r|n<<SIZE-r);
}
int main()
{
	int n=-11,r=2;
	r%=SIZE;
	if(r==0||r<0)
	 printf("Invalid");
	int l=leftrotation(n,r);
	printf("Left=%d\n",l);
	int right=rightrotation(n,r);
	printf("Rightt=%d",right);
	return 0;
}
