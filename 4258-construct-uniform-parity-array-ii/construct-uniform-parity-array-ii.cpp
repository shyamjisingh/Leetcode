// class Solution {
// public:
//     bool uniformArray(vector<int>& nums1) {

       
//         bool ans =true;
//         // if(nums1[0]%2==0&&nums1[nums1.size()-1]%2!=0){
//         //     return false;
//         // }
//         // if(nums1[0]%2!=0&&nums1[nums1.size()-1]%2==0){
//         //    return false;
//         // }
//         int count =1;

//        if(nums1.size()==2 && nums1[0]%2!=0&nums1[1]%2!=0){
//             ans= true;
//            return  true;
//        }
//        if(nums1.size()==2 && nums1[0]%2==0&nums1[1]%2==0){
//             ans= true;
//            return  true;
//        }
//        if(nums1.size()==2 && nums1[0]%2==0&nums1[1]%2!=0){
//             if((nums1[1]-nums1[0])>0)
//             ans= true;
//            return  true;
//        }
//        if(nums1.size()==2 && nums1[0]%2!=0&nums1[1]%2==0){
//             if((nums1[1]-nums1[0])>0)
//             ans= true;
//            return  true;
//        }

       
//         if(nums1[0]%2==0){

//         for(int i=1;i<nums1.size();i++){ 
//              count++;
//             int temp= nums1[i]-nums1[i-1];
//             if(temp<0){
//                 ans= false;
//                 break;
//             }
//             if(temp%2!=0){
//                 ans=false;
//                 break;
//             }
            
//         }
//         if(count !=nums1.size()&&nums1[nums1.size()-1]%2!=0 ){
//             ans=false;
//         }
        
//         }else{

//              for(int i=1;i<nums1.size();i++){ 
//                   count++;
//             int temp= nums1[i]-nums1[i-1];
//             if(temp<0){
//                 ans =false;
//                 break;
//             }
//             if(temp%2==0){
//                 ans=false;
//                 break;
//             }
            
//         }
//         if(count !=nums1.size()&&nums1[nums1.size()-1]%2==0 ){
//             ans=false;
//         }

//         }
//         return ans;
        
//     }
// };

class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int min_val = *min_element(nums1.begin(), nums1.end());
        
        if (min_val % 2 != 0) {
            return true;
        }
        
        for (int i = 0; i < nums1.size(); i++) {
            if (nums1[i] % 2 != 0) {
                return false;
            }
        }
        
        return true;
    }
};