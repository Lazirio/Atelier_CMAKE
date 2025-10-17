#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "./../include/calculator.h"

int main(int argc, char *argv[]){
	if (argc < 3) {
		printf("Erreur de parametres");
		return 0;
	}

	char* op = argv[1];
	double r = 0;

	if (strcmp(op, "car") == 0) {
		if (argc != 3) {
			printf("Erreur de parametres");
			return 0;
		}
		r = _car(atof(argv[2]));
		printf("%lf", r);
		return 0;
	}

	if (argc != 4) {
		printf("Erreur de parametres");
		return 0;
	}

	double a = atof(argv[2]);
	double b = atof(argv[3]);

	if (strcmp(op, "add") == 0) {
		r = _add(a, b);
		printf("%lf", r);
	}
	else if (strcmp(op, "sub") == 0) {
		r = _sub(a, b);
		printf("%lf", r);
	}
	else if (strcmp(op, "mul") == 0) {
		r = _mul(a, b);
		printf("%lf", r);
	}
	else if (strcmp(op, "div") == 0) {
		r = _div(a, b);
		printf("%lf", r);
	}
	else {
		printf("Erreur de parametres");
	}
	return 0;
}
