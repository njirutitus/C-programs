//This is program to demonstrate how loops work
#include<stdio.h>

int area(int w, int l);
int volume(int l,int w, int h);

int main(){
	int n;
	int ar,v;
	
	ar = area(20, 30);
	printf("Area: %d\n",ar);
	
	v = volume(20,10,30);
	printf("Volume: %d\n",v);
	
	return 0;
}

int area(int w,int l){
	int a;
	a = w*l;
	return a;
}

int volume(int l, int w, int h){
	int vol;
	vol = l*w*h;
	
	return vol;
}
