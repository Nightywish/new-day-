// Continue CPP.
#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "what is your age?"<<endl;
    cin >> age;
    if (age <= 17)
    {
        cout << "you are not old enough!!" << endl;

        return 0;
    }
    else if (age<= 18)
    {

        cout << "you are good to go, have fun" << endl;

    }

    else

    {
        cout << "Please give me your real age" << endl;
    }
}


