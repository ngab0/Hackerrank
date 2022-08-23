#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n, a, b, c, d, e;
    int sum = 0;
    
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    a = ((((n % 10000)%1000)%100)%10);
    b = (((((n % 10000)%1000)%100) - a )/10);
    c = ((((n % 10000)%1000) - ((b * 10) + a))/100);
    d = (((n % 10000) - ((c * 100) + (b*10) + a))/1000);
    e = n / 10000;
    
    sum = a + b + c + d + e;
    printf("%d\n", sum);
    
    return 0;
}
