Unity 개발자가 Unreal Engine으로 전향하려면, C++를 제대로 익히는 것이 핵심입니다. Unity는 C# 기반이고, Unreal은 C++ 기반이기 때문에 언어 차이뿐만 아니라 메모리 관리, 성능 최적화, 엔진 구조 등도 다르게 작용합니다.

다음은 Unity 개발자가 Unreal을 배우기 위해 C++를 공부하는 데 도움이 되는 **실용적 로드맵**입니다.

---

## 🎯 목표: "Unreal Engine에서 효율적으로 개발할 수 있는 수준의 C++ 숙련도"

---

## 1. ✅ 기초 C++ 개념 잡기 (1\~2주)

### 학습 내용

* 변수, 조건문, 반복문
* 함수 정의 및 호출
* 포인터와 참조 (&, \*)
* 배열, 문자열, 벡터
* 구조체와 클래스
* 상속, 다형성
* C++11 이후 기능 (auto, range-for, 람다 등)

### 추천 자료

* [LearnCpp.com](https://www.learncpp.com/) – 구조적으로 잘 구성됨
* 유튜브: The Cherno의 [C++ 시리즈](https://www.youtube.com/playlist?list=PLlrATfBNZ98fqE45g3jZA_hLGUrD4bo6_)

---

## 2. 📦 메모리 관리와 객체 생명 주기 (1\~2주)

### 학습 내용

* 포인터 vs 참조
* 동적 메모리 할당 (`new`, `delete`)
* 스마트 포인터 (`unique_ptr`, `shared_ptr`)
* 복사 생성자 / 이동 생성자 / 소멸자
* RAII 개념

### Unreal 연관성

* Unreal은 GC가 있으나, 여전히 수동 메모리 관리가 중요한 경우 있음
* UObject의 생명주기를 이해하려면 C++ 소멸자 개념이 필수

---

## 3. 🧱 객체지향 & 템플릿 이해 (2\~3주)

### 학습 내용

* 클래스 설계 (public/private/protected)
* 가상 함수, 추상 클래스
* 템플릿 함수, 템플릿 클래스
* STL (vector, map, set 등)

### Unreal 연관성

* Unreal의 `TArray`, `TMap` 등은 STL의 유사 구조체로 구현됨
* 템플릿은 Unreal의 다양한 유틸리티와 매크로 기반 코드 이해에 필수

---

## 4. 🛠 Unreal Engine 특화 C++ 문법 익히기 (2\~3주)

### 학습 내용

* Unreal의 빌드 시스템 (Build.cs)
* UPROPERTY, UFUNCTION, UCLASS 매크로
* UObject와 AActor, Component 구조
* Reflection 시스템 이해
* Garbage Collection 방식

### 추천 자료

* Unreal 공식 문서: [Programming Guide](https://docs.unrealengine.com/)
* 유튜브: [Unreal C++ Fundamentals by Mathew Wadstein](https://www.youtube.com/playlist?list=PLZlv_N0_O1gbY4FN8pZuEPVC9PzQThNn1)
* GitHub: [Unreal C++ 예제 프로젝트](https://github.com/Allar/ue5-style-guide)

---

## 5. 🧩 Unity vs Unreal 비교 학습 (수시 진행)

| 항목       | Unity             | Unreal             |
| -------- | ----------------- | ------------------ |
| 스크립팅 언어  | C#                | C++                |
| 메모리 관리   | GC                | 스마트 포인터 + GC       |
| UI 시스템   | uGUI / UI Toolkit | UMG                |
| 컴포넌트 시스템 | MonoBehaviour 기반  | Actor-Component 기반 |
| 빌드       | Mono/C#           | Unreal Build Tool  |

👉 실제로 동일한 기능 (ex: 이동, 충돌 처리 등)을 Unity와 Unreal에서 구현해보며 비교해보는 것이 효과적입니다.

---

## 6. 🚀 실전: 작은 프로젝트로 연습하기 (1\~2개월)

### 아이디어 예시

* 3D 1인칭 탐험 게임
* 캐릭터 이동 + 카메라 조작 + 상호작용
* UI (HP bar 등)
* 간단한 애니메이션 연동

### 목표

* `AActor`, `UComponent`, `BlueprintCallable`, `TSubclassOf<>` 같은 Unreal C++ 핵심 사용 능력 익히기
* C++로만 기능 구현 → 블루프린트와 연동

---

## 📌 보너스: 블루프린트 ↔ C++ 연동 포인트 익히기

* C++에서 함수 노출하기: `UFUNCTION(BlueprintCallable)`
* 변수 노출하기: `UPROPERTY(EditAnywhere, BlueprintReadWrite)`
* 블루프린트에서 C++ 클래스 상속받기

---

## 🔁 학습 팁

1. **C++ 문법만 파지 말고 Unreal에서 직접 실습하며 학습**하세요.
2. **블루프린트로 먼저 익힌 개념을 C++로 전환**하는 방식도 추천됩니다.
3. **Debugging & Crash Trace 읽는 능력**은 꼭 따로 익히세요 (Unreal은 C++이므로 크래시 로그 분석이 중요).

