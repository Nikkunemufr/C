#################################
#	Created by Alexis MORTELIER	#
#		All Right Reserved		#
#################################

#include <stdio.h>
#include <stdlib.h>

int elimine(int *tab, int c, int n){
 	int *p1, *p2;
	for (p1=p2=tab; p1<tab+n; p1++){
		*p2=*p1;
		if (*p2!=c)
		p2++;
	}
	n=p2-tab;
	return n;
}

void affiche_de_pd(int  *tab, int n){
 	for (int i=0;i<n;i++)
		printf("%d",*(tab+i));
	printf("\n");
}


int main (){
	int A[] = {1,9,4,6,9,9,6,9,3};
	int n = 9;

	n = elimine(A,9,n);
	affiche_de_pd(A,n);
}
