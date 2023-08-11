/*#include <stdio.h>
#include <stdarg.h> //cplusplus에서 함수 검색

int va_sum(int, ...);

int main(void)
{
	printf("1+2+3+4 = %d\n", va_sum(4, 1, 2, 3, 4));

}

int va_sum(int n, ...)
{
	int sum = 0;

	va_list vlist;
	va_start(vlist, n);
	for (int i = 0; i < n; i++)
	{
		sum += va_arg(vlist, int);
	}
	va_end(vlist);
	return sum;
} 
// valist 기본적인 사용법*/