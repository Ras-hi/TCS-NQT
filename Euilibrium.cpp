#include <iostream>
#include<vector>
#include<sstream>
using namespace std;

vector<int>stringToVector(string &s){
    stringstream ss(s);
    int num;vector<int>v;
    while(ss>>num){
        v.push_back(num);
    }
    return v;
}
int EquilibriumIndex(vector<int>&arr){
    int n =arr.size();
    int leftsum[n],rightsum[n];
    int left=0;
    for(int i =0;i<n ;i++){
        leftsum[i]=left;
        left+=arr[i];
    }
    int right =0;
    for(int i =n-1;i>=0;i--){
        rightsum[i]=right;
        right+=arr[i];
    }
    for(int i =0;i<n;i++){
        if(leftsum[i]==rightsum[i]){
            return i;
        }
    }
    return -1;
}
int main() {
	// your code goes here
    string s ;
    getline(cin,s);
    vector<int>arr=stringToVector(s);
    cout<<EquilibriumIndex(arr);
}
