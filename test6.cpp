#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[]){
	
	int i = 0;
	// go through each string in argv
	// why am I skipping argv[0]?

	// let's make our own array of strings
	char *states[]={
		"California", "Aregon",
		"Washington", "Taxas"
	};
	int num_states = 4;
	for (i=0; i< num_states; i++){
		printf("state %d: %s\n",i+1,states[i]);
	}
	return 0;
}
