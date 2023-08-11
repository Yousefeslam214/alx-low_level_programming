#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - this function use to  prints all possible combinations of single-digit numbers.
 *
 * Return:0.
 **/
int main(void)
{
        int alphabet , num;
        
        for (alphabet = '0'; alphabet <= '9'; alphabet++){
                for (num = '0'; num<='9';num++){
                    if (num != '8' && alphabet != '9'){
                        putchar(alphabet);
                        putchar(num);
                        putchar(',');
                        putchar(' ');
                }
            }
        }
        putchar('\n');
}
