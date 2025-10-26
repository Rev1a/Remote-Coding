#include<iostream>
#include<vector>

using namespace std;

class Calculator{

    public:
    int cal_times=0;

    vector<long double> vec;

    int add( int a,int b ){

        return a+b;
    }


    double add( double c,double d ){

        return c+d;

    }
    void showHistory(){  //3.显示历史记录没调好

        int round = 1;

        for( int i = 0 ; i <= cal_times ; i += 3 ){

            if(i+2>cal_times){break;}

            cout<<round<<"."<<vec[i]<<"+"<<vec[i+1]<<"="<<vec[i+2]<<endl;

            round++;

    }

}

    void clearHistory(){

        vec={0};

        cal_times = 0;
    }
};

void menu(){
    Calculator calculate;
    cout<<"========== 计算器菜单 =========="<<endl;
    cout<<"1. 整数加法"<<endl;
    cout<<"2. 浮点数加法"<<endl;
    cout<<"3. 显示历史记录"<<endl;
    cout<<"4. 清空历史记录"<<endl;
    cout<<"请选择操作:";

    int n;

    cin>>n;

    if( n == 1 ){

        int a,b;

        cout<<"请输入两个整数：";

        cin>>a>>b;

        calculate.vec.push_back(a);

        calculate.vec.push_back(b);

        cout<<"结果:"<<calculate.add(a,b)<<endl;

        calculate.vec.push_back(calculate.add(a,b));

        menu();
        calculate.cal_times+=3;

    }

    else if( n == 2 ){

        double c,d;

        cout<<"请输入两个整数：";  //不是浮点数加法吗，怎么还显示输入整数

        cin>>c>>d;

        calculate.vec.push_back(c);

        calculate.vec.push_back(d);

        cout<<"结果："<<calculate.add(c,d)<<endl;

        calculate.vec.push_back(calculate.add(c,d));

        menu();
        calculate.cal_times+=3;

    }

    else if( n == 3 ){

        calculate.showHistory();

        menu();

        }

    else if( n == 4 ){

        calculate.clearHistory();

        menu();

    }

}

int main(){

    menu();

}
