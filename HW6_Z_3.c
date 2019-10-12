#include <stdio.h>
int main(void)
{
	char a[20], b[20], c[40];
	int i, j = 0, k = 0;

	scanf("%s %s", a, b);
    
    for (i = 0; i < 40; i++){ // 왜 a[j] != '\0' && b[k] != '\0'; 이건 프로그래머스 스쿨에서 효율성 0점으로 나올까....
        if (a[j] <= b[k]){
            c[i] = a[j];
            j++;
        }
        else {
            c[i] = b[k];
            k++;
        }

		if (a[j] == '\0') {//a배열 다 넣음
			while (b[k] != '\0'){
				i++;
				c[i] = b[k];
				k++;				
			}
			break;									//조건문이 위의 주석과 같을때 break필요 없음
			
		}
		if (b[k] == '\0'){ //b배열 다 넣음
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