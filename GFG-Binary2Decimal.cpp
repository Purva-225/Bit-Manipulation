// Tc: O(length), Sc: O(1)
class Solution {
  public:
    int binaryToDecimal(string& b) {
        int n = b.size(); 
            int P2 = 1; 
            int num = 0; 
        for(int i = n-1; i >= 0; i--){
            if(b[i] == '1'){
                num = num + P2; 
            }
             P2 = P2 * 2; 
        }
         return num; 
    }
};
