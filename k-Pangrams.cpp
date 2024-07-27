#include<bits/stdc++.h>
using namespace std ;

bool kPangram(string str, int k) {
        int cnt = 0;
        unordered_map<char,int>mpp;
        for(auto &x : str){
            if(x!=32){
                cnt++;
                mpp[x]++;
            }
        }
        return cnt >= 26 && 26 - mpp.size() <= k ;
    }
    int main(){
        string str = "The quick brown fox jumps over the lazy dog";
        int k = 0;
        cout << kPangram(str,k) << endl;
        return 0;
    }