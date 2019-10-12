//////컴퓨터학과 20190975 신효경
#include <stdio.h>
int strToInt(char s[])
{
	int i, num = 0;

	for (i = 0; s[i] != '\0'; i++)
		num = num * 10 + s[i] - '0'; //'0'이 -48보다 더 좋은 코드!

	return num;

}
int main(void)
{
	char word[80];

	printf("Enter a word: ");
	scanf("%s", word);

	printf("The number is %d\n", strToInt(word));
}