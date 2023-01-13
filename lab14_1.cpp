#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << "Arithmetic Mean = " << B[0];
    cout << "\nStandard Deviation = " << B[1];
    cout << "\nGeometric Mean = " << B[2];
    cout << "\nHarmonic Mean = " << B[3];
    cout << "\nMax = " << B[4];
    cout << "\nMin = " << B[5];
    return 0;
}
void stat(const double A[] ,int n ,double B[]){
    int i=0 ;
    double sum=0 , x=0 , sumsd=0 , res=1 , quo=0 , max=0 , min=100;
    double y[100] ;
    while(i < n){
        sum=sum+A[i] ;
        i++ ;
        }
    B[0] = sum/n ;

    i=0 ;
    while(i < n){
        x = A[i]-B[0] ;
        y[i]= x*x ;
        sumsd = sumsd+y[i] ;
        i++ ;
        }
    B[1] = sqrt(sumsd/n) ;

    i=0 ;
    while(i < n){
        res = res*A[i] ;
        i++ ;
        }
    B[2] = pow(res,1.0/n) ;

    i=0 ;
    while(i < n){
        quo = quo+(1.0/A[i]) ;
        i++ ;
        }
    B[3] = n/quo ;

    i=0 ;
    while(i < n){
        if(A[i]>max){
            max=A[i] ;
        }
        if(A[i]< min){
            min=A[i] ;
       }
    i++ ;
    }
    B[4]=max ;
    B[5]=min ;
}