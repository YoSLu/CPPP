#include <iostream>
using namespace std;

class mathkit{

public:
    void welcome(){
        cout << "�A�Q�F��?" <<endl;
        cout << "1.��sin 2. ��cos 3. ��tan";
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

        cout << "��J�n�p��sin�Ȫ��B�I��" << endl;
        cin >> d;

        for (int i = 1; i <= 31; i++){
            ter *= (d*d)/(2*i*(2*i-1));
            if(i%2 == 0){
                sum += ter;
            }
            sum-=ter;
        }
        cout << "sin�Ȭ�" << sum << endl;
    }

    void coscal(){
    float d;
    double ter = 1.0;
    double sum = 1.0;

    cout << "��J�n�p��cos�Ȫ��B�I��" << endl;
    cin >> d;
    cout << "cos�Ȭ�" << sum+ter << endl; //�üg���A�u���F��class�O�_���
}

    void tancal(){
        float d;
        double ter = 1.0;
        double sum = 1.0;

        cout << "��J�n�p��tan�Ȫ��B�I��" << endl;
        cin >> d;
        cout << "tan�Ȭ�" << sum-ter << endl; //�üg���A�u���F��class�O�_���
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
