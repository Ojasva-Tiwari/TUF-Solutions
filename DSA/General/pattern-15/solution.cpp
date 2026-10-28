class Solution {
public:
    void pattern15(int n) {
        for(int i = 1; i <=n; i++){
            char m = 'A' + n-i;
            for(char j = 'A'; j<=m; j++){
                cout <<j;
            }
            m-=1;
            cout <<endl;
        }

    }
};