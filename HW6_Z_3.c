#include <stdio.h>
int main(void)
{
	char a[20], b[20], c[40];
	int i, j = 0, k = 0;

	scanf("%s %s", a, b);
    
    for (i = 0; i < 40; i++){ // �� a[j] != '\0' && b[k] != '\0'; �̰� ���α׷��ӽ� ���𿡼� ȿ���� 0������ ���ñ�....
        if (a[j] <= b[k]){
            c[i] = a[j];
            j++;
        }
        else {
            c[i] = b[k];
            k++;
        }

		if (a[j] == '\0') {//a�迭 �� ����
			while (b[k] != '\0'){
				i++;
				c[i] = b[k];
				k++;				
			}
			break;									//���ǹ��� ���� �ּ��� ������ break�ʿ� ����
			
		}
		if (b[k] == '\0'){ //b�迭 �� ����
			while (a[j] != '\0'){
				i++;
				c[i] = a[j];
				j++;	
			}
			break;
		}
    }
    c[i+1] = '\0';
    
    for (i = 0; c[i] != '\0'; i++){
        printf("%c", c[i]);
    }

}