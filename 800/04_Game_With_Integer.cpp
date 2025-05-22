#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){

        //INPUT***
        int n;
        cin>>n;

        if(n % 3 == 0){
            cout<<"Second"<<endl;
        }
        else{
            cout<<"First"<<endl;
        }
    }
    return 0;
}

// tc --- O(n)
// sc --- O(n)