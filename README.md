# HUFS-Algo-Study
죽음의 알고리즘 스터디

## 스터디 할것 + 일정 
매주 수/금 15:30, 2020-1학기 개강 전까지  
파이썬을 이용한 알고리즘을(가능한) 공부합니다

## 스터디 규칙  

### 2월 이전
- 2월이 되기 이전에는 자료구조 내용을 각자 복습해서 커밋합니다
- 자료구조 복습 순서 : 스택 큐+연결리스트(1.18) => 힙+이진트리(1.22) => BST+BBST(1.25) => 해쉬테이블+그래프(1.29)

### 2월 이후
- 2월 이후에는 개념, 주제를 사전에 정하고 관련해서 풀 문제를 정한 뒤, 문제를 풀어옵니다.
- 서로의 코드를 보면서 풀이를 점검합니다 + 개념에 대한 스터디를 진행합니다

**알고리즘 개념+문제풀이 진도(2월 목표 - 책 진도)**

- 1.31 (금) : 정렬 1) 선택/버블/삽입/힙소트
- 2.05 (수) : 정렬 2) 병합/퀵 + 특수정렬(기수+계수)
- 2.07 (금) : 선택/검색 - 이진검색/선형검색/선택
- 2.12 (수) : 트리/그래프 - 여러가지 트리에서의 알고리즘
- 2.14 (금) : 트리/그래프 - 그래프 위상정렬까지
- 2.19 (수) : 동적 프로그래밍(DP기초 + 재귀)
- 2.21 (금) : 그리디 알고리즘 + 매트로이드
- 2.26 (수) : 해시테이블과 집합의 처리

문제풀이 사이트 : [백준 단계별](https://www.acmicpc.net/step)
교재 : [쉽게 배우는 알고리즘](http://www.11st.co.kr/product/SellerProductDetail.tmall?method=getSellerProductDetail&prdNo=2614510342&gclid=CjwKCAiA1L_xBRA2EiwAgcLKA_EKKmDaL3r3O67lxxReZhGIuSYtwvJVtDBuqzX8HVIh_neGfLzGDhoC-aAQAvD_BwE&utm_term=&utm_campaign=%B1%B8%B1%DB%BC%EE%C7%CEPC+%C3%DF%B0%A1%C0%DB%BE%F7&utm_source=%B1%B8%B1%DB_PC_S_%BC%EE%C7%CE&utm_medium=%B0%CB%BB%F6)

## 커밋 유의점 + 깃 팁
- 커밋 메시지에는 *날짜 + 범위 + 추가한 파일 소개*가 꼭 들어가면 좋겠습니당!  
- `git push origin master`가 안 될 때에는 `git pull`해주세요  
- 근데 수정사항이 있는데(`git add`로 수정사항을 스테이지에 올렸을 때) pull 하게되면 기존 파일들의 수정사항이 날아갈 수도 있습니당.
- 그러니까 아예 애초에 커밋 전에 로컬 저장소 안의 폴더들이 최신 버전인지 리모트 저장소를 꼭 확인해주세요  
- `git push -f origin master` 쓰시면 강제로 자신의 로컬 레포지토리 내용을 리모트와 동기화합니다(정 안될때 쓰세용)   
- `git log`쓰시면 로컬 저장소의 이전 커밋 내역을 볼 수 있습니다  

## 알고리즘 문제 참고 사이트
많이 풀수록 좋습니당

- [백준 단계별](https://www.acmicpc.net/step)
- [코드업](https://codeup.kr/)
- [구름 레벨](https://level.goorm.io/)
- [프로그래머스](https://programmers.co.kr/)

## 파이썬 알고리즘 풀때 유의사항
파이썬은 c++, java보다 느려서 채점에 불리한 점이 있음. 백준에서 시간초과 안나려면...
1. 입출력시 `import sys`해서 sys모듈로 입출력 처리하기
  - `input()`은 `sys.stdin.readline()`으로
  - `print()`는 `sys.stdout.write()`으로 대체할 것
  - **일반 IDE에서는 안먹히고 터미널이나 명령 프롬프트에서 돌려야함!**
2. `python3` 컴파일러보다 `pypy3`가 더 빠를 수 있다
3. 재귀함수 사용할 경우 `sys.setrecursionlimit()`으로 최대 재귀 깊이를 설정해줘야 한다

참고 : [파이썬으로 문제 풀 때 유의점](https://dailyheumsi.tistory.com/32)

## 깃공부 참고 사이트
참고하시면 좋습니당  

- [지옥에서 온 깃 - 생활코딩](https://www.youtube.com/watch?v=hFJZwOfme6w&list=PLuHgQVnccGMA8iwZwrGyNXCGy2LAAsTXk)  
- [git push rejected 오류](https://devx.tistory.com/entry/git-push-%EC%8B%9C-%EC%98%A4%EB%A5%98%EB%A9%94%EC%84%B8%EC%A7%80-%EB%B0%9C%EC%83%9D%EC%9B%90%EC%9D%B8)  
- [git 기본적인 사용법](https://devx.tistory.com/entry/git-push-%EC%8B%9C-%EC%98%A4%EB%A5%98%EB%A9%94%EC%84%B8%EC%A7%80-%EB%B0%9C%EC%83%9D%EC%9B%90%EC%9D%B8)  
- [누구나 쉽게 이해할 수 있는 git](https://backlog.com/git-tutorial/kr/)