#include<bits/stdc++.h>
using namespace std;


//for printing the patterns 

int main(){
    int i,j,r,c;
    cout<<"enter no of rows you want for your pattern: ";
    cin>>r;
    
    cout<<"enter no of coulms you want for your pattern: ";
    cin>>c;
    
    for(i=0;i<r;i++){
        for (j=0;j<c;j++){
            cout<<" * ";
        }
        cout<<endl;
    } 
}



int main(){
    int i,j,r;
    cout<<"enter no of rows you want for your pattern: ";
    cin>>r;
    
    for(i=1;i<=r;i++){
        for (j=1;j<=i;j++){
            cout<<" * ";
        }
        cout<<endl;
    } 
}


int main(){
    int i,j,r;
    cout<<"enter no of rows you want for your pattern: ";
    cin>>r;
    
    for(i=1;i<=r;i++){
        for (j=1;j<=i;j++){
            cout<<" "<<j<<" ";
        }
        cout<<endl;
    } 
}


int main(){
    int i,j,k,r,t;
    cout<<"enter no of rows you want for your pattern: ";
    cin>>r;

    cout<<"enter no of times you want for your pattern: ";
    cin>>t;
    
    for(k=0;k<t;k++){
        for(i=1;i<=r;i++){
            for (j=1;j<=i;j++){
                cout<<" "<<i<<" ";
            }
            cout<<endl;
        }
    } 
}


int main(){
    int i,j,k,r,t;
    cout<<"enter no of rows you want for your pattern: ";
    cin>>r;

    cout<<"enter no of times you want for your pattern: ";
    cin>>t;
    
    for(k=0;k<t;k++){
        for(i=1;i<=r;i++){
            for (j=1;j<=(r-i+1);j++){
                cout<<" * ";
            }
            cout<<endl;
        }
    } 
}


int main(){
    int i,j,k,r,t;
    cout<<"enter no of rows you want for your pattern: ";
    cin>>r;

    cout<<"enter no of times you want for your pattern: ";
    cin>>t;
    
    for(k=0;k<t;k++){
        for(i=1;i<=r;i++){
            
            
            for (j=1;j<=(r-i+1);j++){
                cout<<" "<<j<<" ";
            }
            cout<<endl;
        }
    } 
}


int main(){
    int i,j,k,l,r,t;
    cout<<"enter no of rows you want for your pattern: ";
    cin>>r;

    cout<<"enter no of times you want for your pattern: ";
    cin>>t;
    
    for(k=0;k<t;k++){
        for(i=0;i<=r-1;i++){
            
            
            for (j=1;j<=(r-i-1);j++){
                cout<<"   ";
                
            }
            for (l=0;l<i+i+1;l++){
                cout<<" * ";
            }
            for (j=1;j<=(r-i-1);j++){
                cout<<"   ";
                
            }
            cout<<endl;
        }
    } 
}


void patt8(int r, int t){
    
    for(int k=0;k<t;k++){
        for(int i=0;i<r;i++){
            
            
            for (int j=1;j<=i;j++){
                cout<<"   ";
                
            }
            for (int l=0;l<((2*r)-(2*i+1));l++){
                cout<<" * ";
            }
            for (int j=1;j<=i;j++){
                cout<<"   ";
                
            }
            cout<<endl;
        }
    }
}

void patt9(int r,int t){
    for(int k=0;k<t;k++){
        for(int i=0;i<r/2;i++){
            
            
            for (int j=1;j<=(r-i-1);j++){
                cout<<"   ";
                
            }
            for (int l=0;l<i+i+1;l++){
                cout<<" * ";
            }
            for (int j=1;j<=(r-i-1);j++){
                cout<<"   ";
                
            }
            cout<<endl;
        }
        for(int i=0;i<r/2;i++){
            
            
            for (int j=1;j<=i;j++){
                cout<<"   ";
                
            }
            for (int l=0;l<((2*r)-(2*i+1));l++){
                cout<<" * ";
            }
            for (int j=1;j<=i;j++){
                cout<<"   ";
                
            }
            cout<<endl;
        }
    }

}

void patt10(int r,int t){
    for (int a=0;a<t;a++){

        for(int i=0;i<=r*2-1;i++){
            int s=i;
            if(s>r) s=2*r-i;

            for(int j=1;j<=s;j++){
                cout<<" * ";
            }cout<<endl;
        }
    }
}
