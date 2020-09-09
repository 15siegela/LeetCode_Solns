class Solution {
public:
    string reverseParentheses(string s) {
        size_t end = s.find(")");
        while(end != string::npos) 
        {
            size_t begin = s.find_last_of("(", end);
           
            reverse(s.begin()+begin, s.begin() + end +1);
            s.erase(s.begin()+begin, s.begin()+ begin + 1);
            s.erase(s.begin()+end - 1, s.begin() + end);
            cout << s;
            end = s.find(")");
        }
        return s;
            
    }
};
