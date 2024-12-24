//
// Created by 정규재 on 24/12/2024.
//

module; // global module fragment

#include <vector>

// 모듈 시작
export module Math;

// import module

// 1)
export int Add(const int a, const int b) {
    return a + b;
}

// 2)
export {
    void TestExport()
    {}
}

// 3)
export namespace test {
    void TestExport() {

    }
}