#include <iostream>
using namespace std;

int product_of_digits(int num){
    int sum = 1;
    while(num>0){
        sum *= num%10; //sum = sum
        num /=10;
    }
    return sum;
}

int main()
{
    bool flag = true;
    int num = 351; //35 15 5
    cout<<num<<endl;
    int result=product_of_digits(num);;
    while(flag){ 
    if(result >9){
        cout<<result<<endl;
        result = product_of_digits(result); 
    }
    else{
        flag = false;
        cout<<result;
    }
   }
    return 0;
}