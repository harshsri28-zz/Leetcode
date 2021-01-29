class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int numel = bits.size();
        for(int i=0;i<numel-1;i++){
            if(bits[i]==1){
                if(i==numel-2){
                    return false;
                }
                i++;
            }
        }
        return true;
    }
};
