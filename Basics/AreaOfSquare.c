# include <stdio.h>
int main() {
    int side;
    int radius;
    printf("Enter side of square:");
    scanf("%d", &side);
    printf("The area of square: %d \n",side*side);
    printf("Enter radius of circle:");
    scanf("%d",&radius);
    printf("The area of circle: %f",3.14*radius*radius);
}