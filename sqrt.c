#include <stdio.h>

int mySqrt(int x){

float i = 0;
float upper_bound;
int upper_bound_int;

if (x == 1) {
    upper_bound_int = 1;
} else {
    while(i < x/2)
    {
        if(i*i > x)
        {
            float upper_bound = i;
            break;
        }
        i = i + 0.1;
    }
    upper_bound_int = i;
    if (upper_bound_int * upper_bound_int > x)
    {
        upper_bound_int -= 1;
    }
}
return upper_bound_int;

}

int main(void)
{   int ans;
    ans = mySqrt(1);
    printf("%d\n", ans);
    return 0;
}
