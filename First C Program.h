#pragma once

float regn1()
{
	float a; //float istedet for kommatal
	float b;
	float c;
	float d;
	//	float e;

	printf("Velkommen til (a*b+c/d) divideret med kvadratroden af 255 udregneren\n\nNu med kommatal!!!\n\n");

	printf("Hvad er a?\n"); //første prompt for at finde int a
	scanf_s("%f", &a);

	printf("Hvad er b?\n");
	scanf_s("%f", &b);

	printf("Hvad er c?\n");
	scanf_s("%f", &c);

	printf("Hvad er d?\n");
	scanf_s("%f", &d);
	/*
	printf("Hvad er e?\n");
	scanf_s("%f", &e);
	*/

	float svar; //ny int/float til svar

	svar = (a * b + c / d) / sqrt(255); //hvordan svar skal udregnes

	printf("Svaret er %f\n\n\n", svar); //print af svaret til console

	system("pause");

	double test = 1234567889101;
	char test2 = 'abc';

	printf("test er %f som double og %c\n\n", test, test2);

	system("pause");

	return test;
}

float regn2()
{
	//printf("Test");

	float math1;
	float math2;

	printf("Nu kan du regne potens som x opløftet af y\n");

	printf("Hvad er x?\n");
	scanf_s("%f", &math1);

	printf("Hvad er y?\n");
	scanf_s("%f", &math2);

	float svar = pow(math1, math2);

	return svar;
}