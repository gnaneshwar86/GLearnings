#include<stdio.h>
int main() {
int x = 5, y = 10, z= 15;
if (x < y&& y<z || x>y && y>z)
printf("%d", y);
else
printf("%d", x);
return 0;
}