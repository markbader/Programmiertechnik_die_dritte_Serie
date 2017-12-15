# include <stdio.h>
# include <stdlib.h>

unsigned long long fak(unsigned long long n){
	if (n<=0){
		return 0;
	}
	else if (n==1){
		return 1;
	}
	else{
		return n*fak(n-1);
	}
}

int ist_prim(unsigned long n){
	long long int i = 2;
	long long int c = 0;
	for (i=2; i<n; i++){
		if (n%i == 0){
			c++;
		}
	}
	if (c==0){
		return 1;
	}
	else{
		return 0;
	}
}

unsigned long int factorial_factors(unsigned long long n){
	long int i = 2;
	if (n<=2){
		return 0;
	}
	else{
		while(n%i != 0 || ist_prim(i)==0){
			i++;
		}
		printf("%ld\n", i);
		factorial_factors(n/i);
	}
}

int main(int argc, char * argv[]) {
	int n = atoi(argv[1]);
	printf("Fakultät: %llu\n",fak(n));
	factorial_factors(fak(n));
}

