github使用：
注册账号（邮箱）
设置SSH-key
ssh-keygen -t rsa -b 4096 -C "注册时的邮箱"
eval "$(ssh-agent -s)"
ssh-add ~/.ssh/id_rsa
将公钥($HOME/.ssh/rsa.pub)设置到你的github账号中。
如果机器更换了，除了重新创建证书外，也可以在新的机器的用户主目录下新建.ssh目录，拷贝旧机器的证书id_rsa到这个目录下

github下载仓库
git clone git@git@github.com:xcgj/仓库名.git

同步
git pull

上传
git add -A
git commit -m "备注"
git push origin master:master


git使用：
团队：
git init --bare		在服务器建立纯仓库
git clone 账户名@服务器:路径	克隆服务器目录
git push origin master:master	origin:被克隆的远程库	本地master:服务器master
git pull			本地更新代码，从服务器下载代码和本地合并，如果服务器代码之前有另外的人修改并提交，本地代码也有修改，那么合并会出错
git merge v1.0		将其他分支的代码合并到当前分支


个人：
/*
git init	创建git仓库
git add a.c	仓库增加项目
git config --global user.name "Your Name"
git config --global user.email you@example.com
git commit -m “备注”	添加备注
git branch v1.0	增加版本

git add a.c
git commit -m “备注”	添加备注
git branch v2.0	增加版本	//如果之前没有提交a.c，那么这个复制出来的仓库是v1.0的副本

//删除版本2：
git checkout v1.0
git branch -D master
git branch master
git branch -D v2.0
git checkout master

//先删除文件，再从仓库获得文件
rm a.c
git checkout a.c
*/

步骤1:安装 sudo apt-get install git
Windows: gitbash（百度搜索）
步骤2:创建代码仓库
git init
该命令在当前目录下，创建一个git仓库
步骤3:将修改的代码加入到仓库
git add lm.c
git commit -m "version 1.0"
步骤4:步骤3重复执行多次
步骤5:提交内容可以通过
git revert进行撤销
步骤6:可以通过分支来进行大版本管理
git branch查看当前仓库的分支
git branch {branchname} 在当前分支的状态下，创建分支
git checkout {branchname}切换分支
git branch -d {branchname}删除分支
git branch -D {branchname} 强制删除有代码修改的分支，慎重使用
第一次使用git提交代码之前，应该使用
git config --global user.name "your name"
git config --global user.email "your email"
暂存区
编辑目录称之为暂存取，只是编辑，不提交，那么git仓库中，并没有保存这次编辑的内容。
其他命令
git status 查看暂存取有修改的文件
git log 查看提交日志
git diff 查看分支的差异，生成diff文件
