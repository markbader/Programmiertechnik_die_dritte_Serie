# include <stdio.h>
# include <stdlib.h>

int main(int argc, char * argv[]){
	if (argc >1){
		int N = atoi(argv[1]);
		int i = 0;
		for (i=1; i<N; i++){
			if(N%i==0){
				printf("%d\n", i);
			}
		}
	}
	else{
		printf("Fehler: Es muss ein Parameter übergeben werden.\n");
	}
	return 0;
}
