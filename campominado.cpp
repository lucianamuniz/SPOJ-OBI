//campo minado
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>
 
using namespace std;
 
int main(){
 
int i, campos;
int vetor[1000];
 
//saber quantos espa�os armazenar
cin>>campos;
 
//aqui est� povoando o campo minado
for (i = 0; i < campos; i++){
    cin>>vetor[i];
}
 
for (i = 0; i < campos; i++){
    if (vetor[i] == 0){
        if(vetor[i+1]==0 && vetor[i-1]==0){
            cout<<0<<endl;
        }else if (vetor[i+1]==1 && vetor[i-1]==0){
            cout<<1<<endl;
        }else if (vetor[i+1]==0 && vetor[i-1]==1){
            cout<<1<<endl;
        }else if (vetor[i+1]==1 && vetor[i-1]==1){
            cout<<2<<endl;
        }else if(vetor[i+1]!=0 && vetor[i+1]!=1){
            if(vetor[i-1]==1){
                cout<<1<<endl;  
            }else if (vetor[i-1]==0){
                cout<<0<<endl;
            }
        }else if(vetor[i-1]!=0 && vetor[i-1]!=1){
            if(vetor[i+1]==1){
                cout<<1<<endl;  
            }else if (vetor[i+1]==0){
                cout<<0<<endl;
            }
        }
    } else if (vetor[i] == 1){
        if (vetor[i+1]==0 && vetor[i-1]==0){
            cout<<1<<endl;
 
            }else if (vetor[i+1]==0 && vetor[i-1]==1){
            cout<<2<<endl;
 
            }else if (vetor[i+1]==1 && vetor[i-1]==0){
            cout<<2<<endl;
 
            }else if (vetor[i+1]==1 && vetor[i-1]==1){
 
            cout<<3<<endl;
            }else if(vetor[i+1]!=0 && vetor[i+1]!=1){
                if(vetor[i-1]==1){
                cout<<2<<endl;  
                }else if (vetor[i-1]==0){
                cout<<1<<endl;
                }
            }else if(vetor[i-1]!=0 && vetor[i-1]!=1){
                if(vetor[i+1]==1){
                cout<<2<<endl;  
                }else if (vetor[i+1]==0){
                cout<<1<<endl;
                }
            }
         
        }
 
         
}
 
return 0;
 
}
