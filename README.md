# Git 사용법
**origin** 에 관한 설명도 넣기...  
## 최신화 (항상 작업전 하기)
- **원본 저장소로부터** 최신화 하기(**fork된 상태**)  
아래 링크 참조  
[\[Git\] Fork 한 repository 최신으로 동기화하기](https://json.postype.com/post/210431)
  
- **master 브랜치로부터** 최신화 하기  
**git pull origin master** 명령어 사용  
(명령어의 의미는 origin(=내 원격 저장소)에 있는 master 브랜치로부터 코드를 가져오겠다는 의미)  
  
![?](./figure/git_pull_origin_master_.png?raw=true)  
  
## 충돌
발생하는 이유
- 작업하기 전에 **pull**을 해서 파일들을 최신화하지 않고 작업하는 경우
- 여러 사용자가 같은 파일을 같이 작업하다가 순서가 꼬인 경우
  
충돌이 발생할 경우 아래와 같이 에러가 발생한다
![?](./figure/conflict1_.png?raw=true)  
  
**git pull origin** <브랜치>를 할 경우 git에서 자동으로 merge를 해준다  
  
![?](./figure/conflict2_.png?raw=true)  
  
merge가 된 경우 아래와 같은 상태를 보여준다  
  
![?](./figure/conflict3_.png?raw=true)  
  
HEAD의 경우 현재 로컬에서 작업 한 내용이고  
0~f로 된 경우 서버에 저장된 내용이다  
  
아래와 같이 수정을 해보았다    
  
![?](./figure/conflict4.png?raw=true)  
  
수정한 내용을 서버에 다시 올린다    
**git add <파일>**  
**git commit -m "<내용>"**  
**git push origin <브랜치>**  
  
![?](./figure/conflict5.png?raw=true)    
  
# Command
- 브랜치 관련
  - git branch: 현재 branch 및 존재하는 branch 확인
  - git branch <이름>: <이름> branch를 하나 생성
  - git branch -d <이름>: <이름> branch를 제거
  - git checkout <이름>: 현재 branch를 <이름> branch로 변경
