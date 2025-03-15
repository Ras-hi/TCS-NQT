#include <iostream>
#include<vector>
#include<sstream>
#include<unordered_map>
#include<algorithm>
using namespace std;

vector<int>stringToVector(string &s){
    stringstream ss(s);
    int num;vector<int>v;
    while(ss>>num){
        v.push_back(num);
    }
    return v;
}

vector<int> rankOf(vector<int>&arr){
    unordered_map<int,int>mp;
    vector<int>el=arr;
    sort(el.begin(), el.end());
    int n =arr.size();int rank =1;
    for(int i =0;i<n;i++){
        if(!mp.count(el[i])){
            mp[el[i]]=rank;
            rank++;
        }
    }
    vector<int>ranke(n);
    for(int i =0;i<n ;i++){
        ranke[i]=mp[arr[i]];
    }
    return ranke;
}
int main() {
	// your code goes here
    string s ;
    getline(cin,s);
    vector<int>arr=stringToVector(s);
    vector<int>ans=rankOf(arr);
    for(int num:ans){
        cout<<num<<"  ";
    }
}
