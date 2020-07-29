#include<stdio.h>

void factadd();
void demo2d();
void swapping();
int fact(int x);

void main()
{
int n;
clrscr();
printf("Menu:\n1.Factorial_add\n2.2D Array Demo\n3.Swapping\n4.Exit\nEnter your choice");
scanf("%d",&n);
switch(n)
  {
   case 1: factadd();
	   break;
   case 2: demo2d();
	   break;
   case 3: swapping();
	   break;
   case 4:
	   break;
   default:
	   printf("Enter valid choice");

  }
getch();
}

void factadd()
{
     int a[100];
     int i,n,s=0;
     printf("Enter value of n:");
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {
       printf("Enter the value:");
       scanf("%d",&a[i]);
     }
     for(i=0;i<n;i++)
     {
       s=s+fact(a[i]);
     }
     printf("Sum is %d",s);
}

int fact(int n)
{
  int i,fact=1;
  for(i=1;i<=n;i++)
  {
    fact=fact*i;
  }
  return fact;
}

void demo2d()
{
  int a[100][100];
  int i,j,sum=0,m,n;
  printf("Enter the size of rows and columns\n");
  scanf("%d %d",&m,&n);
  printf("Enter elements of matrix\n");
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      scanf("%d",&a[i][j]);
      sum=sum+a[i][j];
    }
  }
  printf("The sum of matrix is %d",sum);

}

void swap(int *a,int *b)
{
  int temp;
  temp=*a;
  *a=*b;
  *b=temp;
}
void swapping()
{
  int a[100];
  int n;
  int i;
  printf("Enter the length of array");
  scanf("%d",&n);
  printf("\nEnter the array elements\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("\nArray elements before swapping are\n");
  for(i=0;i<n;i++)
  {
    printf("%d\n",a[i]);
  }
  for(i=0;i<n/2;i++)
  {
    swap(&a[i],&a[n-i-1]);
  }
  printf("Elements after swapping are\n");
  for(i=0;i<n;i++)
  {
    printf("%d\n",a[i]);
  }


}