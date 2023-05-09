#include <iostream>
#include <vector>
using namespace std;

vector<int> evenOddTransform(int n){
    vector<int> numberList = {3, 4, 9};
    int count = 0;

    while(count < n){
        for(int i = 0; i <= numberList.size(); i++){
            if(numberList[i] % 2 == 0){
                numberList[i] = numberList[i] - 2;
            }
            else{
                numberList[i] = numberList[i] + 2;
            }
        }
        count = count + 1;
    }

    return numberList;
}

/*int main(){
    int n;
    cout << "Number of transformations: ";
    cin >> n;

    for(auto i: evenOddTransform(n)){
        cout << i << ", ";
    }
    cout << "Size of "<< evenOddTransform(n).size() << ".\n";

    return 0;
}*/