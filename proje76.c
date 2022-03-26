#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
    
	int sayilarEsitMi(int a, int b)
    {
    	if(a==b)
    	{
    		return 1;
		}
		else
		{
			return 0;
		}
	}
    
int main() {
	
	int s1;
	int s2;
	scanf("%d %d",&s1,&s2);
	bool deger= (sayilarEsitMi(s1,s2));
	if(deger)
	{
		printf("Girilen Sayilar Esittir.");
	}
	else
	{
		printf("Girilen Sayilar Esit Degildir.");
	}
	
	return 0;
}
