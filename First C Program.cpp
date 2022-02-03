#include <stdio.h>
#include <math.h>
#include <windows.h>
#include "First C Program.h"

int main(void)
{

	int a;
	int b;
	int c;
	int d;
	int e;

	printf( "Velkommen til halvdelen af (a*b+c/d PROCENT e) udregneren\n\n\n" );

	printf("Hvad skal a vaere?\n"); //første prompt for at finde int a
	scanf_s("%d", &a);

	printf("Hvad skal b vaere?\n");
	scanf_s("%d", &b);

	printf("Hvad skal c vaere?\n");
	scanf_s("%d", &c);

	printf("Hvad skal d vaere?\n");
	scanf_s("%d", &d);

	printf("Hvad skal e vaere?\n");
	scanf_s("%d", &e);

	int svar; //ny int til svar
	svar = (a * b + c / d % e) / 2; //hvordan svar skal udregnes

	printf("Svaret er %d\n", svar); //print af svaret til console

}