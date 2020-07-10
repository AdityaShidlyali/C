/* its a five digit number where
	-1st digit denotes how many zeros are there in number
	-2nd digit denotes how many ones are there in number
	-3rd digit denotes how many twos are there in number
	-4th digit denotes how many threes are there in number
	-5th digit denotes how many fours are there in number
*/

#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, count[5], k = 0, act_count[5], flag = 0;
    for(int i = 10000 ; i < 100000 ; i++) {
        n = i;
        k = 4;
        for(int z = 0 ; z < 5 ; z++)
            act_count[z] = 0;
        while(n != 0) {
            count[k] = n % 10;
            if(count[k] == 0)
                act_count[0]++;
            if(count[k] == 1)
                act_count[1]++;
            if(count[k] == 2)
                act_count[2]++;
            if(count[k] == 3)
                act_count[3]++;
            if(count[k] == 4)
                act_count[4]++;
            k--;
            n = n / 10;
        }
        for(int z = 0 ; z < 5 ; z++)
            if(act_count[z] == count[z]) {
                flag++;
            }
        if(flag == 5) {
            printf("%d",i);
            exit(0);
        }
        flag = 0;
        n = i;
    }
    return 0;
}
