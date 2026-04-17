//problema 557. Reverse Words in a String III do leeetcode

class Solution {
public:
    string reverseWords(string s) {

    int left = 0;
    int right = left;
    int espaco = 0;
    char temp;

        while(right <= s.length()){
        //Dá para usar a função swap do C++
        //swap(s[left], s[right]);
        if(s[right] == ' ' || right == s.length()){
            int inicio = left;
            int fim = right - 1;
            while(inicio < fim){
                char temp = s[inicio];
                s[inicio] = s[fim];
                s[fim] = temp;

                inicio++;
                fim--;
            }
            left = right + 1;

        }
        right++;
    }
    return s;
    }
};
