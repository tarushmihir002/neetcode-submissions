class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        int i=0,j=0;
        int m=nums1.size(),n=nums2.size();
        while(i<m && j<n){
            if(nums1[i]<=nums2[j]){
                v.push_back(nums1[i]);
                i++;
            }
            else{
                v.push_back(nums2[j]);
                j++;
            }
        }
        while(i<m){
            v.push_back(nums1[i]);
            i++;
        }
        while(j<n){
            v.push_back(nums2[j]);
            j++;
        }
        double ans=0;
        int sz=v.size();
        // cout<<sz<<endl;

        if (v.size()%2 ==0){
            ans= (v[(sz/2)-1] + v[sz/2])/2.0;
        }
        else ans=v[sz/2];


        return ans;
    }
};
