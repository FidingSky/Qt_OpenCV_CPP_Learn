#include <iostream>
using namespace std;


class Box
{
public:
    int chang;
    int kuan;
    int gao;
    string color;
    void setbox(string get_order);
};

void Box::setbox(string order) {
    if (order == "open") { cout << "the box just opened\n"; }
    if (order == "close") { cout << "the box just closed\n"; }
}


int main()
{
    cout << "Hello, World!" << "\n";
    int n = 0;
    while (n < 100) { n++; cout << n << "\n"; }
    //�ϱ��ǻ����������ѭ������

    enum color {
        red=0,//
        green=1,
        blue=3,
        yellow=6
    }getcolor;
    getcolor = blue;
    cout << getcolor << "\n";
    //�ϱ�����������enumö�ٵ�

    cout << "how old are you?\n";
    int old;
    cin >> old;
    if(old<30)
    {
        cout << "yong guy uh?\n" << "to be strong\n";
    }
    //�ϱ����������Ա�׼�������������
    
    

    Box box1;
    box1.chang = 10;
    box1.kuan = 20;
    box1.gao = 5;
    box1.color = "red";
    cout << "the color of box is:" << box1.color<<"\n";
    cout << "����1������ǣ�" << box1.chang * box1.kuan * box1.gao<<"\n";
    cout << "open or close this box?\n";
    string get_fucing_order;
    cin >> get_fucing_order;
    box1.setbox(get_fucing_order);
    //�ϱ�������������Ͷ�������ģ�����Ķ���д��main�������

    return 0;
}

