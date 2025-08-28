class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int i, area = 0, diagonal = 0, biggest_diagonal=0;
        for(i=0; i<dimensions.size(); i++){
            diagonal = dimensions[i][0]*dimensions[i][0] + dimensions[i][1]*dimensions[i][1];
            cout << dimensions[i][0] << ' ' << dimensions[i][1] << ' ' << diagonal << '\n';
            if(diagonal > biggest_diagonal){
                biggest_diagonal = diagonal;
                area = dimensions[i][0]*dimensions[i][1];
            }else if(diagonal == biggest_diagonal){
                area = max(area, dimensions[i][0]*dimensions[i][1]);
            }
        }
        return area;
    }
};
