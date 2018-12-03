#include <stdio.h>

int find_anagram(char [], char []);

int main()
{
    char a[100], b[100];
    int r;

    printf("Enter the string\n");
    gets(a);
    printf("Enter another string\n");
    gets(b);
    r = find_anagram(a, b);
    if (r == 1)
        printf(" %s and %s are anagrams.\n", a, b);
    else
        printf(" %s and %s are not anagrams.\n", a, b);
    return 0;
}

int find_anagram(char a[], char b[])
{
    int num1[26] = {0}, num2[26] = {0}, i = 0;

    while (a[i] != '\0')
    {
        num1[a[i] - 'a']++;
        i++;
    }
    i = 0;
    while (b[i] != '\0')
    {
        num2[b[i] -'a']++;
        i++;
    }
    for (i = 0; i < 26; i++)
    {
        if (num1[i] != num2[i])
            return 0;
    }
    return 1;
}
