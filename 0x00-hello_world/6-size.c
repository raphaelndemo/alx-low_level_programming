#include<stdio.h>
/**
 * main -Entry
 * Return: Always 0 (successful)
 */
int main(void)
{
	printf("Size of a char:%i byte(s)\n",sizeof(char));
	printf("Size of an int:%i byte(s)\n",sizeof(int));
	printf("Size of a long int:%i byte(s)\n",sizeof(long int));
	printf("Size of a long long int:%ibyte(s)\n",sizeof(long long int));
	printf("Size of a float:%ibyte(s)\n",sizeof(float));
	return (0);
}

