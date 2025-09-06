#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string>
using namespace std;
int main(){
//1st type of decalartion of an ARRAY
//in this row and column are created in STACK
cout<<"Type 1 array "<<endl;
int a[3][4]={{1,2,3,4},{2,4,6,8},{1,3,5,7}};
for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
        cout<<a[i][j]<<" ";
    }
    cout<<endl;
}
//2nd type of decalartion of an ARRAY
//here row's array are created in STACK and column's array are created in HEAP
//array's row in STACK pointing to column's array in HEAP
int *b[3];
cout<<"Type 2 array "<<endl;
// 1st ways to intialize the columns array one by one b[0],b[1],b[2]
// b[0]=new int[4];
// b[1]=new int[4];
// b[2]=new int[4];
//here 2nd way to intialize
 for(int i = 0; i < 3; i++) {
        b[i] = new int[4];
    }
int val=1;
for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
        b[i][j]=val++;
    }
}
for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
        cout<<b[i][j]<<" ";
    }
    cout<<endl;
}
//3rd type of decalartion of an ARRAY
//here row's array and column's array both are created in HEAP
int **c;
cout<<"Type 3 array "<<endl;
c=new int*[3];
//1st ways to intialize the columns array one by one c[0],c[1],c[2]
// c[0]=new int[4];
// c[1]=new int[4];
// c[2]=new int[4];
//here is second way to intialize
for(int i = 0; i < 3; i++) {
        c[i] = new int[4];
    }
int valu=1;
for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
        c[i][j]=valu++;
    }
}
for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
        cout<<c[i][j]<<" ";
    }
    cout<<endl;
}
return 0;
}
