#include <stdio.h>
#include <stdlib.h>
int main(void){
	double random;
	int final,k;
	double x=0;
	for(k=0;k<=10000;k++){
		srand48(k);
		x = 0;
		for(final=0; final <= 500;final++){
			float1 = drand48()
			if(float1<0.5){
				x = x - float1
			}
			else{
				x = x + float1
			}
		}
		FILE*out = fopen ("random_walks.txt", "w+")
		fprintf(out, "%f\n",x);
	}
			
		
