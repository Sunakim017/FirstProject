#include <stdio.h>

void func1(int* p);
void func2(int** p);
void func3(int*** p);
void func4(int**** p);

int main()
{
	int i = 100;//declare variable

	int *p, **dp, ***tp;//pointer variable

	p = &i;
	dp = &p;
	tp = &dp;

	func1(&i);
	printf("i = %d\n", i);//print func1 result

	func2(&p);
	printf("*p = %d\n",*p);//print func2 result

	func3(&dp);
	printf("**dp = %d\n", **dp);//print func3 result

	func4(&tp);
	printf("***tp = %d\n", ***tp);//print func4 result

	printf("i = %d\n", i);//print out final result
	
	return 0;//function end

}

void func1(int* p)
{
	*p = *p+100;//calculate 
}

void func2(int** p)
{
	**p = **p+100;//calculate
}

void func3(int*** p)
{
	***p = ***p+100;//calculate
}

void func4(int**** p)
{
	****p = ****p+100;//calculate
}
