//#include <string>
//#include <vector>
//#include <cmath>
//#include <iostream>
//#include <bitset>
//#include <cstdio>
//using namespace std;
//
//string ans = "";
//int dectooctal(int n, string rule , int x)
//{
////    cout << n << "asdasd" << endl;
//    if (n < 1)
//        return n;
//    else
//    {
//        dectooctal(n/x, rule, x);
////         printf("%d", n%x);
////        cout << rule[n%x] << endl;
//        ans.push_back(rule[n%x]);
//    }
//    return 0;
//}
//
//
//
//
//string solution(string rule, string A, string B) {
//    // cout << rule.size() << endl;
//    int len = rule.size(); // 진법을 구한다.
////    cout << len << endl;
//    int ansA, ansB;
//    ansA = ansB = 0;
//    int location;
//    for(int i = A.size() - 1 ; i >= 0; i--){
//        location = rule.find(A[i]);
//
//        ansA += location * pow(len , A.size() - i - 1);
//        cout << i << " "  << location << " " << ansA << endl;
//    }
//
////    cout << ansA << endl;
//
//    for(int i = B.size() - 1 ; i >= 0; i--){
//        location = rule.find(B[i]);
//        ansB += location * pow(len , B.size() - i - 1);
//
//    }
//
//    int ansC = ansA - ansB;
//
//
//    dectooctal(ansC, rule, len);
//    return ans;
//}
//
//int main()
//{
//    cout << solution("zothf", "otz", "hh") << endl;
//}


#include <string>
#include <vector>
#include <iostream>

using namespace std;


void RComb(int* set, int set_size, int m , int n , int index)
{
    if(set_size == n){
        for (int i = 0; i < set_size; i++) {
            cout << set[i] << " ";
            if((i % m)-1 == 0)
                cout << endl;
        }
        return;
    }
    else if(index == m)return;
    set[set_size] = index;
    RComb(set, set_size + 1, m , n, index);
    RComb(set, set_size, m , n, index + 1);
}


int solution(int n, int k) {
    int answer = 0;
    int set[100000];
    RComb(set, 0, n, k, 0);
    return answer;
}

int main()
{
    solution(10, 4);
}


