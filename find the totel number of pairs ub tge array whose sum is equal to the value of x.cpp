//find the totel number of pairs ub tge array whose sum is equal to the value of x.

#include<iostream>
using namespace std;

int main(){
    int array[] ={3 , 4 ,6 ,7 ,1};

    int x ;
    cout<<"enter x:"<<endl;
    cin>>x;  
    
    int ans =0;
    for(int i=0 ; i<5 ;i++){
        for(int j=i+1; j<5 ; j++){
            if(array[i]+array[j]==x){
                ans++;
            }
        }
    
    }
    cout<<ans<<endl;
    return 0;
}
