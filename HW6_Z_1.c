//////��ǻ���а� 20190975 ��ȿ��
#include <stdio.h>
void copyReversedString(char a[], char b[])
{
	int i, j;

	for (j = 0; b[j] != '\0'; j++); // count���� ��� �� �ʿ� ����.
	//len = j �ǹ� �и�����

	for (i = j-1; i >= 0; i--) //�������� NULL���ߵǴϱ� count-1
		a[j-1-i] = b[i];	
	a[j] = '\0'; //���ڿ� �������� NULL�־��־�� ��!
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