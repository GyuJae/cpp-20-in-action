#include <iostream>
#include <list>
#include <algorithm>
import Math;

using namespace std;

// Module (모듈)


int main() {
    // 전처리
     // - #include, #define
    // 컴파일
    // - 오브젝트 파일, .obj
    // 링크
    // -

    // 1. 빌드 속도가 너무 느리다. -> 반복된
    // 2. 매크로 #define
    // 3, 심볼 중복 정의

    // Module
    // - 모듈은 딱 한번만 import
    // - import 순서가 상관없음
    // - 심볼 중복 정의
    // - 모듈의 이름도 지정가능
    // - 인터페이스/ 구현부 분리 관리할 필요 없음

    int sum = Add(1, 2);
    test::TestExport();
    return 0;
}
