//////��ǻ���а� 20190975 ��ȿ��
#include <stdio.h>
int strToInt(char s[])
{
	int i, num = 0;

	for (i = 0; s[i] != '\0'; i++)
		num = num * 10 + s[i] - '0'; //'0'�� -48���� �� ���� �ڵ�!

	return num;

}
int main(void)
{
	char word[80];

	printf("Enter a word: ");
	scanf("%s", word);

	printf("The number is %d\n", strToInt(word));
}