class Solution {
public:
    void pattern16(int n) {
        char m ='A';
        for (int i = 1; i <= n; i++){
            for (int j = 1; j<=i; j++){
                cout << m;
            }
            m+=1;
            cout <<endl;
        }

    }
};