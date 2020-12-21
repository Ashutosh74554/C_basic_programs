//vowel or consonant
#include<stdio.h>
void main()
{
	char c;
	printf("Enter an alphabet: ");
	scanf("%c", &c);
	if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
	{
		printf("Vowel");
	}
	else
	{
		printf("Consonant");
	}
}
