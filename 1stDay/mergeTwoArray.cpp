#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       int j =0;
        for (int i = 0 ,  j = m ; i<  nums2.size(); i++ ){
            nums1[j]= nums2[i];
            j++;

        }
        sort(nums1.begin(),nums1.end());
        return nums1;
    }
};

int main(){
    Solution m; 
    vector<int>nums1= {1,2,3,0,0,0};
    vector<int>nums2= {2,5,6};
    int x =3;
    int n = 3;
    vector<int> result;
    result = m.merge(nums1,x,nums2,n);

   for(int i =0 ;i<result.size(); i++ ){
    cout<<"sorted array";
    cout<<result[i];
   } 
    
    return 0;
}
