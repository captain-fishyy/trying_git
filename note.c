/*
git --version
git config --global --list用户名与邮箱
git config --global user.name "caoxy"
git config --global user.email ""
git status
git branch -m master main
git init -b main
git add note.c
git log
git commit -m "commands"
提交更新：先把它提交到staging area再commit（否则报错changes not staged for commit）
即先git add note.c再git commit -m ""
git commit -a -m ""跳过staging area
git diff 换行符也算diff，是与staging area相比的diffadd之后就无diff
git diff --staged 
git add . 添加所有的文件
git clone https://github.com/torvalds/linux.git
*/