#include <iostream>
#include <fstream>
// accpp����
double AccuracyPP_fuction(int pp320,int pp300,int pp200,int pp100,int pp50,int ppmiss){
    double a1=((320*pp320)+(300*pp300)+(200*pp200)+(100*pp100)+(50*pp50));
    double a2=(320*(pp320+pp300+pp200+pp100+pp50+ppmiss));
    double accPP = (a1/a2)*100;
    return accPP;
}

// �ɻ�õ�ppռ��
double PPWeight_fuction(int pp320,int pp300,int pp200,int pp100,int pp50,int ppmiss){
    return (AccuracyPP_fuction(pp320,pp300,pp200,pp100,pp50,ppmiss)-80.0)/20.0;
}
int main(){
    int pp320,pp300,pp200,pp100,pp50,ppmiss;
    std::cout<<"������pp320:";
    std::cin >> pp320;
    std::cout<<"������pp300:";
    std::cin >> pp300;
    std::cout<<"������pp200:";
    std::cin >> pp200;
    std::cout<<"������pp100:";
    std::cin >> pp100;
    std::cout<<"������pp50:";
    std::cin >> pp50;
    std::cout<<"������ppmiss:";
    std::cin >> ppmiss;
    std::ofstream outFile;
    outFile.open("OSU.txt");
    outFile<<"���ACCPPΪ: "<<AccuracyPP_fuction(pp320,pp300,pp200,pp100,pp50,ppmiss)<<"%"<<std::endl;
    outFile<<"���Ի��ȫ��pp��"<<PPWeight_fuction(pp320,pp300,pp200,pp100,pp50,ppmiss)*100<<"%ռ��"<<std::endl;
    std::cout<<"�����ļ��ɹ�";
    system("pause");
    return 0;
}