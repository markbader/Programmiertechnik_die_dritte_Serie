# include <stdio.h>
# include <stdlib.h>

int ist_prim(unsigned long long n){
	unsigned long long i;
	for (i=2; i*i <= n; i++){
		if (n%i == 0){
			return 0;
		}
	}
	return 1;
}

int factorial_factors(int n){
	int i;
	if (n <= 1){
		return 0;
	}
	else{
		for (i=2; i <= n; i++){
			if (ist_prim(i) == 1){
				int j;
				int k = 0;
				for (j=i; j<=n; j=j*i){
					k += n/j;
				}
				if (k != 0){
					printf("%d^%d\n", i, k);
				}
			}
		}
	return 1;
	}
}

int main(int argc, char * argv[]){
	if (argc > 1) {
		int n = atoi(argv[1]);
		factorial_factors(n);
	}
}

