#include <iostream>
using namespace std;

int main() {
    int low, high, i;
    bool isPrime = true;
int c=0;
 
    cin >> low >> high;
    int a=low,b=high;

    while (low <=high) {
        isPrime = true;
        if (low == 0 || low == 1) {
            isPrime = false;
        }
        else {
            for (i = 2; i <= low / 2; ++i) {
                if (low % i == 0) {
                    isPrime = false;
                    break;
                }
            }
        }
        
        if (isPrime){
        	if(low==a){
				c++;
				}else if(low==b){
				c++;
				}else{
					c--;
				}
		}
            	

        ++low;
    }
    c==2?cout<<"YES":cout<<"NO"<<endl;

    return 0;
}
