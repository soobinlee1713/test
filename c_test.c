#include <stdio.h>

int main()

{
	double r = 5.0;
	double pi = 3.14159;

	printf("�������� %f�� ���� ���̴� %f�Դϴ�\n", 5.0, 3.14159 * 5 * 5);
	printf("�������� %f�� ���� ���̴� %f�Դϴ�\n",r,pi*r*r);
	printf("�������� %e�� ���� ���̴� %e�Դϴ�\n", r, pi*r*r);
	printf("123.456�� %%f��: %f\n", 123.456);
	printf("123.456�� %%e��: %e\n", 123.456);
	printf("-123.456�� %%E��: %E\n", -123.456);

	return 0;
}
