// palindrome check of string without string.h
#include <stdio.h>
// function prototypes
int strlength(char *s);
int ispalindrome(char *s);
int main(int argc, char const *argv[])
{
    char *str = "MADAM";
    if (ispalindrome(str) == 1)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not palindrome\n");
    }

    return 0;
}

int strlength(char *s)
{
    int len = 0;
    for (int i = 0; i < s[i] != 0; i++)
    {
        len++;
    }
    return len;
}

int ispalindrome(char *s)
{
    int bool_flag = 1; // assume true
    int len = strlength(s);

    for (int i = 0, j = len - 1; i < j; i++, j--)
    {
        if (s[i] == s[j])
        {
            bool_flag = 1;
            continue;
        }
        else
        {
            // printf("String not palindrome.\n");
            bool_flag = 0;
            break;
        }
    }
    return bool_flag;
}