#include<iostream>
#include<math.h>
#define Piunder180 5.72957795130823E+001
#define Piover180 1.74532925199433E-002
using namespace std;
int Round(float x){
return (int)(x+0.5);
}
int Trunc(float x){
	return (int)x;
}
float SqrFP(float x){
	return x*x;
}
float Radians(float x){
return x*Piover180;
}
float Degrees(float x){
return x*Piunder180;
}
int Sqr(int x){
	return x*x;
}
float cosD(float x){
	return cos(Radians(x));
}
float sinD(float x){
	return sin(Radians(x));
}
float Power(float base,int exp){
	float num=1;
	for(;exp>0;exp--){
	 num=base*num;
	}
	return num;
}
float Log(float x){
	return (log(x)/log(10));
}
float Exp10(float x){
	return exp(x*log(10));
}
float Sign(float x){
	 return (x>0)?(1):((x<0)? (-1):(0));
}
int intSign(int x){
	 return (x>0)?(1):((x<0)? (-1):(0));
}
int intSqrt(int x){
	int i;
	int y=x;
	for(i=1;x>0;i=i+2){
		x=x-i;
	}
	return (i/2)*(i/2)>y?(i/2-1):(i/2);
}
int intPower(int base,int exp){
	int num=1;
	for(;exp>0;exp--){
	 num=base*num;
	}
	return num;
}
int main(){

return 0;
}
