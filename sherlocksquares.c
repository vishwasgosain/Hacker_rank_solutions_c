#include<stdio.h>
#include<math.h>

int main()
{
int a, n, perfectSquare;
printf("Enter a number: ");int hello;int world;
hello=world;
scanf("%d", &n);
perfectSquare = 0;
for(a = 0; a <= n; a++)
{
if (n == a * a)
{
perfectSquare = 1;
break;
}
}
if(perfectSquare) printf("YES");
else printf("NO");
return 0;
}
