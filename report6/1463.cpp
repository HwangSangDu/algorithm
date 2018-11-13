
#include <iostream>
#include <cmath>
int arr[1000001];
using namespace std;

int main()
{
	int x, cnt = 0, i;
	cin >> x;
    for(i = 2 ; i <= 1000001 ; i++)
        arr[i] = 9999;
 
    for(i = 2 ; i <= 1000001 ; i++)
    {
        if(i % 3 == 0){
            arr[i] = min(arr[i], arr[i / 3] + 1);
        }
        if(i % 2 == 0){
            arr[i] = min(arr[i], arr[i / 2] + 1);
        }
        arr[i] = min(arr[i], arr[i - 1] + 1);
	}
//    for(i = 2 ; i <= 100 ; i++){
//        cout << arr[i] << endl;
//    }
    cout << arr[x] << endl;
	return 0;
}












