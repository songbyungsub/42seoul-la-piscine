# 42seoul
(Shell script)
*shell 00*
mkfile - 파일 생성
chmod - 파일권한 명령법
ls - 현재 디렉토리 내의 모든 파일 나열
git add - add 저장
git commit - 커밋
git push - 업로드
other - 숨겨진 파일들 찾기
ignored =  무시하는 파일을 찾기
exclude-standard =  출력 옵션
💡 find (파일이나 디렉토리 찾기)
- find . -type file -name "*txt" : 현재 디렉토리 하위에 있는 파일 중 .txt`가 포함되어있는 파일 찾기
  - 지정한 파일 유형을 찾을 때 사용( -type)

*shell01*
환경변수 설정
특정 사용자에 대해서만 정의된 환경 변수로 로컬 터미널 세션 또는 원격 로그인 세션을 사용하여 로그인할 때마다 로드됨.
c언어에서의 변수선언은 나중에 실행했을때 프로세스에 영향을 주지만 환경변수는 컴퓨터 동작 자체에 영향을 주는 변수선언을 하는것.
printenv 를 통해 환경변수가 제대로 설정되었는지 확인.
find - 현재 디렉토리와 그 하위 디렉토리들에서 파일을 검색
basename - 파일명만 추출하기
wc - 라인 갯수 표시
sed - 다중편집 
ifconfig - 모든 네트워크 인터페이스 구성 확인
grep - 파일의 내용에서 특정 문자열을 찾기
ether - 인터페이스 MAC 주소
awk - 특정 번째 행의 문자열을 출력
rev - 거꾸로 반전하여 출력
tr - 치환 명령어
bc - 연산 언어
