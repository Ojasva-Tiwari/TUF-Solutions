class Solution {
public:
    void pattern14(int n) {
        for(int i =0; i<n; i++){
            char m = 'A';
            m+=i;
            for(char j = 'A'; j <=m;j++){
                cout << j;
            }
            cout <<endl;

        }

    }
};