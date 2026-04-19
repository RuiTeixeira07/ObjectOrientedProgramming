
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void main()
{
	char inputDataFilePath[] = "Assets/InputData.txt";
	char outputDataFilePath[] = "Assets/OutputData.txt";
	FILE * f1, * f2;
	int a, b;

	if ((f1 = fopen(inputDataFilePath, "r")) == NULL)
	{
		printf("Error: File Not Found. \n");
	}
	if ((f2 = fopen(outputDataFilePath, "w")) == NULL)
	{
		printf("Error: Could Not Open File. \n");
	}

	fscanf(f1, "%d", &a);
	fscanf(f1, "%d", &b);

	fprintf(f2, "%d \n", a * a);
	fprintf(f2, "%d \n", b * b);

	fclose(f1);
	fclose(f2);
}