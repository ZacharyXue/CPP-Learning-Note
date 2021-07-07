#include <string>
#include <iostream>

using namespace std;

class Screen
{
    public:
        typedef string::size_type pos;
        Screen() = default;
        Screen(pos ht, pos wd, size_t num): height(ht), width(wd),
            contents(num,' ') { }
        Screen(pos ht, pos wd, char c): height(ht),width(wd),
            contents(ht * wd, c) { }
        char get() const
        {
            return contents[cursor];
        }
        char get(pos ht, pos wd) const
        {
            pos row = ht * width;
            return contents[row + wd];
        }
        Screen &move(pos ht, pos wd);
        Screen &input();
        void show() const
        {
            cout << contents << endl;
        }
    private:
        pos cursor = 0;
        pos height = 0, width = 0;
        string contents;
};

int main()
{
    Screen screen1;
    cout << "初始化1：" << endl;
    screen1.show();

    Screen screen2(10,10,(size_t)5);
    cout << "初始化2：" << endl;
    screen2.show();

    Screen screen3(10,10,'a');
    cout << "初始化3：" << endl;
    screen3.show();

    screen3.move(1,0);
    screen3.input();
    screen3.show();    
    return 0;
}

Screen &Screen::move(pos ht, pos wd)
{
    pos row = ht * width;
    cursor = row + wd;
    return *this;
}

Screen &Screen::input()
{
    string str;
    cout << "enter the string: " << endl;
    getline(cin,str);
    if (cursor + str.size() < contents.size())
    {
        contents = contents.substr(0,cursor) + str + contents.substr(cursor+str.size());
    }
    else
    {
        contents = contents.substr(0,cursor) + str;
    }
    return *this;
}