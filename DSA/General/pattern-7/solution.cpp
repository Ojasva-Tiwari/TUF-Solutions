class Solution {
public:
    void pattern7(int n) {
        for(int i = 0; i < n; i++){
            for(int j = n-i-1; j >0; j--){
                cout << " ";
                }
            for(int k = 1 ; k <= (2*i)+1; k++){
                cout << "*";
                }
            cout << endl;
        }
    }
};