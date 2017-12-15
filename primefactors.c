# include <stdio.h>
# include <stdlib.h>

int main(int argc, char * argv[]){
	int N = atoi(argv[1]);
	int i = 0;

	int count_factors(int z){
		int i = 2;
		//int z = z;
		int c = 0;
		for (i=2; i<z; i++){
			if (z%i == 0){
				c++;
			}
		}
		return c;
	}
	for (i=2; i<N; i++){
		if (N%i==0 && count_factors(i)==0){
			printf("%d\n", i);
		}
	}
}
