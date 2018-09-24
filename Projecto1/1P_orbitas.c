#include <stdio.h>
#include <math.h>

int main(){
	FILE *read;
	read = fopen("lee.txt", "r");

	int N;
	char planeta[20];
	double m, r, G, xo, yo, zo, vx, vy, vz, T, h;
	G=4.0*pow(3.14159265359,2);

	fscanf(read, "%i", &N);
	
	for(int i=0 ; i< N ; i++){
		fscanf(read, "%s", &planeta);
		fscanf(read, "%lf %lf %lf %lf %lf %lf", &xo, &yo, &zo, &vx, &vy, &vz);
		fscanf(read, "%lf %lf %lf", &m, &T, &h);
		
		

		FILE *write;
		write = fopen(planeta, "w");
		fprintf(write, "%lf %lf %lf %lf %lf %lf", xo, yo, zo, vx, vy, vz);
	}
	
	return 0;
}
