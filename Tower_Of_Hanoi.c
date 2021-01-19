#include <stdio.h>
#include<stdlib.h>

void towerOfHanoi(int n, char source, char auxiliary, char destination) {
    if(n==0){
        return;
    }
	if(n==1){
        printf("Source: %c Destination: %c\n",source,destination);
        return;
    }

    towerOfHanoi(n-1,source,destination,auxiliary);
    printf("Source: %c Destination: %c\n",source,destination);
    towerOfHanoi(n-1,auxiliary,source,destination);
}



int main() {
    int n;
    printf("Enter the number of discs: ");
    scanf("%d",&n);
    towerOfHanoi(n, 'a', 'b', 'c');
}

