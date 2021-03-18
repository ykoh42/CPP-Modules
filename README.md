# CPP Modules

# Contents

## Module 00
| EX | PROGRAM | DESCRIPTION |
|-|-|-|
| ex00 | megaphone | converts to upper string. |
| ex01 | phonebook | behaves like a `crappy` awesome phonebook software. |

### Namespace
 - 대규모 프로젝트에서 이름 충돌을 방지하는 방법을 제공.

### class
 - `struct`의 확장된 개념.  
 - `struct`처럼 `data member`를 포함할 수 있지만, `fuction member`도 포함할 수 있음.
 - `class`의 `instance`를 `object`라고 함.
 - 추상화를 사용자 정의 타입으로 구현한 것으로 볼수 있음.
 - `variables` 관점에서 보면, `class`는 `type`이고, `object`는 `variable`임.

### member functions
 - 하나의 `class`에서 생성된 `instance`는 각각 독립된 메모리 공간에 저장된 자신만의 `member varialble`를 가지지만, `member function`는 모든 `instance`가 공유함.

### stdio stream
 - http://www.cplusplus.com/reference/istream/iostream/

### this
호출한 `object`를 가리키는 `pointer`.

### static
 - http://www.tcpschool.com/cpp/cpp_encapsulation_staticConst
#### static memeber variable
 - `class`에는 속하지만, `object` 별로 할당되지 않고, `class`의 모든 `object`가 공유하는 `member`.
#### static memeber function
 - `class`의 `object`를 생성하지 않고도, `class` 이름만으로 호출가능.
 - `object`를 가지지 않으므로 `this` 포인터가 없음.
 - 특정 `object`와 결합하지 않으므로, `static member variable` 밖에 사용할 수 없음.

### const
 - http://www.tcpschool.com/cpp/cpp_encapsulation_staticConst
#### constant member variable
 - 한번 초기화하면, 그 값을 변경할 수 없는 `member variable`.
 - `class` 전체에 걸쳐 사용되는 중요한 상수에 사용하면 좋음.
#### constant member function
 - 호출한 `object`의 data를 변경할 수 없는 `member finction`.
 - 단순히 읽기만 하는 `member function`에 사용하면 좋음.

### initialization lists
 - `const member variable`을 초기화 할 때.
 - `reference member variable`을 초기화 할 때.
 - `class`에 member로 다른 `class`의 `instance`를 포함할 때.
 - `inheritance` 받은 `member variable`을 초기화 할때.

## Module 01
Memory allocation, References, Pointers to members, File streams
## Module 02
Ad-hoc polymorphism, operators overload and canonical classes
## Module 03
Inheritance
## Module 04
Subtype polymorphism, abstract classes, interfaces
## Module 05
Repetition and Exceptions
## Module 06
C++ Casts
## Module 07
c++ Templates
## Module 08
Templated containers, iterators, algorithms


