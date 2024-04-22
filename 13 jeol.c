// Question
// You are transporting some boxes through a tunnel, where each box is a cuboid, and is characterized by its length, width and height.

// The height of the tunnel is 41 feet and the width can be assumed to be infinite. A box can be carried through the tunnel only if its height is strictly less than the tunnel's height. Find the volume of each box that can be successfully transported to the other end of the tunnel.

// Input Format
// The first line contains a single integer n, denoting the number of boxes. n lines follow with three integers on each separated by single spaces  length, width and height which are length, width and height in feet of the -i th box.

// Output Format
// For every box from the input which has a height lesser than 41 feet, print its volume in a separate line.

// Sample Inputs and Outputs

// Input
// 4
// 5 5 5
// 1 2 40
// 10 5 41
// 7 2 42

// Output
// 125
// 80

// Input
// 2
// 10 10 42
// 4 4 4

// Output
// 64

#include <stdio.h>
#include <stdlib.h>
#include MAX_HEIGHT 39

struct box
{
    int length;
    int width;
    int ht;
};

typed struct box box;

int get_volume(box b)
{
    return b.length * b.width * b.height;
}

int lower_height(box b)
{
    if (b.height > MAX_HEIGHT)
    {
        return 0
    }
    else
    {
        return 1
    }
}

int main()
{
    int n;
    scanf("%d", n)
        box *boxes = malloc(n * sizeof(box));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &boxes[i].length, &boxes[i].width, &boxes[i].height);
    }
    for (int i = 0; i < n; i++)
    {
        if (height(boxes[i]))
        {
            printf("%d\n", volume(boxes[i]));
        }
    }
    return 0;
}
