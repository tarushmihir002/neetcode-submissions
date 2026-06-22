class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        st.push(0);
        st.push(0);
        for(int i = 0; i < operations.size(); i++){
            if(operations[i] == "+"){
                int topp1 = st.top();
                st.pop();
                int topp2 = st.top();
                int added = topp1+topp2;
                st.push(topp1);
                st.push(added);
            }
            else if (operations[i] == "C"){
                st.pop();
            }
            else if (operations[i] == "D"){
                int topp = st.top();
                st.push(2*topp);
            }
            else{
                st.push(stoi(operations[i]));
            }
        }
        int total = 0;
        while(!st.empty()){
            total += st.top();
            st.pop();
        }
        return total;
    }
};