#include <iostream>
#include <cmath>

int main() {
    float a;
    std::cin>>a;
    float b;
    std::cin>>b;
    float n;
    float m = 0;
    if(a>=b){
        n = pow((a-b),1/3);
    } else{
        n = a*a+((a-b)/ sin(a*b));
    }
    if(n<b){
        m = (((-1)*(n+a)/b)+sqrt(sin(a) - cos(n)));

    }
    if(n=b){
        m = b*b+tan(n*a);
    } else{
        m = b*b*b+n*a*a;
    }
    std::cout<<a<<" "<<b<<" "<<n<<" "<<m;
}
