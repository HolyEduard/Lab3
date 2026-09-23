#include<stdio.h>
#include<locale.h>
int task1()
{
	int num;
	int num2;
	puts("введите число");
	scanf_s("%d", &num);
	scanf_s("%d", &num2);
	printf("ñóììà: %d ðàçíîñòü: %d ïðîèçâåäåíèå: %d ÷àñòíîå: %d îñòàòîê: %d",num+num2,num - num2,num * num2,num2 / num,num2%num);
}
int task2()
{
	float D;
	D = 2.54;
	float ED;
	ED = 2.32166;
	int dym;
	float result;
	float result2;
	puts("ââåäèòå çíà÷åíèå äëÿ ðàñ÷åòà");
	scanf_s("%d", &dym);
	result = D * dym;
	result2 = ED * dym;
	printf("%d äþéìîâ - ýòî %.1f ñì %d èñïàíñêèõ äþéìîâ - ýòî %.1f ñì", dym, result,dym,result2);
}
int task2A()
{
	float MM = 1.852;
	float SM = 1.609;
	float RM = 1475;
	float SRUM = 7.468;
	float GM = 7412.6;
	int M;
	puts("ââåäèòå çíà÷åíèå äëÿ ðàñ÷åòà");
	scanf_s("%d", &M);
	printf("ìîðñêàÿ ìèëÿ = %f êì\nñóõîïóòíàÿ ìèëÿ = %f êì\nðèìñêàÿ ìèëÿ = %f êì\nñòàðîðóññêàÿ ìèëÿ = %f êì\nãåîãðàôè÷åñêàÿ ìèëÿ = %f êì", (M * MM) / 1000, (M * SM), (M * RM) / 1000, M * SRUM, M * GM);


}
int task3()
{
	int a;
	int b;
	puts("ââåäèòå 2 ÷èñëà");
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	puts("_________________________________________________\n"
		"|    a    *    b|    a    +    b|    a    -    b|\n"
	     "_________________________________________________\n");
	printf("|%5d    *%5d|%5d    +%5d|%5d    -%5d|\n", a, b, a, b, a, b);
	puts("_________________________________________________\n");
	printf("|%15d|%15d|%15d|",a*b,a+b,a-b);
}
int main()
{
	setlocale(LC_ALL, "RUS");
	task3();
	return 0;
}
