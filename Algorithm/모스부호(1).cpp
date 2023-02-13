#include <string>
#include <vector>
#include <map>

using namespace std;

vector<string> morse{
".-","a","-..." , "b","-.-." , "c","-.." , "d","." , "e","..-." , "f",
"--." , "g","...." , "h",".." , "i",".---" , "j","-.-" , "k",".-.." , "l",
"--" , "m","-." , "n","---" , "o",".--." , "p","--.-" , "q",".-." , "r",
"..." , "s","-" , "t","..-" , "u","...-" , "v",".--" , "w","-..-" , "x",
"-.--" , "y","--.." , "z"
};

string solution(string letter) {
    string answer = "";
    string temp = "";

    map<string, string> m;

    for (int i = 0; i < morse.size(); i += 2)
        m.emplace(morse[i], morse[i + 1]);

    for (auto ch : letter)
    {
        if (ch == ' ')
        {
            answer += m[temp];
            temp = "";
            continue;
        }

        temp += ch;
    }

    answer += m[temp];

    return answer;
}