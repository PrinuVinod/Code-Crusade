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
    int freq[10];

    scanf("%s", str);
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            freq[str[i]] += 2;
        }
    }

    for (int i = 0; i < n ; i++)
    {
        printf("%d ", freq[i]);
    }
    return 0;
}
