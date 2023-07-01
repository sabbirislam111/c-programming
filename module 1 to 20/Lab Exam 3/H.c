#include<stdio.h>
int main(){

int total_element, no_of_rotetion;
scanf("%d %d", &total_element, &no_of_rotetion);
int arr[total_element];
for(int i = 0; i < total_element; i++){
    scanf("%d", &arr[i]);

}
for(int j = 1; j <= no_of_rotetion; j++){
    int temp = arr[0];
    for(int k = 1; k < total_element; k++){
        arr[k-1] = arr[k];
    }
    arr[total_element - 1] = temp;

}

for(int l = 0; l < total_element; l++){
    printf("%d ", arr[l]);
}





 return 0;
}
