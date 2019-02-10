/* Unique Morse Code Words */

class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string>str={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        unordered_set<string>fin_ele;    // all morsecode element
        for(int i=0; i<words.size(); i++){    // iterating through words
            string& r = words[i];   
            string temp="";
            for(int j=0; j<r.size(); j++){         
                int k = int(r[j])-97;
                temp +=str[k];
            }
            fin_ele.insert(temp);
        }
        return fin_ele.size();   
    }
};
