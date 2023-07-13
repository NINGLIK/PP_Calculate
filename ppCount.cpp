#include <cmath>
#include <iostream>
#include <fstream>
// 谱面pp计算
double PPMAX_fuction(double star,double notecount){
    return pow(fmax(star-0.15,0.05),2.2)*(1+0.1*fmin(1,notecount/1500))*8;
}
int main(void){
    int notecount;
    double star;
    std::cout<<"请输入难度:";
    std::cin >> star;
    std::cout<<"请输入物量:";
    std::cin >> notecount;
    double pp = PPMAX_fuction(star, notecount);
    std::ofstream outFile;
    outFile.open("file.txt");
    outFile << pp <<std::endl;
    return 0;
}

