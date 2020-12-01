#include <iostream>
#include <vector>
#include <fstream>


int main(){
    std::vector<int> input = {};
    std::ifstream infile("Day1.txt");

    int tmp;

    while(infile >> tmp){
        input.push_back(tmp);
    }

    // Part 1
    for(const auto& i: input){
        for(const auto& j: input){
            // std::cout << i << " * " << j << " = " << i*j << '\n';
            if(i+j == 2020){
                std::cout << i << " * " << j << " = " << i*j << '\n';
            }
        }
    }

    // Part 2
    for(const auto& i: input){
      for(const auto& j: input){
        for(const auto& k: input){
          if(i+j+k == 2020){
                std::cout << i << " * " << j << " * " << k << " = " << i*j*k << '\n';
          }
        }
      }
    }

}
