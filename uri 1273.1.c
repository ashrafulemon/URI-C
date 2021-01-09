
#include <string>
#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    int N,length,mark = 0;
    vector<string> words;
    string word;
    while(cin>>N&&N)
    {
        length = 0;

        for(int i = 0 ; i<N; i++)
        {
            cin>>word;
            if(word.length()>length)
                length = word.length();
            words.push_back(word);
        }
        if(mark!=0)
            cout<<endl;
        else
            mark = 1;
        for(int i = 0; i<N; i++)
        {
            cout<<right<<setw(length)<<words.at(i)<<endl;
        }

        words.clear();

    }

}
