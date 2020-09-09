class Solution {
public:
    vector<int> addToArrayForm(vector<int>& A, int K) {
        for (int l = 0; K > 0; l++)
        {
            if(A.size() <= l) {A.insert(A.begin(), 0);} 
            A[A.size()-l-1] += K % 10; //add rem of ea. place to correct pos in A
            K /= 10;
        }
        int cntA = A.size();
        for (int i = cntA-1; i > 0; i--)
        {
            if(A[i] >= 10)
            {
                A[i-1] += 1;
                A[i] -= 10;
            }
        }
        if(A.front() >= 10)
        {
            A.insert(A.begin(), 1);
            A[1] %= 10;
        }
        return A;
    }
};
