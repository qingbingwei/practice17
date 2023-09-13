#include <iostream>

using namespace std;

void menu()
{
    cout << "****************************************" << endl;
    cout << "***************  1.play  ***************" << endl;
    cout << "***************  0.exit  ***************" << endl;
    cout << "****************************************" << endl;
}

void game()
{
    int a = 0;

    int ret = rand() % 100 + 1; //0~100
    while(true)
    {
        cout << "please scan" << endl;
        cin >> a;
        if (a > ret)
            cout << "big" << endl;
        else if(a < ret)
            cout << "small" << endl;
        else
        {
            cout << "right" << endl;
            break;
        }
    }

}

int main()
{
    srand((unsigned int)NULL);
    int input = 0;

    do
    {
        menu(); //显示菜单
        cin >> input;
        game(); //游戏实现
    }while(input);
    system("pause");
    return 0;
}
