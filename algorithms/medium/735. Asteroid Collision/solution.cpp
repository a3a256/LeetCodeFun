class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> res;
        stack<int> st;
        int i, last, orig;
        for(i=0; i<asteroids.size(); i++){
            if(st.empty() || asteroids[i]>0){
                st.push(asteroids[i]);
            }else{
                while(!st.empty() && st.top() >0 && st.top() < abs(asteroids[i])){
                    st.pop();
                }
                if(!st.empty() && st.top() == abs(asteroids[i])){
                    st.pop();
                }else{
                    if(st.empty() || st.top() < 0){
                        st.push(asteroids[i]);
                    }
                }
            }
        }
        while(!(st.empty())){
            res.push_back(st.top());
            st.pop();
        }
        reverse(res.begin(), res.end());
        return res;
    }
};
