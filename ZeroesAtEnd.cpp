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

void zeroToEnd(vector<int>&arr){
    int n =arr.size();
    int j =0;
    for(int i =0;i<n ;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j++]);
        }
    }
}
int main() {
	// your code goes here
    string s ;
    getline(cin,s);
    vector<int>arr=stringToVector(s);
    zeroToEnd(arr);
    for(int num:arr){
        cout<<num<<"  ";
    }
}
