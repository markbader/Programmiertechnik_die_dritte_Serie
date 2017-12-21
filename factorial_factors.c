# include <stdio.h>
# include <stdlib.h>

unsigned long long fak(int n){
	if (n < 0){
		printf("Fehler: n! ist ein Operator für positive n.\n");
		return 0;
	}
	else if (n <= 1){
		return 1;
	}
	else{
		return n*fak(n-1);
	}
}

int ist_prim(unsigned long long n){
	unsigned long long i;
	for (i=2; i < n/2; i++){
		if (n%i == 0){
			return 0;
		}
	}
	return 1;
}

int factorial_factors(unsigned long long n){
	unsigned long long i;
	if (n <= 1){
		return 0;
	}
	else{
		for (i=2; i <= n; i++){
			if (n%i == 0 && ist_prim(i) == 1){
				printf("%llu\n", i);
				factorial_factors(n/i);
				break;
			}
		}
	}
}

int main(int argc, char * argv[]){
	if (argc > 1) {
		int n = atoi(argv[1]);
		factorial_factors(fak(n));
	}
}

