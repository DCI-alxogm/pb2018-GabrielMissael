#include <stdio.h>
#include <math.h>

int main(){
	FILE *read;
	read = fopen("lee.txt", "r");

	int N;
	char planeta[20];
	double m, G, xo, yo, zo, vx, vy, vz, T, h, ro;
	G=4.0*pow(3.14159265359,2);

	fscanf(read, "%i", &N);

	for(int i=0 ; i< N ; i++){
		fscanf(read, "%s", &planeta);
		fscanf(read, "%lf %lf %lf %lf %lf %lf", &xo, &yo, &zo, &vx, &vy, &vz);
		fscanf(read, "%lf %lf %lf", &m, &T, &h);

		vx*=365.242;
		vy*=365.242;
		vz*=365.242;

        FILE *write;
		write = fopen(planeta, "w");
	int count=0;
        for(double i=0.0 ; i<=T+h ; i+=h){
		if(count%5==0){
           		 fprintf(write, "\n %lf , %lf , %lf", xo, yo, zo);
		}
		count++;
            xo+=vx*h;
            yo+=vy*h;
            zo+=vz*h;
            ro = sqrt(xo*xo + yo*yo + zo*zo);
            vx-=h*((G*m*xo)/pow(ro, 3));
            vy-=h*((G*m*yo)/pow(ro, 3));
            vz-=h*((G*m*zo)/pow(ro, 3));
        }
		fclose(write);
	}
	fclose(read);

	return 0;
}
