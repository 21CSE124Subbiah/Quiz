#include<stdio.h>
#include<math.h>

void square(float a){
	float result;
	result=a*a;
	printf("result:%f",result);
	
}

void circle(float r){
	float result;
	result=3.14*r*r;
	printf("result:%f",result);
	
}

int main(){
	char shape;
	float a,r;
	printf("Enter the shape (for Square 'S' and for Circle 'C'):");
	scanf("%c",&shape);
	if(shape=='S'||shape=='s'){
		printf("Enter side:");
		scanf("%f",&a);
		square(a);
	}
	else if(shape=='C'||shape=='c'){
		printf("Enter radius:");
		scanf("%f",&r);
		circle(r);
	}
	else{
		printf("wrong input");
	}
	getchar();
	return 0;
}
