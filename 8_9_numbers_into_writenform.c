#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    // DECLEARING THE STRING AND VARIABLES.

    char number[10];
    char f_num[100] = "";
    char *token;
    int length;
    int num, a, b, c, d, e;
    char *ones[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    char *teens[] = {"ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    char *tens[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
    char *places[] = {"thousand", "lakh", "crore"};

    // TAKING INPUT FROM USER.

    printf("enter a number with coma(,) > ");
    scanf("%s", number);

    // FINGINH=G THE LENGTH OF THE STRING.

    length = strlen(number);

    // BREAKING DOWN THE STRING.

    token = strtok(number, ",");

    // GIVING THE POSITION NAME TO THE DIGITS.

    while (token != NULL)
    {
        num = atoi(token);

        if (num >= 0 && num < 10)
        {
            strcat(f_num, ones[num]);
            strcat(f_num, " ");

            if ((length) == 12 || (length) == 11)
            {
                strcat(f_num, places[2]);
                strcat(f_num, " ");
            }
            else if ((length) == 9 || (length) == 8)
            {
                strcat(f_num, places[1]);
                strcat(f_num, " ");
            }
            else if ((length) == 6 || (length) == 5)
            {
                strcat(f_num, places[0]);
                strcat(f_num, " ");
            }
        }
        else if (num >= 10 && num < 20)
        {
            strcat(f_num, teens[num - 10]);
            strcat(f_num, " ");

            if ((length - 1) == 12 || (length - 1) == 11)
            {
                strcat(f_num, places[2]);
                strcat(f_num, " ");
            }
            else if ((length - 1) == 9 || (length - 1) == 8)
            {
                strcat(f_num, places[1]);
                strcat(f_num, " ");
            }
            else if ((length - 1) == 6 || (length - 1) == 5)
            {
                strcat(f_num, places[0]);
                strcat(f_num, " ");
            }
        }
        else if (num >= 20 && num < 100)
        {
            a = num / 10;
            b = num % 10;
            strcat(f_num, tens[a]);

            if (b != 0)
            {
                strcat(f_num, "-");
                strcat(f_num, ones[b]);
                strcat(f_num, " ");
            }

            if ((length - 1) == 12 || (length - 1) == 11)
            {
                strcat(f_num, places[2]);
                strcat(f_num, " ");
            }
            else if ((length - 1) == 9 || (length - 1) == 8)
            {
                strcat(f_num, places[1]);
                strcat(f_num, " ");
            }
            else if ((length - 1) == 6 || (length - 1) == 5)
            {
                strcat(f_num, places[0]);
                strcat(f_num, " ");
            }
        }
        else if (num >= 100 && num < 1000)
        {
            c = num / 100;
            strcat(f_num, ones[c]);
            strcat(f_num, " ");
            strcat(f_num, "hundred");

            num = num % 100;

            if (num == 10)
            {
                strcat(f_num, " ");
                strcat(f_num, tens[0]);
            }
            else if (num > 10 && num < 20)
            {
                strcat(f_num, " ");
                strcat(f_num, teens[num - 10]);
            }
            else if (num >= 20 && num < 100)
            {
                d = num / 10;
                e = num % 10;
                strcat(f_num, " ");
                strcat(f_num, tens[d]);
                strcat(f_num, "-");
                strcat(f_num, ones[e]);
            }
        }

        token = strtok(NULL, ",");
        length = length - 2;
    }

    printf("%s", f_num);
}