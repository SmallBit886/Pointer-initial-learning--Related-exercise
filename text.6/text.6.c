#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//int main()
//{
//	int num = 10;
//	int *p = &num;
//	printf("%d\n", *p);
//
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	char* pc = &a;
//	int* pi = &a;
//	printf("%p\n", pc);
//	printf("%p\n", pi);
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	//int* pa = &a;
//	//*pa = 0;
//	//char* pi = &a;
//	//*pi = 0;//�����÷���1���ֽ�
//	int* pc = &a;
//	*pc = 0;//�����÷���4���ֽ�
//	return 0;
//}

//int main()
//{
//	int n = 10;
//	char* pc = (char*)&n;
//	int* pi = &n;
//	printf("%p\n", &n);
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);
//	printf("%p\n", pi);
//	printf("%p\n", pi + 1);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };	//40���ֽ�
//	int* p = arr;	//������-��Ԫ�ص�ַ
//	int i = 0;
//	for (i = 0; i < 10; i++)//����10���ֽ�
//	{
//		*(p + i) = 1;
//	}
//
//	return 0;
//}

//int main()
//{
//	int* p;//�ֲ�����ָ��δ��ʼ����Ĭ��Ϊ���ֵ
//	*p = 20;
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i <= 11; i++)
//	{
//		//��ָ��ָ��ķ�Χ��������arr�ķ�Χʱ��p����Ұָ��
//		*(p++) = i;
//	}
//	return 0;
//}

////ָ��ָ��Ŀռ��ͷ�
//int* text()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int* p = text();
//	*p = 20;
//	return 0;
//}

//ָ�������

//#define N_VALUES 5
//float values[N_VALUES];
//float* vp;
//int main()
//{
//	//ָ��+-������ָ��Ĺ�ϵ����
//	for (vp = &values[0]; vp < &values[N_VALUES];)
//	{
//		*vp++ = 0;
//	}
// return 0;
//}

//int my_strlen(char* s)
//{
//	char* p = s;
//	while (*p != '\0')
//		p++;
//	return p - s;
//}
//int main()
//{
//	char arr[] = "aaifmwirfg";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//int main()
//{
//	char ch[5] = { 0 };
//	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
//	printf("%d\n", &arr[9] - &arr[0]);
//	printf("%d\n", &arr[9] - &ch[0]);//err
//	return 0;
//}

////ָ��ıȽ�
//#define N_VALUES 5
//float values[N_VALUES];
//float* vp;
//int main()
//{
//	//for (vp = &values[N_VALUES]; vp > &values[0];)
//	//{
//	//	*--vp = 0;
//	//}
//	//����
//	for (vp = &values[N_VALUES - 1]; vp >= &values[0]; vp--)
//	{
//		*vp = 0;
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	printf("%p\n", arr);	//��ַ-��Ԫ�صĵ�ַ
//	printf("%p\n", arr+1);		//+4(��1����һ��int)
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);	//+4
//	//1.&arr:��������ĵ�ַ
//	//2.sizeof(arr):��������ʾ��������
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);		//32(��1����һ������)
//	return 0;				
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int* p = arr; //ָ����������Ԫ�صĵ�ַ
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d] = %p <====> p+%d = %p\n", i, &arr[i], i, p + i);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int* p = arr; //ָ����������Ԫ�صĵ�ַ
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}

////����ָ��
//int main()
//{
//	int a = 10;
//	int * pa = &a;
//	int* * ppa = &pa;
//	printf("%d\n", **ppa);
//	return 0;
//}

////�ú���  -- ����
////ָ������ - ���� - ���ָ�������
////����ָ�� - ָ��
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int arr1[5] = { 0 };
//	char arr2[6] = { 0 };
//	int* arr3[3] = { &a,&b,&c };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d\n", *(arr3[i]));
//	}
//	return 0;
//}

////����Ԫ�ش�ӡ����ʼ��������
//void Reverse(int arr[], int sz)//����
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int tem = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tem;
//		left++;
//		right--;
//	}
//}
//void print(int arr[], int sz)//��ӡ
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//
//}
//void Init(int arr[], int sz)//��ʼ��
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	Reverse(arr, sz);
//	print(arr, sz);
//	Init(arr, sz);
//	print(arr, sz);
//	return 0;
//}

////�����������ݽ��н���
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 6,7,8,9,10 };
//	int tem = 0;
//	int i = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	for (i = 0; i < sz; i++)
//	{
//		tem = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tem;
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	short* p = (short*)arr;
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		*(p + i) = 0;	//short������2���ֽ�
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	//char* pc = (char*)&a;
//	short* pc = (short*)&a;
//	*pc = 0;
//	printf("%x\n", a);//16���ƴ�ӡ
//	return 0;
//}

//int i;//ȫ�ֱ�������ʼ��-Ĭ��Ϊ0
//int main()
//{
//	i--;//-1
//	//10000000 00000000 00000001
//	//11111111 11111111 11111110
//	//11111111 11111111 11111111
//	/*unsigned int p = (unsigned int)i;*/
//	printf("%d\n",i);			//-1
//	printf("%d\n", sizeof(i));	//4
//	if (i > sizeof(i))//sizeof()���������������ռ�ڴ��С >=0�޷���
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;//a=6;c=a=6
//	b = ++c, c++, ++a, a++;//c=7;b=7;c=8;a=7;a=8
//	b += a++ + c;//b=((a=9)+7)+7=23
//	printf("a=%d b=%d c=%d\n", a, b, c);
//	return 0;
//}

////int count_bit_one(unsigned int n)//�޷���
////{
////	int count = 0;
////	//while (n)
////	//{
////	//	if (n % 2 == 1)//-1 % 2 = -1 != 1
////	//	{
////	//		count++;
////	//	}
////	//	n = n / 2;
////	//}
////	int i = 0;
////	for (i = 0; i < 32; i++)
////	{
////		if ((n >> i) & 1 == 1)
////		{
////			count++;
////		}
////	}
////	return count;
////}
//int count_bit_one(unsigned int n)//�޷���(*�ȸ������*)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
////n=&n(n-1)
////n
////13
////1101 n
////1100 n-1
////1100 n
////1011 n-1
////1000 n
////0111 n-1
////0000 n
//int main()
//{
//	int a = 13;
//	scanf("%d", &a);
//	//дһ��������a�Ķ����ƣ����룩��ʾ���м���1
//	int count = count_bit_one(a);
//	//13
//	//00000000000000000000000000001101
//	//-1
//	//10000000000000000000000000000001
//	//11111111111111111111111111111110
//	//11111111111111111111111111111111
//	//00000000000000000000000000000001	��λ��
//	printf("count = %d\n", count);
//	system("pause");//system�⺯��-ִ��ϵͳ����-pause����ͣ��
//	return 0;
//}

//int get_diff_bit(int m, int n)	//�����������������ж��ٸ�λ��ͬ
//{
//	int tem = m ^ n;
//	int count = 0;
//	//return count_bit_one(tem)
//	while (tem)
//	{
//		tem = tem & (tem - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int count = get_diff_bit(m, n);
//	printf("count = %d\n", count);
//	return 0;
//}

////��ӡ�����Ƶ�����λ��ż��λ
//void print(int m)
//{
//	int i = 0;
//	printf("����λ��\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//	printf("ż��λ��\n");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//}
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);//10
//	print(m);		//0000000000000000000000001010
//
//	return 0;
//}

////ʹ��ָ���ӡ������Ԫ��
//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}

////��������
//�����ݹ�
//int fun(int n)
//{
//	if (n == 5)
//	{
//		return 2;
//	}
//	else
//	{
//		return 2 * fun(n + 1);
//	}
//}
//int main()
//{
//	printf("%d\n", fun(2));
//	return 0;
//}

////��ӡ�˷���
//void print_table(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-3d ", i, j, i * j);//%-3d������������룻3�Ǵ�ӡ3λ������Ŀո���桿
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print_table(n);
//	return 0;
//}

////�ַ�������
//#include <string.h>
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
////void reverse_string(char arr[])
////{
////	int left = 0;
////	int right = my_strlen(arr) - 1;
////	while (left < right)
////	{
////		int tem = arr[left];
////		arr[left] = arr[right];
////		arr[right] = tem;
////		left++;
////		right--;
////	}
////}
////int main()
////{
////	char arr[] = "abcdef";
////	reverse_string(arr);	//fedcba\0
////	printf("%s\n", arr);
////	return 0;
////}
////�ݹ�ʵ���ַ�������
//void reverse_string(char arr[])
//{
//	int tem = arr[0];			//1
//	int len = my_strlen(arr);	
//	arr[0] = arr[len - 1];		//2
//	arr[len - 1] = '\0';		//3
//	if (my_strlen(arr + 1) >= 2)
//		reverse_string(arr + 1);
//	arr[len - 1] = tem;			//4
//}
//int main()
//{
//	char arr[] = "abcdefg";
//	reverse_string(arr);	//fedcba\0
//	printf("%s\n", arr);
//	return 0;
//}

////����һ������ÿλ֮��
////�ݹ麯��ʵ��
////DigitSum(1729)
////DigitSum(172)+1729%10
////DigitSum(17)+172%10+1729%10
////DigitSum(1)+17%10+172%10+1729%10
////1+7+2+9
//int DigitSum(unsigned int num)
//{
//	if (num > 9)
//	{
//		return DigitSum(num / 10) + num % 10;
//	}
//	else
//	{
//		return num;
//	}
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);	//1729
//	int ret = DigitSum(num);
//	printf("ret = %d\n", ret);
//	return 0;
//}

//�ݹ�ʵ��n��k�η�
double Pow(int n, int k)
{
	//n^k=n*n^(k-1)
	if (k < 0)
	{
		return (1.0 / (Pow(n,-k)));
	}
	else if (k == 0)
	{
		return 1;
	}
	else
	{
		return n * Pow(n, k - 1);
	}
}
int main()
{
	int n = 0;
	int k = 0;
	scanf("%d%d", &n, &k);
	double ret = Pow(n,k);
	printf("ret = %lf\n", ret);
	return 0;
}