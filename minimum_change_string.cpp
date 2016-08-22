#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

void compare(int *flag, string B);

int main(){
    int n;
    cin >> n;
    string B;
    cin >> B;
    int flag = 0;
    compare(&flag, B);
    cout<<flag<<endl;
    return 0;
}

void compare(int *flag, string B){
    int pos = 0;
    while(pos<B.size()-2){   //use size() to get the size of a string
        if(B[pos]=='0'&&B[pos+1]=='1'&&B[pos+2]=='0'){ //compare substrings manually
            *flag += 1;
            pos+=3; //shift the whole substring by 3
        }else{
            pos+=1; //shift only one pos since current loc isn't satisfiable
        }
    }
}
