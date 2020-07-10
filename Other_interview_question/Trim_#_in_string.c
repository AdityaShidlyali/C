#include <stdio.h>
#include <string.h>

void del_char ( char *str, int pos ) {
	int i, j, k;
	for ( i = 0 ; i < strlen(str) ; i++ ) {
		if ( str[i] == '#' ) {
			k = i + 1;
			for ( j = i-1 ; j < strlen(str) ; j++, k++ ) {
				str[j] = str[k];
			}
		}
		if ( str[i-1] == '#') {
			i = 0;
		}
		else {
			continue;
		}
	}
}

int main() {
	int i;
	char str[20];
	scanf("%s", str);
	for ( i = 0 ; i < strlen(str) ; i++ ) {
		if ( str[i] == '#' ) {
			del_char (str, i);
		}
	}
	printf("%s", str);
	return 0;
}
