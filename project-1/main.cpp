#include <iostream>
#include <vector>
#include <string>
#include <vector>
#include <string>

using namespace std;

void set(vector<string> &msg)
{
    msg.push_back("and more... ^^");
    for (const string word : msg)
    {
        cout << word;
    }
    cout << endl;
}

int main()

{
    vector<string> msg{"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};
    cout << "Before:" << msg.size() << endl;

    set(msg);

    cout << "After:" << msg.size() << endl;
    cout << "msg.size() > 0 : pop" << endl;
    while (msg.size() > 0)
    {
        msg.pop_back();
        cout << msg.size() << endl;
    }
    return 0;
}