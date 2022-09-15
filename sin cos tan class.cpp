#include <iostream>
using namespace std;

class mathkit{

public:
    void welcome(){
        cout << "你想幹嘛?" <<endl;
        cout << "1.算sin 2. 算cos 3. 算tan";
        cin >> query;
        cout << endl <<"query = " << query <<endl;

        switch (query){
            case 1:
                sincal();
                break;
            case 2:
                coscal();
                break;
            case 3:
                tancal();
                break;
            default:
                cout << "illegal input";
        }
    }

    void sincal(){
        float d;
        double ter = 1.0;
        double sum = 1.0;

        cout << "輸入要計算sin值的浮點數" << endl;
        cin >> d;

        for (int i = 1; i <= 31; i++){
            ter *= (d*d)/(2*i*(2*i-1));
            if(i%2 == 0){
                sum += ter;
            }
            sum-=ter;
        }
        cout << "sin值為" << sum << endl;
    }

    void coscal(){
    float d;
    double ter = 1.0;
    double sum = 1.0;

    cout << "輸入要計算cos值的浮點數" << endl;
    cin >> d;
    cout << "cos值為" << sum+ter << endl; //亂寫的，只為了看class是否能用
}

    void tancal(){
        float d;
        double ter = 1.0;
        double sum = 1.0;

        cout << "輸入要計算tan值的浮點數" << endl;
        cin >> d;
        cout << "tan值為" << sum-ter << endl; //亂寫的，只為了看class是否能用
    }

private:
    int query = 0;
};

int main()
{
    mathkit test;
    test.welcome();
    return 0;
}
