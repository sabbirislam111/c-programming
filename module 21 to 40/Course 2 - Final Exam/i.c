#include<stdio.h>
int print_last_two_digits(int n) {

	int temp;

	if (n <= 9)
		printf("%d", n);
	else {

		temp = n % 100;
		if (temp <= 9) {

			return temp;

		}
		else {
            return temp;
		}

	}

}



int main(){
    int n;
    scanf("%d", &n);
    int x = 5;
    int y = 5;
    for(int i = 1; i <= n; i++){
        x*=y;
    }
    int ans = print_last_two_digits(x);
    printf("%d", ans);



    return 0;
}
