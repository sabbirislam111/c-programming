#include<stdio.h>
int main(){
    int H, W, h, w;
    scanf("%d %d", &H, &W);
    scanf("%d %d", &h, &w);

    int total_cells = H * W;
    int color_colum =  h * W;
    int color_row = H * w - (h * w);
    int total_color = total_cells - (color_colum + color_row);

    //int color_cells =  color_row - (W *h);
    //int total_color =
    //int white_cells = total_cells - color_cells;
    printf("%d", total_color);

return 0;
}
