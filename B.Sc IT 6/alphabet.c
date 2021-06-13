#include<stdio.h>
int main()
{
	char ch;
	printf("enter any character\n");
	scanf("%c", &ch);
	if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
{
	printf("character is an alphabet\n");
	
}
else{
	printf("otherwise character is not an alphabet\n");
} 
return 0;

}
