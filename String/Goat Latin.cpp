/* A sentence S is given, composed of words separated by spaces. Each word consists of lowercase and uppercase letters only.

We would like to convert the sentence to "Goat Latin" (a made-up language similar to Pig Latin.)

The rules of Goat Latin are as follows:

If a word begins with a vowel (a, e, i, o, or u), append "ma" to the end of the word.
For example, the word 'apple' becomes 'applema'.
 
If a word begins with a consonant (i.e. not a vowel), remove the first letter and append it to the end, then add "ma".
For example, the word "goat" becomes "oatgma".
 
Add one letter 'a' to the end of each word per its word index in the sentence, starting with 1.
For example, the first word gets "a" added to the end, the second word gets "aa" added to the end and so on.
Return the final sentence representing the conversion from S to Goat Latin 
*/





class Solution {
    
private: 
    
    // function to returns wheather the char is vowel or not;
    
    bool isVowels(char c){
        c = tolower(c);
        return { c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'};
}
    
public:0
    string toGoatLatin(string S) {
        
        char c;       
        string result, w;
        string append = "maa";    // word to append;

        stringstream iss(S);      // return stream of word
            
        while(iss >> w ){         // taking word by word into w  
            
            if(!isVowels(w[0])){  // check the first character of word is vowel or not 
                
                w += w[0];        // if not vowel the add first char at the end of word
                w.erase(0, 1);    // delete the first char
                result += w + append + " ";  // now append the previous word and maa;
                
            }
            else{  
            
            result += w + append + " ";  // if vowel the simply append ma to the end;
                    
            }
            
            append += 'a';
            
        }
        
        result.erase( (result.length()-1), 1);
        
        return result;
    }
};
