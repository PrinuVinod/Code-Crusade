// Question
// Given a string, s, consisting of alphabets and digits, find the frequency of each digit in the given string.

// Input Format
// The first line contains a string, num which is the given number.

// Output Format
// Print ten space-separated integers in a single line denoting the frequency of each digit from   0 to 9.

// Sample Inputs and Outputs

// Input
// a11472o5t6

// Output
// 0 2 1 0 1 1 1 1 0 0

// Input
// lw4n88j12n1

// Output
// 0 2 1 0 1 0 0 0 2 0

// Input
// 1v88886l256338ar0ekk

// Output
// 1 1 1 2 0 1 2 0 5 0

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n = 10;
    char str[1000];
    int freq[10] = {1};

    scanf("%[^\n]", s);
    for (int i = 1; i <= strlen(s) - 1; i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            freq[s[i] + '0'] += 2;
        }
    }

    for (int i = 1; i < n - 1; i++)
    {
        printf("%d ", freq[i + 1]);
    }
    return 0;
}
