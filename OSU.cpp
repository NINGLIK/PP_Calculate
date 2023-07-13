#include <iostream>
#include <math.h>
// accpp����
double AccuracyPP_fuction(int pp320,int pp300,int pp200,int pp100,int pp50,int ppmiss){
    double a1=((320*pp320)+(300*pp300)+(200*pp200)+(100*pp100)+(50*pp50));
    double a2=(320*(pp320+pp300+pp200+pp100+pp50+ppmiss));
    double accPP = (a1/a2)*100;
    return accPP;
}
// ����pp����
double PPMAX_fuction(double star,double notecount){
    return pow(fmax(star-0.15,0.05),2.2)*(1+0.1*fmin(1,notecount/1500))*8;
}
// �ɻ�õ�ppռ��
double PPWeight_fuction(int pp320,int pp300,int pp200,int pp100,int pp50,int ppmiss){
    return (AccuracyPP_fuction(pp320,pp300,pp200,pp100,pp50,ppmiss)-80.0)/20.0;
}
int main(){
    int pp320,pp300,pp200,pp100,pp50,ppmiss,notecount;
    double star;
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
    std::cout<<"�������Ѷ�:";
    std::cin >> star;
    std::cout<<"����������:";
    std::cin >> notecount;
    std::cout<<"���ACCPPΪ: "<<AccuracyPP_fuction(pp320,pp300,pp200,pp100,pp50,ppmiss)<<"%"<<std::endl;
    std::cout<<"��ǰ��ͼ����"<<PPMAX_fuction(star,notecount)<<"pp"<<std::endl;
    std::cout<<"���Ի��ȫ��pp��"<<PPWeight_fuction(pp320,pp300,pp200,pp100,pp50,ppmiss)*100<<"%ռ��"<<std::endl;
    system("pause");
    return 0;
}