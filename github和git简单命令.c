githubʹ�ã�
ע���˺ţ����䣩
����SSH-key
ssh-keygen -t rsa -b 4096 -C "ע��ʱ������"
eval "$(ssh-agent -s)"
ssh-add ~/.ssh/id_rsa
����Կ($HOME/.ssh/rsa.pub)���õ����github�˺��С�
������������ˣ��������´���֤���⣬Ҳ�������µĻ������û���Ŀ¼���½�.sshĿ¼�������ɻ�����֤��id_rsa�����Ŀ¼��

github���زֿ�
git clone git@git@github.com:xcgj/�ֿ���.git

ͬ��
git pull

�ϴ�
git add -A
git commit -m "��ע"
git push origin master:master


gitʹ�ã�
�Ŷӣ�
git init --bare		�ڷ������������ֿ�
git clone �˻���@������:·��	��¡������Ŀ¼
git push origin master:master	origin:����¡��Զ�̿�	����master:������master
git pull			���ظ��´��룬�ӷ��������ش���ͱ��غϲ����������������֮ǰ����������޸Ĳ��ύ�����ش���Ҳ���޸ģ���ô�ϲ������
git merge v1.0		��������֧�Ĵ���ϲ�����ǰ��֧


���ˣ�
/*
git init	����git�ֿ�
git add a.c	�ֿ�������Ŀ
git config --global user.name "Your Name"
git config --global user.email you@example.com
git commit -m ����ע��	��ӱ�ע
git branch v1.0	���Ӱ汾

git add a.c
git commit -m ����ע��	��ӱ�ע
git branch v2.0	���Ӱ汾	//���֮ǰû���ύa.c����ô������Ƴ����Ĳֿ���v1.0�ĸ���

//ɾ���汾2��
git checkout v1.0
git branch -D master
git branch master
git branch -D v2.0
git checkout master

//��ɾ���ļ����ٴӲֿ����ļ�
rm a.c
git checkout a.c
*/

����1:��װ sudo apt-get install git
Windows: gitbash���ٶ�������
����2:��������ֿ�
git init
�������ڵ�ǰĿ¼�£�����һ��git�ֿ�
����3:���޸ĵĴ�����뵽�ֿ�
git add lm.c
git commit -m "version 1.0"
����4:����3�ظ�ִ�ж��
����5:�ύ���ݿ���ͨ��
git revert���г���
����6:����ͨ����֧�����д�汾����
git branch�鿴��ǰ�ֿ�ķ�֧
git branch {branchname} �ڵ�ǰ��֧��״̬�£�������֧
git checkout {branchname}�л���֧
git branch -d {branchname}ɾ����֧
git branch -D {branchname} ǿ��ɾ���д����޸ĵķ�֧������ʹ��
��һ��ʹ��git�ύ����֮ǰ��Ӧ��ʹ��
git config --global user.name "your name"
git config --global user.email "your email"
�ݴ���
�༭Ŀ¼��֮Ϊ�ݴ�ȡ��ֻ�Ǳ༭�����ύ����ôgit�ֿ��У���û�б�����α༭�����ݡ�
��������
git status �鿴�ݴ�ȡ���޸ĵ��ļ�
git log �鿴�ύ��־
git diff �鿴��֧�Ĳ��죬����diff�ļ�
