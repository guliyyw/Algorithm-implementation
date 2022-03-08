//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//vector<vector<int>> result;
//vector<int> path;
//void huishu(int n, int k, int s) {
//    if (path.size() == k) {
//        result.push_back(path);
//        return;
//    }
//    for (int i = s; i <= n; i++) {
//        path.push_back(i);
//        huishu(n, k, i + 1);
//        path.pop_back();
//    }
//}
//vector<vector<int> > combine(int n, int k) {
//    huishu(n, k, 1);
//    return result;
//}
//
//int main() {
//    vector<vector<int> > nums = combine(10, 5);
//    for (int i = 0; i < nums.size(); i++) {
//        printf("%d %d\n", nums[i][0], nums[i][1]);
//    }
//    return 0;
//}