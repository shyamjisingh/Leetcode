class Solution {
public:
// bool scores(vector<int>& nums, bool a_turn, int score_a,int score_b, int i,int j)
// {
//     if(i>j)
//         return score_a>=score_b;
      
//     if(a_turn)
//         return scores(nums,false,score_a+nums[i],score_b,i+1,j)||scores(nums,false,score_a+nums[j],score_b,i,j-1);
        
    
//          return scores(nums,true,score_a,score_b+nums[i],i+1,j)&&scores(nums,true,score_a,score_b+nums[j],i,j-1);
    
    
// }
int getP1Score(vector<int>& nums, int i, int j, bool is_p1_turn) {
        if (i > j) {
            return 0; 
        }
        
        if (is_p1_turn) {
            int score_if_pick_i = nums[i] + getP1Score(nums, i + 1, j, false);
            int score_if_pick_j = nums[j] + getP1Score(nums, i, j - 1, false);
            return max(score_if_pick_i, score_if_pick_j);
        } else {
            int p1_score_if_p2_picks_i = getP1Score(nums, i + 1, j, true);
            int p1_score_if_p2_picks_j = getP1Score(nums, i, j - 1, true);
            return min(p1_score_if_p2_picks_i, p1_score_if_p2_picks_j);
        }
    }

    bool predictTheWinner(vector<int>& nums) {
     //return scores(nums,true,0,0,0,nums.size()-1);
    //  int i=0;
    //  int j=nums.size()-1;
    //  bool p1=true;
    //  bool p2=false;
    //  int p1_score=0;
    //  int p2_score=0;

    //  while(i<=j){
       
    //     if(p1){
            
    //         if(nums[i]>=nums[j]){
    //             p1_score+=nums[i];
    //             i++;
    //         }else{
    //             p1_score+=nums[j];
    //             j--;
    //         }
    //         p1=false;
    //         p2=true;
    //     }
    //      if(p2){
            
    //         if(nums[i]>=nums[j]){
    //             p2_score+=nums[i];
    //             i++;
    //         }else{
    //             p2_score+=nums[j];
    //             j--;
    //         }
    //         p1=true;
    //         p2=false;
    //     }

    //  }
    //  return p1_score>=p2_score;

    int total_points = 0;
        for (int num : nums) {
            total_points += num;
        }
        
        int p1_final_score = getP1Score(nums, 0, nums.size() - 1, true);
        int p2_final_score = total_points - p1_final_score;
        
        return p1_final_score >= p2_final_score;


    }
};