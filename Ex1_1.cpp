#include <numeric>                                       // For accumulate() 원소들의 합계
#include <iostream>                                      
#include <iterator>                                      // For iterators begin(), end()사용
using namespace std;
int main()
{
    double data[]{ 2.5, 4.5, 6.5, 5.5, 8.5 };
    cout << "The array contains:\n";
    for (auto iter = begin(data); iter != end(data); ++iter) //auto는 변수형태를 자동으로 정한다. 
        //begin()안에 배열을 넣게되면 그 배열의 첫번째 원소를 가르키게 된다.
        //end()는 begin()과는 반대로 마지막 원소를 가르키게 된다.
        cout << *iter << " ";
    auto total = accumulate(begin(data), end(data), 0.0);
    //accumulate는 accumulate(첫번째, 마지막, 초기값)으로 해서 첫번째 ~ 초기값의 총합을 하게된다.
    //auto로 자동으로 타입을 지정시켜서 총합을 넣게 된다.

    cout << "\nThe sum of the array elements is " << total << endl;
}