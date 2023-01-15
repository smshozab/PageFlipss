#include<stdio.h>
int main(){
	int pages, pageno, flips;
	printf("Input the number of pages in the book? \n");
	scanf("%d", &pages);
	printf("Input the page number to find in the book? \n");
	scanf("%d", &pageno);
	if ((pageno) <= (pages/2))
	{
        flips=((pageno)/2);
        printf("Flips required is: %d", flips);
    }
    else if (pageno>pages/2 && pageno%2==0)
	{
    	flips=((pages-pageno)/2);
    	printf("Flips required is: %d", flips);
	}
	else 
	{
		flips=((pages-pageno)/2)+1;
		printf("Flips required is: %d", flips);
		}	
}