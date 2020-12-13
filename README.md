# Git 사용법
  
## 최신화 (항상 작업전 하기)
- **원본 저장소로부터** 최신화 하기(**fork된 상태**)  
아래 링크 참조  
[\[Git\] Fork 한 repository 최신으로 동기화하기](https://json.postype.com/post/210431)
  
- **master 브랜치로부터** 최신화 하기  
**git pull origin master** 명령어 사용  
  
![?](./figure/git_pull_origin_master_.png?raw=true)  
  
## 충돌
발생하는 이유
- 작업하기 전에 **pull**을 해서 파일들을 최신화하지 않고 작업하는 경우
- 여러 사용자가 같은 파일을 같이 작업하다가 순서가 꼬인 경우
  
![?](./figure/1.png?raw=true)  
**< 충돌이 발생한 경우 >**  
  
**pull**을 할 경우 git에서 자동으로 merge를 해준다  
  
![?](./figure/2.png?raw=true)  
**< pull을 통해 최신 버전 다운로드 >**  
  
![?](./figure/3.png?raw=true)  
**< merge된 코드(충돌 상태) >**  
  
위 코드에서 수정을 한 후 다시 서버로 올린다  
아래 그림은 수정된 코드의 예시  
  
![?](./figure/5.png?raw=true)  
**< 수정된 코드(예시) >**  
  
서버로 올리고 **git log**를 통해 로그를 보면 잘 적용이 된 것을 확인 할 수 있다  
  
![?](./figure/6.png?raw=true)  
**< 로그 상태 >**  
  
# Command
- 브랜치 관련
  - git branch: 현재 branch 및 존재하는 branch 확인
  - git branch <이름>: <이름> branch를 하나 생성
  - git branch -d <이름>: <이름> branch를 제거
  - git checkout <이름>: 현재 branch를 <이름> branch로 변경
