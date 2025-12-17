
// 4. Write C program for Pascal triangle.
// 5. Write C program to find sum and average of n integer using linear array.
// 6. Write C program to perform addition, multiplication, transpose on matrices.
// 7. Write C program to find Fibonacci series of iterative method using user-defined function.
// 8. Write C program to find factorial of n by recursion using user-defined functions.
// 9. Write C program to perform following operations by using user defined functions:
// (i) Concatenation (ii) Reverse (in) String Matching
// 10. Write C program to find sum of n terms of series: n - n*2/2! + n*3/3! - n*4/4! +
// 11. Write C program to interchange two values using (i). Call by value.
// (in). Call by reference.
// 12. Write C program to sort the list of integers using dynamic memory allocation.
// 13. Write C program to display the mark sheet of a student using structure.
// 14. Write C program to perform following operations on data files:
// (i)
// Read from data file.
// (ii)
// Write to data file.
// 15. Write C program to copy the content of one file to another file using command line argument.

// sizeof()=%zu
#include <stdio.h>
#include <conio.h>

int main()
{
    int a, b, c;

    printf("Enter three integers and find largest among:- ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c)
    {
        printf("%d is largest", a);
    }
    if (b > a && b > c)
    {
        printf("%d is largest", b);
    }
    if (c > a && c > b)
    {
        printf("%d is largest", c);
    }
}