#include <stdio.h>

int main(void)
{
    int a = 123;
    double x = 123.456;
    char c = 'k';
    char s[] = "abc";
    int i;

    printf("Цілі числа\n");
    printf("Десяткове: %d\n", a);
    printf("Вісімкове: %o\n", a);
    printf("Шістнадцяткове: %x\n", a);
    printf("Двійкове: ");
    for (i = 7; i >= 0; i--)
        printf("%d", (a >> i) & 1);
    printf("\n");

    printf("\nДійсні числа\n");
    printf("З плаваючою комою: %f\n", x);
    printf("Експоненційна форма: %e\n", x);
    printf("Гнучка форма: %g\n", x);

    printf("\nСимвол: %c\n", c);
    printf("Стрічка: %s\n", s);
    printf("Вказівник: %p\n", s);

    return 0;
}