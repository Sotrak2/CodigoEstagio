#include <iostream>
using namespace std;




int numero, cont;



int main(void){

    long soma = 0;
    long div;

    for (long num = 2; num <= 2000000; num++ ){

   int totalDiv = 0;
    for (div = 2; div <= num/2 ; div++){

        if (num % div == 0){
        totalDiv++;
	}
    }
        if (totalDiv == 0 ){
    soma += num;
    cout << num << endl;
}

}
    cout << soma << endl;

return 0;


}