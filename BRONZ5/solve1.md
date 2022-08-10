[문제2754](https://www.acmicpc.net/problem/2754)
```c
#include <stdio.h>
#include <cstring>

int main(void)
{
	char grade[3]; scanf("%s", grade);
	if (strcmp(grade, "A+") == 0) printf("4.3");
	if (strcmp(grade, "A0") == 0) printf("4.0");
	if (strcmp(grade, "A-") == 0) printf("3.7");
	if (strcmp(grade, "B+") == 0) printf("3.3");
	if (strcmp(grade, "B0") == 0) printf("3.0");
	if (strcmp(grade, "B-") == 0) printf("2.7");
	if (strcmp(grade, "C+") == 0) printf("2.3");
	if (strcmp(grade, "C0") == 0) printf("2.0");
	if (strcmp(grade, "C-") == 0) printf("1.7");
	if (strcmp(grade, "D+") == 0) printf("1.3");
	if (strcmp(grade, "D0") == 0) printf("1.0");
	if (strcmp(grade, "D-") == 0) printf("0.7");
	if (strcmp(grade, "F") == 0) printf("0.0");
	
	return 0;
}
```
