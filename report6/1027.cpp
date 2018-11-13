//
//#include <iostream>
//#include <cmath>
//
//using namespace std;
//int ans;
//int main()
//{
//    long long arr[51];
//    int N,i,j,k, answer = 0;
//    bool flag;
//    int diffWidth, height, m = 0, n;
//
//    cin >> N;
//    for (i = 1; i <= N ; i ++){
//        cin >> arr[i];
//    }
//    for(i = 1; i <= N; i++){
//
//        for(j = 1 ; j <= N ; j++)
//        {
////            cout << i << " " << j << endl;
//            if(i == j)
//                continue;
//            flag = true;
//            diffWidth = abs(j - i);
//            int x = (i <= j)? i : j;
//            int y = (i > j)? i : j;
////            cout << x << " " << y << endl;
//            for(k = x; k <= y; k++){
//                height = (arr[i]*abs(j - k) + arr[j]*abs(k - i)) / diffWidth;
//
//                if(height <= arr[k]){
////                    cout << height << " " << arr[k] << endl;
//                    flag = false;
//                }
//            }
//            if(flag){
//                ans = max(ans, diffWidth);
//                cout << ans << endl;
//            }
//        }
//
//
//
//
////        for(j = 1; j < i; j++)
////        {
////            flag = true;
////            diffWidth = (i - j);
////            for(k = j + 1; k < i; k++){
////                height = (arr[i]*(k - j) + arr[j]*(i - k)) / diffWidth;
////                if(height <= arr[k]) // false 조건
////                    flag = false;
////            }
////            if(flag){
//////                cout << m + diffWidth << endl;
////                ans = max(ans , m + diffWidth);
////            }
////        }
//    }
////    for(i = 1 ; i <= N ; i++){
////        for(j = 1 ;j <= N; j++){
////            cout << ans[i][j] << " " ;
////        }
////        cout << endl;
////    }
////    for(i = 1 ; i <= N ; i++){
////        for(j = i + 1;j <= N; j++){
//////            answer = max(ans[i][j],answer);
////        }
////
////    }
//    cout << ans << endl;
//    return 0;
//}
//
//
//
//
//
//
//
//
//
//
//
//

#include <iostream>
#include <cmath>
#include <cstdio>
#include <algorithm>
using namespace std;
int n, a[50], b[50];
int main() {
//    scanf("%d", &n);
    int i;
    cin >> n;
    for (i = 0; i < n; i++) cin >> a[i];
    for (i = 0; i < n; i++) {
        double t = -9e9, m;
        for (int j = i + 1; j < n; j++) {
            m = (double)(a[j] - a[i]) / (j - i);
            if (m > t) t = m, b[i]++, b[j]++;
        }
    }
//    int aa = max(b,b+n);
//    cout << aa << endl;
//    printf("%d", *std::max_element(b, b + n));
    cout << *max_element(b, b + n) << endl;
    return 0;
}
