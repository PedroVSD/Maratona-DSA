class Solution {
    public:
        bool isPalindrome(int x) {
    
            if(x < 0){
                return false;
            }
    
            long palin = 0;
            int aux = x;
    
            while(x){
                palin = (palin * 10) + (x % 10);
                x /= 10;
            }
            return (palin == aux);
        }
    };