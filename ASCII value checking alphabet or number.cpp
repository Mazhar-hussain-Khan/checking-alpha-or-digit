/*Name: Mazhar Hussain    Registration No:20MDELE098
Email:20MDELE098@uetmardan.edu.pk */
/*program to find whether a entered character is a number or digit using ASCII values */
#include<stdio.h>
int main(){
	char character;
	printf("enter any alphabet or digit\n");
	scanf("%c",&character);
	if(('a'<=character) && ('z'>=character)  || ('A'<=character) && ('Z'>=character)){
			printf("%c is an alphabet",character);
	}
	else if((48<=character) && (56>=character)){
		printf("%c is any digit",character);}
	else 
		printf("%c is special character",character);
		return 0;
}
