


	#include <stdio.h>

	int main()
	{ int a,b,i,j,k,n,s;
		char str[101];
		scanf("%d",&n);
		scanf("%s",str);
		scanf("%d",&k);
		for (i=0;i<n;i++)
		{   if(str[i]>=65 && str[i]<=90 )
			{str[i]=str[i]+k;
			if (str[i]>90&&str[i]<=116)
			{str[i]=str[i]-26;}
			while (str[i] >90)
			{str[i]=str[i]-26;}
			}
			
				
			 if ( str[i]>=97&&str[i]<=122)
			{str[i]=str[i]+k;
				while (str[i] >122)
			{str[i]=str[i]-26;}
				
				}
		printf("%s",str);
		return 0;
		
}
			
			 
		
		

