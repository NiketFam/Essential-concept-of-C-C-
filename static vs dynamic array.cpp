#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string>
using namespace std;
int main(){
int a[5]={3,54,89,23,43};
int *p;
p=new int[5];
p[0]=3;
p[1]=5;
p[2]=45;
p[3]=98;
p[4]=34;
cout<<"static array "<<endl;
for(int x:a){ // this type of format work only allow in STATIC ARRAY
    cout<<x<<endl; //but if you want like this you have to take help of 'vector'
}
cout<<"dynamic array "<<endl;
for(int i=0; i<5;i++){ 
    cout<<p[i]<<endl;
}
return 0;
}
