#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int returncount(unsigned int n)
//{
//	int count = 0;
	//while (n)
	//{
	//	if (n % 2 == 1)
	//	{
	//		count++;

	//	}
	//	n = n / 2;
	//}
	
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((n >> i)&1 == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int main()
//{
//	int n = 0;
//	printf("请输入一个数：\n");
//	scanf("%d", &n);
//	int ret = returncount(n);
//
//	printf("共有：%d", ret);
//	return 0;
//}
//int get_bit(int a, int b)
//{
//	int tmp = a ^ b;
//	int count = 0;
//	while (tmp)
//	{
//		tmp = tmp & (tmp - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int count = get_bit(a, b);
//	printf("%d", count);
//	return 0;
//}

//分别打印一个数的偶数位和奇数位
//void print(int a)
//{
//	int i = 0;
//	//奇数位
//	//00000000000000000000000000000011
//	for (i = 30; i >= 0; i-=2)
//	{
//		printf("%d ", ((a >> i) & 1));
//	}
//	printf("\n");
//	//偶数位
//	for (i = 31; i >= 1; i-=2)
//	{
//		printf("%d ", (a >> i) & 1);
//	}
//}
//int main()
//{
//	int a = 0;
//	printf("请输入一个数：\n");
//	scanf("%d", &a);
//	print(a);//封装函数
//
//	return 0;
//}

//交换两个变量，不允许创建临时变量

//int main()
//{
//	int a = 6;//0000 0110
//	int b = 5;//0000 0101
//	/*a = a + b;//方法一
//	b = a - b;
//	a = a - b;*/
//	//方法二位运算是可逆的
//	a = a ^ b;//0000 0011
//	          //0000 0101
//	b = a ^ b;//0000 0110
//
//	a = a ^ b;//0000 0011
//	          //0000 0101
//	printf("%d %d", a, b);
//	
//	return 0;
//}

//用指针打印数组
//int main()
//{
//	int arr[3] = { 1,5,6 };
//	int i = 0;
//	int* p = arr;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}
//输出99乘法口诀表
//void fun(int a)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= a; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", j, i, i * j);
//			
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int a = 0;
//	printf("输入一个数：\n");
//	scanf("%d", &a);
//	fun(a);
//	return 0;
//}

//用递归的方法进行元素逆置

//int my_strlen(char arr[])
//{
//	int count = 0;
//	while(arr[count]!='\0')
//	{
//		count++;
//	}
//	return count;
//}
//void reverse_string(char arr[])
//{
//	char temp = arr[0];
//	int len = my_strlen(arr);
//	arr[0] = arr[len - 1];
//	arr[len - 1] = '\0';
//	if (my_strlen(arr+1) >= 2)
//	{
//		reverse_string(arr + 1);
//	}
//	arr[len - 1] = temp;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	my_strlen(arr);
//	reverse_string(arr);
//	printf("%s", arr);
//	return 0;
//}
//int my_strlen(char arr[])
//{
//	int count = 0;
//	while (arr[count] != '\0')
//	{
//		count++;
//	}
//	return count;
//}
//void reverse_string(char arr[])
//{
//	char temp = arr[0];
//	int len = my_strlen(arr);
//	arr[0] = arr[len - 1];
//	arr[len - 1] = '\0';
//	if (my_strlen(arr + 1) >= 2)
//	{
//		reverse_string(arr+1);
//	}
//	arr[len - 1] = temp;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	my_strlen(arr);
//	reverse_string(arr);
//	printf("%s", arr);
//	return 0;
//}

//写一个递归函数DigitSum()输入一个非负整数，返回组成它的数字之和；
//例如DigitSum(1729）,1+7+2+9,return 19;
// 输入1729，返回19
//int DigitiSum(unsigned int num)
//{
//	if (num > 9)
//	{
//		return DigitiSum(num / 10) + num % 10;
//	}
//	else
//	{
//		return num;
//	}
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	int ret=DigitiSum(num);
//	printf("%d ", ret);
//	return 0;
//}
//double pow(int n, int k)
//{
//	if (k < 0)
//	{
//		return (1.0 / pow(n, (-k)));
//	}
//	else if (k == 0)
//	{
//		return 1;
//	}
//	else return n * pow(n, k - 1);
//	//2   *   pow(2,2)
//	//2   *   pow(2,1)
//	//2   *   pow(2,0)
//	//return 1;
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d", &n);
//	scanf("%d", &k);
//	double ret = pow(n, k);
//	printf("ret =%lf", ret);
//	return 0;
//}
