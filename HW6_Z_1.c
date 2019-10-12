//////컴퓨터학과 20190975 신효경
#include <stdio.h>
void copyReversedString(char a[], char b[])
{
	int i, j;

	for (j = 0; b[j] != '\0'; j++); // count따로 계산 할 필요 없음.
	//len = j 의미 분명해짐

	for (i = j-1; i >= 0; i--) //마지막에 NULL들어가야되니까 count-1
		a[j-1-i] = b[i];	
	a[j] = '\0'; //문자열 마지막에 NULL넣어주어야 함!
	return;
}
int main(void) 
{
	char word[20];
	char reversedWord[20];

	printf("Enter a string : ");
	scanf("%s", word);

	copyReversedString(reversedWord, word);
	printf("%s\n", reversedWord);
}