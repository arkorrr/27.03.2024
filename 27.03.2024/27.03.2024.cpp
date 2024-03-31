#include <iostream>
#include <vector>
#include <algorithm>
#include <numbers>

using namespace std;

class cl    //Task2
{
public:
    bool operator()(string& str1, string& str2)
    {
        return str1.size() < str2.size();
    }

};

bool mySort(string& str1, string& str2) //Task1
{
    return str1.size() < str2.size();
}

int main()
{
    //Task1
    vector<string> predicat = { "Hello","How","Areeee" };
    sort(predicat.begin(), predicat.end(), mySort);
    for (auto it = predicat.begin(); it != predicat.end(); it++)
    {
        cout << *it << endl;
    }
    //Task2
    vector<string> functor = { "Hello", "How", "Areeee"};
    sort(functor.begin(), functor.end(), cl());
    for (auto it = functor.begin(); it != functor.end(); it++)
    {
        cout << *it << endl;
    }
}