//TC: O(Log2^N) , SC: O(Log2^N)
class Solution {
  public:
  void reverse(string &result){
      int st = 0; 
      int end = result.length()-1; 
      
      while(st < end){
          swap(result[st],result[end]); 
          st++; 
          end--; 
      }
  }
    string decToBinary(int n) {
        string result = ""; 
        while(n > 0){
            if(n % 2 == 1) result += '1';
            else result +='0';
            n = n/2; 
        }
        reverse(result); 
        return result; 
    }
};
