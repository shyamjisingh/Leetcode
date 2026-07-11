class Solution {

public:

    void setZeroes(vector<vector<int>>& matrix) {
             
     vector<int>row;
     vector<int>col;
     for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[0].size();j++){
            if(matrix[i][j]==0){
                col.push_back(j);
                row.push_back(i);
            }
        }
     }


     // put intire row zero;

        for(int i=0;i<row.size();i++){
            int n= row[i];

        for(int j=0;j<matrix[0].size();j++){
              
        matrix[n][j]=0;



        }
        
        
        }





        // put entire col zero

        for(int i=0;i<col.size();i++){
            int n= col[i];

        for(int j=0;j<matrix.size();j++){
              
        matrix[j][n]=0;



        }
        
        
        }



    }
};