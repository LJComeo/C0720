#include <stdio.h>
#include <stdlib.h>

int fun(char *s)
{
	char *p = s;
	while (*p != '\0')
	{
		p++;
	}
	return (p - s);
}

int main()
{
	//printf("%d\n", fun("goodbye!"));

	/*int arr[4] = { 0 };
	//int brr[4] = { 1 };*/

	//int a[4] = { 0 }; a++;
	//地址不能作为左值，左值要求的是可以存储结果值的地点,
	//而地址则相当于刚刚把你带到房间的门口，并不能把你带到房间里面来存值。

	//unsigned char a = 0xA5;//165
	//unsigned char b = ~a >> 4 + 1;//255
	//printf("%d\n", b);//250

	/*const int i = 0;
	int *j = (int *)&i;
	*j = i;
	printf("%d %d", i, *j);*/

	char arr[] = "qywyer23tdd";
	int num[255] = { 0 };
	int i;
	for (i = 0; arr[i] != '\0'; i++)
	{
		num[arr[i]]++;
	}
	for (i = 0; arr[i] != '\0'; i++)
	{
		if (num[arr[i]] == 2)
		{
			printf("%c\n", arr[i]);
			break;
		}
	}
	

	system("pause");
	return 0;
}