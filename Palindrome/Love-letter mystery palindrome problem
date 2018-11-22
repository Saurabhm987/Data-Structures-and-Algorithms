/*
James found a love letter that his friend Harry has written to his girlfriend. James is a prankster, so he decides to meddle with the letter. He changes all the words in the letter into palindromes.
To do this, he follows two rules:
-He can only reduce the value of a letter by , i.e. he can change d to c, but he cannot change c to d or d to b.
The letter a may not be reduced any further.
-Each reduction in the value of any letter is counted as a single operation. Find the minimum number of operations required to convert a given string into a palindrome.

Input Format:
The first line contains an integer , the number of queries. 
The next  lines will each contain a string .

Constraints-
All strings are composed of lower case English letters, *ascii[a-z], with no spaces.

Output Format:
A single line containing the minimum number of operations corresponding to each test case.
Sample Input:
abc
abcba
abcd
cba

Sample Output:  
2 0 4 2
*/



vector<int> mystery(vector<string> letter) {
	vector<int> result(letter.size();
	for(int i=0; i<letter.size();i<<)
		{
		string str=letter[i];
		int cout=0;
		int mid=str.length()/2;
                int n=str.length();
		for(int i=0; i<mid; i++){

		int difference=abs(int(str.at(i)) - int(str.at(n-i-1)));
		count+=difference=;
		}
		result[i]=count;
	}
	return result;
}		
