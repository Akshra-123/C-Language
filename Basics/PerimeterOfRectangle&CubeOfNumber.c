/*
1) program to calculate perimeter of rectangle
take sides a and b from user
2) program to calculate the cube of a number
*/
# include <stdio.h>
int main() {
    int length, breadth,n;
    printf("Enter the length:");
    scanf("%d",&length);
    printf("Enter the breadth:");
    scanf("%d",&breadth);
    printf("Perimeter is:%d \n",2*(length+breadth));
    printf("Enter the number:");
    scanf("%d",&n);
    printf("The cube of number is: %d",n*n*n);
}