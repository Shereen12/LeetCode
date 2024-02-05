class Solution {
private:
    int arr[55] = {0};
public:
    int f(int n){
        if(n == 2){
            return 2;
        }
        if(n == 1){
            return 1;
        }
        int x, y;
        if(arr[n - 2]){
            x = arr[n - 2];
        }
        else
            x = f(n - 2);
        if(arr[n - 1]){
            y = arr[n - 1];
        }
        else
            y = f(n - 1);
        arr[n] = x + y;
        return x + y;
    }
    int climbStairs(int n) {
        return f(n);
    }
};
