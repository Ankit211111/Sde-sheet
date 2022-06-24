class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
        
        int row=1,col=1,r=mat.size(),c=mat[0].size();
  for(int i=0;i<r;i++){
    if(mat[i][0]==0)
      col=0;
  }
    for(int j=0;j<c;j++){
       if(mat[0][j]==0)
      row=0;
    }
  for(int i=1;i<r;i++){
    for(int j=1;j<c;j++){
      if(mat[i][j]==0){
        mat[i][0]=mat[0][j]=0;
      }
    }
  }
  for(int i=1;i<r;i++){
    for(int j=1;j<c;j++){
      if( mat[i][0]==0||mat[0][j]==0)
        mat[i][j]=0;
    }
  }
  if(!row)
    for(int i=0;i<c;i++)
      mat[0][i]=0;
  if(!col)
    for(int i=0;i<r;i++)
      mat[i][0]=0;
    }
};