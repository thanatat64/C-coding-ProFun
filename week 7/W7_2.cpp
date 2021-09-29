#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    fstream file;
    file.open("text.txt",ios::out);
    string str="";
    do
    {
        getline(cin,str);//getline(รับจากไหน,เอามาใส่อะไร)
        file << str << endl;
        
    } while (str != ".");
    file.close();
    return 0;
}