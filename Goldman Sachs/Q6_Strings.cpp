//problem statement:Given two strings str1 and str2. We say that str2 divides str1 if it's possible to concatenate multiple str2 to get str1. For example, ab divides abab. 
//if str2 does not divide str1, return -1. Otherwise, return the smallest string str3 such that str3 divides both str1 and str2.
class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
          if (str1.length() < str2.length())
      return gcdOfStrings(str2, str1);
    if (str1.find(str2) == string::npos)
      return "";
    if (str2.empty())
      return str1;
    return gcdOfStrings(str2, mod(str1, str2));
  }

 private:
  string mod(string& s1, const string& s2) {
    while (s1.find(s2) == 0)
      s1 = s1.substr(s2.length());
    return s1;
    }
};
