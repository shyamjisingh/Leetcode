class Solution {
public:
 void sub(vector<int>& candidates,int srt,int n,vector<vector<int>>&ans,vector<int>& temp,int target)  {
      
       if(target==0){
        ans.push_back(temp);
        return;
       }
       if(srt==n||target<0 ){
		return;
	   }
       vector<bool>use(51,0);
      for(int i =srt ; i<n;i++){
        
        if(!use[candidates[i]]){{
            use[candidates[i]]=1;
            temp.push_back(candidates[i]);
        

           sub(candidates,i+1,n,ans,temp,target-candidates[i]);
        }
        temp.pop_back();
        }
        

    
    }
}
     
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
         
         int n= candidates.size();
             vector<vector<int>>ans;
       vector<int>temp;
      
       sort(candidates.begin(),candidates.end());
	  
	   sub(candidates,0,n,ans,temp,target);

	   return ans;


    }
};