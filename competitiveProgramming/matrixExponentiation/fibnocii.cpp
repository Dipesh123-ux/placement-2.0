#include<bits/stdc++.h>
using namespace std;

struct matrix{
    int mat[2][2];
};

matrix mul(matrix A, matrix B){
    matrix C;
    C.mat[0][0] = A.mat[0][0]*B.mat[0][0] + A.mat[0][1]*B.mat[1][0];
    C.mat[0][1] = A.mat[0][0]*B.mat[0][1] + A.mat[0][1]*B.mat[1][1];
    C.mat[1][0] = A.mat[1][0]*B.mat[0][0] + A.mat[1][1]*B.mat[1][0];
    C.mat[1][1] = A.mat[1][0]*B.mat[0][1] + A.mat[1][1]*B.mat[1][1];

    return C;
}

 matrix identity(){
    matrix I;
    I.mat[0][0] = 1;
    I.mat[0][1] = 0;
    I.mat[1][0] = 0;
    I.mat[1][1] = 1;
    return I;
 }

 matrix power(matrix A,int N){
    if(N == 0){
        return identity();
    }
    matrix X = power(A,N/2);
    if(N%2 == 0){
        return mul(X,X);
    }
    else{
        return mul(mul(X,X),A);
    }
 }

int get_Nth_fib(int N){
    matrix fib;
    fib.mat[0][0] = 1;
    fib.mat[0][1] = 1;
    fib.mat[1][0] = 1;
    fib.mat[1][1] = 0;
    return power(fib,N).mat[0][0];
}

int main(){
     int n;
     cin>>n;
     cout<<get_Nth_fib(n);
}