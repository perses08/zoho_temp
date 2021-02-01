#include<iostream>
using namespace std;

void snack_matrix(int a){
    int b = 0, c = a, loop = a;
    
    for (int h = 0; h<loop/2 ;h++){
        
        for (int i = b+1; i <= a ; i++){
            cout << i<<'\t';
        }
        
        b = a;
        a = a+c;
        
        for (int j=a;j>b;j--){
            cout <<j<<"\t"; 
        }
        
        b= a;
        a = a+c;
    }   
}

int main(){
    snack_matrix(4);
    return 0;
}