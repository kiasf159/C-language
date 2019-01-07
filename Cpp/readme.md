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
#include "iostream"
#include "Example.h"
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
#include "Example.h"

int main()
{
  BestCom::SimpleFunc();
  ProgCom::SimpleFunc();
  return 0;
}
</code></pre>

### 문제 4 - 키워드 const의 의미
<pre><code>
const int num = 10;
const int *ptr1 = &val1;
int *const ptr2 = &val2;
const int *const ptr3 = &val3;
</code></pre>

### 문제 5 - 실행 중인 프로그램의 메모리 공간
> 실행 중인 프로그램은 운영체제로부터 메모리 공간을 할당받는데, 이는 크게 데이터, 스택, 힙 영역으로 나뉜다. 각각의 영역에는 어떠한 형태의 변수가
할당되는지 설명해보고. (malloc, free 포함)

### 문제 6 - Call by-value vs Call by-reference
> 함수의 호출형태는 크게 2가지로 나뉨. 값과 참조에 의한 호출. 각각의 차이는?

### 4번 답
> 변수 num을 상수화(define) / 포인터 ptr1을 이용해서 val의 값을 고정, 수정불가 / 포인터 ptr2가 상수화 / 포인터 ptr3가 상수화, ptr3를 이용해
val3의 값을 변경할 수 없음

### 5번 답 - MASM Assembly 참고
> 데이터 세그먼트(DS) = 전역변수, 스택(Stack) = 지역변수 및 매개변수가 저장되는 영역, 힙(Heap) = 동적할당이 이뤄지는 영역(Malloc, Calloc)
free를 하지 않으면 malloc 공간이 해제되지 않는다.

### 6번 답
> 대표적으로 Swap 함수를 사용할 때 값에 의한 호출을 할 경우 main에서 호출된 Swap 함수는 내부적으로 두 개의 숫자를 서로 바꾸지만, 그 함수를 나가는
순간 데이터를 잃고 main 함수에 적용되지 않는다. 반면 참조에 의한 호출은 주소를 이용한 참조이므로 Swap함수를 나가더라도 main에 영향을 미친다.
