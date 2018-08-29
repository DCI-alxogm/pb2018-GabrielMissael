//Creado por Gabriel Missael Barco el 29/08/18
//Incluimos las librerias necesarias
#include <stdio.h>
#include<math.h>

void conversion(int t){
	//depende de que haya elegido el usuario, se hacen distintas conversiones
	double x=0.0, y=0.0, z=0.0, r=0.0, a=0.0, l=0.0, X=0.0, Y=0.0, Z=0.0, aux=0.0, ang=0.0, c=0, f=0, k=0, C=0;
	switch(t){
		case 1:
			//solicitamos la temperatura en grados celsius al usuario
			printf(" \n Escriba una tempreatura en grados celsius: ");
			scanf("%lf", &c);
	
			//hacemos las conversiones
			f = (c*1.8)+32;
			k = c + 273.15;
	
			//imprimimos los resultados
			printf("\n Fahrenheit: %lf \n Kelvin: %lf \n", f, k);
	
			//Comprobamos	
			C = (f - 32)/1.8;
			printf("Comprobación %lf == %lf \n", c, C);
			break;
		case 2:
			//preguntamos el valor de las coordenadas cartesianas
			printf(" \n Introduce los valores de x, y, z: ");
			scanf("%lf %lf %lf", &x, &y, &z);
	
			//realizamos las operaciones correspondientes
			aux = (x*x)+(y*y)+(z*z);
			r = sqrt(aux);
			aux = (sqrt(x*x+y*y))/z;
			//printf("\n prueba = %lf \n", aux);
			a = atan(aux);
			l = atan (y/x);
			printf("De cartesianas a esfericas obtenemos que \n r= %lf \n a=%lf \n l=%lf \n", r, a, l);	
			X = r*sin(a)*cos(l);
			Y = r*sin(a)*sin(l);
			Z = r*cos(a);
			printf("\n De coordenadas esfericas a cartesianas obtenemos \n X= %lf \n Y=%lf \n Z=%lf \n", X, Y, Z);
			break;
		case 3 :
			printf("\n Introduce los valores de x y y: ");
			scanf("%lf %lf", &x, &y);
			r = sqrt(x*x+y*y);
			if(x!=0){
				ang = atan(y/x);
				ang = (ang*180)/3.1416;
			}
			else{
				ang = 90;
			}
			if(x<0 && y>0){
				ang = 180+ang;
			}
			else if(x<0 && y<0){
				ang = ang+180;
			}
			else if(x>0 && y<0){
				ang = 360+ang;
			}
			printf("\n La distancia al punto es %f con un angulo de %f \n", r, ang);
			break;
		default :
			printf("Opcion inexistente \n");
		}
	}


int main(){

//declaramos las variables necesarias
int w;


//solicitamos al usuario que eliga la opcion correspondiente
printf("Hola, por favor elije una opcion: \n (1) Convertir grados celsius a farenheit y a kelvin \n (2) convertir coordenadas cartesianas a esfericas \n (3) convertir coordenadas cartesianas a polares \n Numero de opción: ");
scanf("%i", &w);

//Mandamos el valor introducido a una funcion, para que se ejecute el subprograma correspondiente
conversion(w);

//declaramos la cadena de caracteres para preguntarle al usuario si quiere hacer alguna otra operación
char ans[3];

//le preguntamos al usuario si quiere hacer otra operaciín, si es asi, entrara en un while, y mientras responda 'si, se hará el mismo proceso que lo que hicimos anteriormente
printf("¿Quieres hacer algun otro calculo? Escribe 'si' o 'no': ");
scanf("%s", &ans);

//puede ser 'si' o 'SI', y podrá entrar al ciclo
while(ans[0]=='s' || ans[0]=='S'){
	//preguntamos al usuario que quiere hacer	
	printf("Por favor elije una opcion: \n (1) Convertir grados celsius a farenheit y a kelvin \n (2) convertir coordenadas cartesianas a esfericas \n (3) convertir coordenadas cartesianas a polares \n Numero de opción: ");
	scanf("%i", &w);
	//mandamos lo que solicitó el usuario a la funcion 'conversion()'
	conversion(w);	
	//preguntamos si quiere seguir ejecutando operaciones
	printf("¿Quieres hacer algun otro calculo? Escribe 'si' o 'no': ");
	scanf("%s", &ans);	
}

printf("\n Adiós, tenga un buen día \n");

return 0;
}
