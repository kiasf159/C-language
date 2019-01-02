### C++을 제대로 공부하려면 다음의 내용을 잘 알고 있어야 한다.
<pre><code>1. 헤더파일의 의미와 정의 방법
2. 헤더파일에 삽입할 내용과 소스파일에 삽입할 내용을 구분하는 방법
3. 둘 이상의 헤더파일과 소스파일을 만들어서 하나의 실행파일로 컴파일하는 방법</code></pre>
윤성우 '열혈 C++ 프로그래밍' 中

### 1번 답
> C언어에서는 내부적으로 지원하는 키워드(ex. int)를 제외하면 나머지는 전부 헤더파일에서 가져온다. 가령 printf를 사용하려면 <stdio.h>를 선언해야
하며, strcmp를 쓰려면 <string.h>가 필요한 것이 대표적. 정의하는 방법은 #include를 통해 라이브러리에서 헤더파일을 가져온다.
### 2번 답
> 헤더파일(.h)은 선언만을 해야하며, 헤더파일에서 선언한 것을 정의하는 소스파일을 따로 만드는 기본원칙을 지켜야 한다. 이렇게 헤더파일을 만들어 놓으면
메인에서 실제 프로그램을 작동하도록 만들 때 헤더파일만 불러오면 된다.
### 3번 답
<pre><code>
// Example.h
namespace BestCom
{
  void SimpleFunc(void);
}

namespace ProgCom
{
  void SimpleFunc(void);
}

// Example.cpp
#include <iostream>
#include <Example.h>
using namespace std;

void BestCom::SimpleFunc(void)
{
  cout << "BestCom이 정의한 함수" << endl;
}

void ProgCom::SimpleFunc(void)
{
  cout << "ProgCom이 정의한 함수" << endl;
}

// Main.cpp
#include <Example.h>

int main()
{
  BestCom::SimpleFunc();
  ProgCom::SimpleFunc();
  return 0;
}
</
