#include<stdio.h>
#include<stdlib.h>

int main(void){
	int a = 12;
	
	printf("%d",a+=a-=a*a); // 4, 1

	return 0;
}

// a+=(a-=a*a)
// a+=(a-= (a*a));
// a+=(a-= 144)

// a = a+ ( a=a-(a*a))
// a = a + ( a = a - a^2)
// a = 12 + ( -132// = 12 - 144) -> -120