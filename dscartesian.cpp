#include <stdio.h>
int main(){
	int na,nb,i,j,seta[10],setb[10];
	printf("Enter the no.of  elements of firstt set:");
	scanf("%f",&na);
	printf("Enter the  elements for firstt set:");
	for(i=0;i<na;i++){
		scanf("%d",&seta[i]);
	}
	printf("Enter the no of element of second set :");
	scanf("%d",&nb);
	printf("Enter the element for set B :");
	for(j=0;j<nb;j++){
		scanf("%d",&setb[i]);
	}
	printf("{");
	for (i=0;i<na;i++){
		for(j=0;j<nb;j++){
			printf("%d %d",seta[i],setb[j]);
			if(i!=na-1 || j!=nb-1){
				printf(" , ");
			}
		}
	}
printf(" } ");
return 0;
}
