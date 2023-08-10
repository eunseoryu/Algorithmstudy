#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main()
{
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	int n;
	string exp;
	cin >> n >> exp;

	vector<int> v(n);
	stack<double> st;

	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}

	for (int i = 0; i < exp.length(); i++)
	{
		if (exp[i] >= 'A' && exp[i] <= 'Z')
		{
			st.push(v[exp[i] - 'A']);
		}
		else
		{
			if (!st.empty())
			{
				double tmp = st.top();
				st.pop();
				if (exp[i] == '+')
				{
					tmp = st.top() + tmp;
				}
				else if (exp[i] == '-')
				{
					tmp = st.top() - tmp;
				}
				else if (exp[i] == '*')
				{
					tmp = st.top() * tmp;
				}
				else if (exp[i] == '/')
				{
					tmp = st.top() / tmp;
				}
				st.pop();
				st.push(tmp);
			}
		}
	}
	cout << fixed;
	cout.precision(2);
	cout << st.top() << '\n';
	
	return 0;
}

/*#include <iostream>
#include <stack>
#include <string>

using namespace std;

int n;
string str;
stack<float> num;
float oper [27];


void Input(){
    cin >> n >> str;
    for(int i=0; i<n; i++){
        cin >> oper[i];
    }
}
int order(char op){
    if(op == '*' || op == '/') return 3;
    else if(op == '+' || op == '-') return 2;
    else return 1;
}
float multiple(){         //곱하기
    float a = num.top(); num.pop();
    float b = num.top(); num.pop();
    return a*b;
}
float add(){              //더하기
    float a = num.top(); num.pop();
    float b = num.top(); num.pop();
    return a+b;
}
float abstract(){         //빼기
    float a = num.top(); num.pop();
    float b = num.top(); num.pop();
    return b-a;
}
float divide(){           //나누기
    float a = num.top(); num.pop();
    float b = num.top(); num.pop();
    return b/a;
}

void Calcutor(){
    for(int i=0; i<str.length(); i++){
        if('A' <= str[i] && str[i] <= 'Z'){
            num.push((float)oper[str[i]-'A']);
        }
        else{
            if(str[i] == '+') {
                if(order(str[i+1])>order(str[i])){
                    int a = num.top(); num.pop();
                    if(str[i+1] == '/') num.push(divide());
                    else if(str[i+1] == '*') num.push(multiple());
                    num.push(a);
                    i++;
                }
                num.push(add());
            }
            else if(str[i] == '-') {
                if(order(str[i+1])>order(str[i])){
                    int a = num.top(); num.pop();
                    if(str[i+1] == '/') num.push(divide());
                    else if(str[i+1] == '*') num.push(multiple());
                    num.push(a); 
                    i++;
                }
                num.push(abstract());
            }
            else if(str[i] == '/') num.push(divide());
            else if(str[i] == '*') num.push(multiple());
        }
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    Input();
    Calcutor();

    printf("%.2f", num.top());
    num.pop();

    return 0; 
}*/