/*
Question: Write a function to find the longest common prefix string amongst an array of strings. 
          If there is no common prefix, return an empty string "".
Link: https://leetcode.com/problems/longest-common-prefix/description/?envType=problem-list-v2&envId=array
*/

//Approach 1
string longestCommonPrefix (vector<string>& strs) {
    if (strs[0].size == 0) return "";
    string prefix = strs[0];
    for (int i = 1; i < strs.size(); i++) {
        while (strs[i].find(prefix) != 0) {
            prefix = prefix.substr(0, prefix.length() - 1);
            if (prefix.empty()) return "";
        }
    }
    return prefix;
}


//Date: 18/04/2026
