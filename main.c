#include <stdio.h>

int main() {
	
	printf("result:%i\n",fibonacci(8));
	separate(324);
	printf("Segundos restantes: %i\n", days (180000));	
	printf("Segundos restantes: %i\n", horas (180000));
	printf("Segundos restantes: %i\n", minutos (180000));	
	printf("Segundos restantes: %i\n", segundos (180000));	
	return 0;

}
int fibonacci(int n) {
	
	int i;
	int x = 0;
	int y = 1;
	int result = 0;

		for(i = 1; i <= n; i = i + 1) {

	result = x + y;
	x = y;
	y = result;
		}	
	return result;
}
int separate(int a) {

	int c = 0;//centenas
	int d = 0;//decenas
	int u = 0;//unidades
	
	if(a >= 100) {
		c = a/100;
	printf("%i centenas\n", c);
}
	if(a >= 10) {
		d = (a -c * 100) / 10;
	printf("%i decenas\n", d);
}
	if (a >= 1) {
		u = a -c * 100 - d *10;
	printf("%i unidades\n", u);
}
	return 0;	

}
int days (int a) {
	int b = 86400;
	int dias = a / b;

	printf("son %i dias\n", dias);
	return a - dias*b;
}
int horas (int a) {
	int b = 3600;
	int horas = a / b;

	printf("son %i horas\n", horas);
	return a - horas*b;
}
int minutos (int a) {
	int b = 60;
	int minutos = a / b;

	printf("son %i minutos\n", minutos);
	return a - minutos*b;
}
int segundos (int a) {
	int b = 1;
	int segundos = a / b;

	printf("son %i segundos\n", segundos);
	return a - segundos*b;
}
float velocidad (float tiempo, float distancia) {
	
	float v = distancia/tiempo;
	printf("%f m/s\n", v);
	return v;
}
float timepo (float velocidad, float distancia) {
	
	float t = distancia/velocidad;
	printf("%f s\n", t);
	return t;
}
float distancia (float velocidad, float tiempo) {

	float d = velocidad*tiempo;
	printf("%f m\n", d);
	return d;
}


