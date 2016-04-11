#include <iostream>
#include <map>
#include <string>
 using namespace std;

 int main(){
     map<char, char> code;
     string perm, line;
     getline(cin, perm);
     getline(cin, line);
     int i = 0;
     char alpha = 'a';
     for(;i<26;i++){
         code.insert(std::pair<char, char>(alpha, perm[i]));
         alpha++;
     }
     int linelen = line.length();
     i = 0;
     for(;i<linelen;i++){
         if(line[i] == ' '){
             cout<<' ';
         }else{
             cout<<code[line[i]];
         }

     }
     return 0;
 }
