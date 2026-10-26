#include <stdio.h>

int main(void)
{
    int a = 123;
    double x = 123.456;
    char c = 'k';
    char s[] = "abc";

    printf("Десяткове: %d\n", a);
    printf("Вісімкове: %o\n", a);
    printf("Шістнадцяткове: %x\n", a);

    printf("Двійкове: ");
    for (int i = 7; i >= 0; i--)
        printf("%d", (a >> i) & 1);
    printf("\n");

    printf("З плаваючою комою: %f\n", x);
    printf("Експоненційна форма: %e\n", x);
    printf("Гнучка форма: %g\n", x);

    printf("Символ: %c\n", c);
    printf("Стрічка: %s\n", s);
    printf("Вказівник: %p\n", s);

    return 0;
}