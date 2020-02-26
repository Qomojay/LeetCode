/*************************************************************************
	> File Name: 202.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月26日 星期三 16时27分53秒
 ************************************************************************/

//快乐数

int get_next(int x) {
    int temp = 0;
    while(x) {
        temp += (x % 10) * (x % 10);
        x /= 10;
    }
    return temp;
}

bool isHappy(int n){
    int p = n, q = n;
    while (q != 1) {
        p = get_next(get_next(p));
        q = get_next(q);
        if (p == q) break;
    }
    return p == 1;
}
