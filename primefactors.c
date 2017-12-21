# include <stdio.h>
# include <stdlib.h>

int is_prime(int z){
	int i;
	int c = 0;
	for (i=2; i<z; i++){
		if (z%i == 0){
			return 0;
		}
	}
	return 1;
}

int main(int argc, char * argv[]){
	if (argc > 1){
		int N = atoi(argv[1]);
		int i = 0;
		for (i=2; i<=N; i++){
			if (N%i == 0 && is_prime(i) == 1){
				printf("%d\n", i);
			}
		}
	}
	else{
		printf("Fehler: Es muss ein Parameter übergeben werden.");
	}
}
