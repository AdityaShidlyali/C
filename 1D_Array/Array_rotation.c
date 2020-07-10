#include <stdio.h>
#include <stdlib.h>

void left_rot ( int *a, int n, int rot ) {
    int i, j;
    for ( i = 1 ; i <= rot ; i++ ) {
        int temp = a[0];
        for ( j = 0 ; j < n ; j++ ) {
            a[j] = a[j+1];
        }
        a[n-1] = temp;
    }
}

void right_rot ( int *a, int n, int rot ) {
    int i, j;
    for ( i = 1 ; i <= rot ; i++ ) {
        int temp = a[n-1];
        for ( j = n-1 ; j >= 0 ; j-- ) {
            a[j] = a[j-1];
        }
        a[0] = temp;
    }
}

int main() {
    int n;
    printf("Enter number of elements : ");
    scanf("%d", &n);

    int *a = (int *) calloc(n, n*sizeof(int));
    int i;
    printf("Enter %d number of elements :\n", n);
    for ( i = 0 ; i < n ; i++ ) {
        scanf("%d", &a[i]);
    }

    printf("\n\n---Before rotation---\n");
    for ( i = 0 ; i < n ; i++ ) {
        printf("%d ", a[i]);
    }

    fflush(stdin);
    printf("\n\nEnter \"l\" for left rotation or \"r\" for rotation : ");
    char ch;
    scanf("%c", &ch);

    printf("\n\nEnter how many number of rotations you want to perform : ");
    int rot;
    scanf("%d", &rot);

    if ( ch == 'l' || ch == 'L') {
        left_rot(a, n, rot);
    }
    else {
        right_rot(a, n, rot);
    }

    printf("\n\n---After rotation---\n");
    for ( i = 0 ; i < n ; i++ ) {
        printf("%d ", a[i]);
    }

    printf("\n");
    return 0;
}
