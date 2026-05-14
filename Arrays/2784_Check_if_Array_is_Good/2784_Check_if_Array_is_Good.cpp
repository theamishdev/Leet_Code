#include <vector.h>
class Solution {
public:
    bool isGood(vector<int>& nums) {
        int n=nums.size()-1;    //size for example {1,3,3,2}=>4
        int freq[201]={};       //constraint given in question
        for(int i:nums){
            ++freq[i];          //count frequency of each element
        }
        if(freq[n]!=2)return false;     //if last number is not coming twice  then false
        for(int i=1;i<n;i++){
            if(freq[i]!=1)return false;     //if rest is not equal to one then false
        }
        return true;                        //at end return true
    }
};