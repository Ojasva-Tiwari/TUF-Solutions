class Solution {
public:
    void pattern17(int n) {
        char l ='A';
        for(int i = 1; i<=n; i++){
            for(int j = n-i;j>0;j--){
                cout << " ";
            }
            for(char m ='A';m< l+i; m++){
                cout <<m;
            }
            for(char m = 'A' + i -2; m>='A'; m--){
                cout <<m;
            }
            cout <<endl;
        }

    }
};