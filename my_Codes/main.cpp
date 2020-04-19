#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> v;
    int size;
    cin>>size;
    while(size--){
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    vector<int> r;
    r.push_back(0);
    for(int i=1;i<v.size();i++){
        r.push_back(v[i]*2);
    }
    /*for(int i=0;i<v.size();i++){
        cout<<r[i]<<" ";
    }cout<<endl;*/
    int val = 0;
    for(int i=0;i<v.size();i++){
        for(int j=i+1;j<r.size();j++){
            if(v[i]>r[j]){
                val++;
            }
        }
    }
    cout<<val;
}