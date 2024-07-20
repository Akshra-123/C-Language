/* 
1)celsius to farenheit
2) Simple interest
*/
# include <stdio.h>
int main() {
    float celsius;
    int p,r,t;
    printf("Enter the temperature in celsius:");
    scanf("%f",&celsius);
    printf("the temperatue in farenheit is: %f \n",(9.0/5.0*celsius) + 32.0);
    printf("Enter the principle:");
    scanf("%d",&p);
    printf("Enter the rate of interest:");
    scanf("%d",&r);
    printf("Enter the time period:");
    scanf("%d",&t);
    printf("The simple interest is: %f",(p*r*t)/100.0);
    return 0;

}