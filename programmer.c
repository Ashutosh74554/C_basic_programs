//programmer
#include<stdio.h>
#include<string.h>
void main()
{
	char name[20], lang[10], lang1[10]="C", lang2[10]="C++";	
	printf("Enter your name: ");
	scanf("%s", &name);
	printf("Hello, %s", name);
	printf("\nWhat language do you work in: ");
	scanf("%s", &lang);
	if("strcmp(lang,lang1)=%d")
		printf("You are a C developer");
	else if("strcmp(lang,lang2)=%d")
		printf("You are a C++ developer");
	else 
		printf("I cant recognise your language");
}
