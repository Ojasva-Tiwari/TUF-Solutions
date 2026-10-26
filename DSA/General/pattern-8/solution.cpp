class Solution {
public:
    void pattern8(int n) {
        for(int i = 0; i < n; i++){
            for (int j = 0; j<i; j++){
                cout << " ";
            }
            for (int k = 2*(n-i)-1; k >0; k--){
                cout << "*";
            }
            cout <<endl;
        }

    }
};