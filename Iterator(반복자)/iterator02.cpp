#include <numeric>       
#include <iostream>               
#include <iterator>                  

int main()
{
    std::cout << "Enter numeric values separated by spaces and enter Ctrl+Z to end:" << std::endl;

    std::cout << "\nThe sum of the values you entered is "
        << std::accumulate(std::istream_iterator<double>(std::cin), std::istream_iterator<double>(), 0.0) 
        //여기서 isstream_iterator<double>()은 끝 스트림 반복자로 지정
        //std::istream_iterator<double>(std::cin) 받은 것을 시작 점으로 잡고 하나씩 받은 값을 넣는다.
        //istream같은 경우에는 컨트롤 Z를 누르게 되면 eof가 일어나서 종료된다.

        << std::endl;
}
