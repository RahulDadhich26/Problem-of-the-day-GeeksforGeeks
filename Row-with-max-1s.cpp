#include<bits/stdc++.h>
#include<vector>

using namespace std;
 int rowWithMax1s(vector<vector<int> > &arr) {
        int n = arr.size() ;
        int m = arr[0].size() ;
        int maxi = 0 ;
        int k = -1;
        for(int i=0;i<n;i++){
            int ones = 0;
            for(int j = 0 ;j<m;j++){
                if(arr[i][j] == 1) ones++;
            }
            if(ones > maxi){
                maxi = ones ;
                k = i ;
            }
        }
        return  k;
    }
int main() {
    vector<vector<int>> arr = {{0, 1, 1, 1},
                                {0, 0, 1, 1},
                                {1, 1, 1, 1},
                                {0, 0, 0, 0}};
    cout << rowWithMax1s(arr) << endl;
    return 0;
}