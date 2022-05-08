#include <stdio.h>
#include <stdarg.h>
#include <conio.h>

/*
	Source by AlphaCodingSkills (https://www.alphacodingskills.com)
	Modified For Learn by RK
	I.D.E : VS2022
*/

void ScanFormatted(const char* str, const char* format, ...) {
	va_list args;
	va_start(args, format);
	vsscanf(str, format, args);
	va_end(args);
}

int main() {
	char mystr[] = "John  25  3000";
	char name[20];
	int age, salary;

	ScanFormatted(mystr, "%s %i %i", name, &age, &salary);
	printf("%s is %i years old and earns %i dollars.\n", name, age, salary);

	_getch();
	return 0;
}