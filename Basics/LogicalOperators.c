# include <stdio.h>

int main() {
    int IsSunday=0;
    int IsSnowing=1;
    printf("%d \n",IsSunday && IsSnowing);

    int IsMonday=1;
    int IsRaining=0;
    printf("%d\n",IsMonday || IsRaining);
    
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    printf("%d",x>9 && x<100);
}