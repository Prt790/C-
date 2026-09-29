#include<iostream>
#include<unordered_map>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    unordered_map<int,int> freq;
    for(int x:a){
        freq[x]++;
    }
    sort(a.begin(),a.end(),[&](int x,int y){
        return freq[x]>freq[y];
    });
    for(int x:a){
        cout<<x<<" ";
    }
    return 0;
}