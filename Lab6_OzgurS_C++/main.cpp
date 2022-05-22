#include <iostream>
using namespace std;

float recursive(int n){

    if (n == 0){

        return 1;
    } else{

        float answer = (((float) n / (float)(n + 2)) - 10) * recursive(n - 1);
        return answer;
    }
}

float recursive(){

    cout << "Enter a number: " << endl;

    int number;
    cin >> number;

    float sum = 1;
    while(number!=0){

        sum = sum * (((float) number / (float)(number + 2)) - 10);
        number--;
    }
    cout<< "The result : " << sum <<endl;
}

int main() {

    cout<<"Enter a number : "<< endl;
    int number;

    cin>>number;
    cout<< "The result : " << recursive(number) <<endl;

    recursive();
    return 0;
}
