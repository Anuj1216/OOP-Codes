#include<stdio.h>
int main(){
	int seta[10],setb[10],na,nb,i,j;
	printf("Enter the number of  element in  set A  : ");
	scanf("%d",&na);
	printf("Enter the element for set A : ");
	for(i=0;i<na;i++){
		scanf("%d",&seta[i]);
	}
	printf("Enter the no of element in  set B  : ");
	scanf("%d",&nb);
	printf("Enter the element for set B : ");
	for(i=0;i<nb;i++){
		scanf("%d",&setb[i]);
	}
	printf("{");
	for(i=0;i<na;i++)
	{
		for(j=0;j<nb;j++){
			printf("%d,%d",seta[i],setb[j]);
			
	if(i!=na-1 || j!= nb-1){
		printf(",");
	}
		}
	}
	printf("}");
	return 0;	
}