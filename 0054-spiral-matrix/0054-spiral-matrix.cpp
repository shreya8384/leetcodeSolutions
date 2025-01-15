class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int r = matrix.size();
        int c = matrix[0].size();
        int startRow = 0;  // startRow -> top
        int startCol = 0; //startCol ->left
        int endRow = r-1;// endRow ->bottom
        int endCol = c-1; //endCol ->right
        vector<int>ans;
        while(startRow<=endRow && startCol<=endCol){
            //for first row
            for(int i= startCol;i<=endCol;i++){
                ans.push_back(matrix[startRow][i]);
            }
            startRow++;
            //end col
            for(int i=startRow;i<=endRow;i++){
                ans.push_back(matrix[i][endCol]);
            }
            endCol--;
            //bottom row
            if(endRow>=startRow){
                for(int i=endCol;i>=startCol;i--){
                    ans.push_back(matrix[endRow][i]);
                }
                endRow--;
            }
            //start col
            if(endCol>=startCol){
                for(int i=endRow;i>=startRow;i--){
                    ans.push_back(matrix[i][startCol]);
                }
                startCol++;
            }
        }
        return ans;
      
      /*
        int r = matrix.size();
        int c = matrix[0].size();
        int startRow =0;
        int startCol =0;
        int endRow= r-1;
        int endCol=c-1;
        vector<int>ans;
        while(startRow<=endRow && startCol<=endCol){
        //for first row
        for(int i=startCol;i<=endCol;i++){
            ans.push_back(matrix[startRow][i]);
        }
        startRow++;
        //end col
        for(int i=startRow;i<=endRow;i++){
            ans.push_back(matrix[i][endCol]);
        }
        endCol--;
        //bottom row
        if(endRow>=startRow){
            for(int i= endCol;i>=startCol;i--){
                ans.push_back(matrix[endRow][i]);
            }
            endRow--;
        }
        //start col
        if(endCol>=startCol){
        for(int i=endRow;i>=startRow;i--){
            ans.push_back(matrix[i][startCol]);
        }
            startCol++;
        }
        }
        return ans;
      */
    }
};
/*
    while(startRow<=endRow && startCol<=endCol){
        //first row
        for(int i=startCol; i<=endCol; i++){
            ans.push_back(matrix[startRow][i]);
        }
        startRow++;
        // end col
        for(int i= startRow; i<=endRow;i++){
            ans.push_back(matrix[i][endCol]);
        }
        endCol--;
        //bottom row
        if(endRow>=startRow){
        for(int i=endCol;i>=startCol;i--){
            ans.push_back(matrix[endRow][i]);
        }
        endRow--;
        }
        
        //start col
        if(endCol>=startCol){
        for(int i=endRow;i>=startRow;i--){
            ans.push_back(matrix[i][startCol]);
        }
        startCol++;
        }
    }
   
    return ans;
    }
    */