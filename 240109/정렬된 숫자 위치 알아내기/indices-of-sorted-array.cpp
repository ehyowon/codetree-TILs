/*
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, arr[1000];
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int new_arr[1000];
    for(int i = 0; i < n; i++){
        new_arr[i] = arr[i];
    }
    sort(new_arr, new_arr + n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(arr[i] == new_arr[j]){
                cout << j+1 << " ";
                break;
            }
        }
    }
    return 0;
}
*/
#include <iostream>
#include <algorithm>

using namespace std;

class Point{
public:
    Point() {}
    Point(int idx, int value) {
        mIdx = idx;
        mValue = value;
    }
    int getIdx() {
        return mIdx;
    }
    int getValue() {
        return mValue;
    }

private:
    int mIdx;
    int mValue;
};

bool cmp(Point& a, Point& b){
    if(a.getValue() == b.getValue()){
        return a.getIdx() < b.getIdx();
    }
    return a.getValue() < b.getValue();
}

int main() {
    Point arr[1001];
    int answer[1001];
    int n;
    cin >> n;
    for(int i=0;i<n;++i){
        int value;
        cin >> value;
        arr[i] = Point(i+1, value);
    };
    sort(arr, arr+n, cmp);
    for(int i=0;i<n;++i){
        Point point = arr[i];
        answer[point.getIdx()-1] = i+1;
    }
    for(int i=0;i<n;++i){
        cout << answer[i] << " ";
    }
    return 0;
}