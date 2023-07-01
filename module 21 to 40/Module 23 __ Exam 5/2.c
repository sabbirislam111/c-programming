#include<stdio.h>

int f(int n, int a[]) {
     int cnt = 0;
     for (int i=0; i<n; i++) {
         if (a[i] == a[0]) cnt++;
    }
    return cnt;
}


int main(){

    int n= 5;
    int arr[] = {1, 2,1, 2, 1};
    int ans= f(n , arr);
    printf("%d", ans);

}
