guagua@guagua-PC MINGW64 ~
$ git config --list
core.symlinks=false
core.autocrlf=true
color.diff=auto
color.status=auto
color.branch=auto
color.interactive=true
help.format=html
http.sslcainfo=C:/Git/mingw64/ssl/certs/ca-bundle.crt
diff.astextplain.textconv=astextplain
rebase.autosquash=true
user.name=clq741
user.email=2022887042@qq.com
alias.lg=log --color --graph --pretty=format:'%Cred%h%Creset -%C(yellow)%d%Creset %s %Cgreen(%cr) %C(bold blue)<%an>%Creset' --abbrev-commit --
alias.um=push origin HEAD:refs/for/master
alias.uc=push origin HEAD:refs/for/coupon

guagua@guagua-PC MINGW64 ~
$ ssh-keygen -t rsa -C "2022887042@qq.com"
Generating public/private rsa key pair.
Enter file in which to save the key (/c/Users/guagua/.ssh/id_rsa):
Enter passphrase (empty for no passphrase):
Enter same passphrase again:
Your identification has been saved in /c/Users/guagua/.ssh/id_rsa.
Your public key has been saved in /c/Users/guagua/.ssh/id_rsa.pub.
The key fingerprint is:
SHA256:9zXcQ+4FhTTle5Wq1rmR2kteCasz1hTz8+QC29AmDjE 2022887042@qq.com
The key's randomart image is:
+---[RSA 2048]----+
|             .ooo|
|              .+.|
|              .oo|
|          E  ++oo|
|        S .o +B++|
|         ...*oO+*|
|           =+# *o|
|          .+O.* o|
|          .oo=.. |
+----[SHA256]-----+


guagua@guagua-PC MINGW64 ~
$

guagua@guagua-PC MINGW64 ~
$ ssh -T git@github.com
The authenticity of host 'github.com (192.30.255.113)' can't be established.
RSA key fingerprint is SHA256:nThbg6kXUpJWGl7E1IGOCspRomTxdCARLviKw6E5SY8.
Are you sure you want to continue connecting (yes/no)?
Host key verification failed.

guagua@guagua-PC MINGW64 ~
$ ssh -T git@github.com
The authenticity of host 'github.com (192.30.255.113)' can't be established.
RSA key fingerprint is SHA256:nThbg6kXUpJWGl7E1IGOCspRomTxdCARLviKw6E5SY8.
Are you sure you want to continue connecting (yes/no)? yes
Warning: Permanently added 'github.com,192.30.255.113' (RSA) to the list of known hosts.
Hi clq741! You've successfully authenticated, but GitHub does not provide shell access.

guagua@guagua-PC MINGW64 ~
$ git clone
You must specify a repository to clone.

usage: git clone [<options>] [--] <repo> [<dir>]

    -v, --verbose         be more verbose
    -q, --quiet           be more quiet
    --progress            force progress reporting
    -n, --no-checkout     don't create a checkout
    --bare                create a bare repository
    --mirror              create a mirror repository (implies bare)
    -l, --local           to clone from a local repository
    --no-hardlinks        don't use local hardlinks, always copy
    -s, --shared          setup as shared repository
    --recursive           initialize submodules in the clone
    --recurse-submodules  initialize submodules in the clone
    --template <template-directory>
                          directory from which templates will be used
    --reference <repo>    reference repository
    --dissociate          use --reference only while cloning
    -o, --origin <name>   use <name> instead of 'origin' to track upstream
    -b, --branch <branch>
                          checkout <branch> instead of the remote's HEAD
    -u, --upload-pack <path>
                          path to git-upload-pack on the remote
    --depth <depth>       create a shallow clone of that depth
    --single-branch       clone only one branch, HEAD or --branch
    --separate-git-dir <gitdir>
                          separate git dir from working tree
    -c, --config <key=value>
                          set config inside the new repository


guagua@guagua-PC MINGW64 ~
$ git clone cpp
fatal: repository 'cpp' does not exist

guagua@guagua-PC MINGW64 ~
$ git clone git@github.com:clq741/cpp.git
Cloning into 'cpp'...
Warning: Permanently added the RSA host key for IP address '192.30.255.112' to the list of known hosts.
warning: You appear to have cloned an empty repository.
Checking connectivity... done.

guagua@guagua-PC MINGW64 ~
$ ls -l
total 6997
lrwxrwxrwx 1 guagua 197121      60 10月  7  2016 「开始」菜单 -> /c/Users/guagua/AppData/Roaming/Microsoft/Windows/Start Menu/
drwxr-xr-x 1 guagua 197121       0 10月  7  2016 AppData/
lrwxrwxrwx 1 guagua 197121      31 10月  7  2016 Application Data -> /c/Users/guagua/AppData/Roaming/
drwxr-xr-x 1 guagua 197121       0 11月  7  2015 CMB/
drwxr-xr-x 1 guagua 197121       0 7月  16 12:38 Contacts/
lrwxrwxrwx 1 guagua 197121      59 10月  7  2016 Cookies -> /c/Users/guagua/AppData/Local/Microsoft/Windows/INetCookies/
drwxr-xr-x 1 guagua 197121       0 7月  20 15:15 cpp/
drwxr-xr-x 1 guagua 197121       0 7月  20 13:54 Desktop/
drwxr-xr-x 1 guagua 197121       0 7月  16 12:38 Documents/
drwxr-xr-x 1 guagua 197121       0 7月  20 12:52 Downloads/
drwxr-xr-x 1 guagua 197121       0 7月  16 12:38 Favorites/
drwxr-xr-x 1 guagua 197121       0 7月  16 12:38 Links/
lrwxrwxrwx 1 guagua 197121      29 10月  7  2016 Local Settings -> /c/Users/guagua/AppData/Local/
drwxr-xr-x 1 guagua 197121       0 11月 30  2015 logs/
drwxr-xr-x 1 guagua 197121       0 7月  16 12:38 Music/
lrwxrwxrwx 1 guagua 197121      25 10月  7  2016 My Documents -> /c/Users/guagua/Documents/
lrwxrwxrwx 1 guagua 197121      67 10月  7  2016 NetHood -> /c/Users/guagua/AppData/Roaming/Microsoft/Windows/Network Shortcuts/
-rw-r--r-- 1 guagua 197121 3932160 7月  20 14:11 NTUSER.DAT
-rw-r--r-- 1 guagua 197121  393216 10月  7  2016 ntuser.dat.LOG1
-rw-r--r-- 1 guagua 197121 1015808 10月  7  2016 ntuser.dat.LOG2
-rw-r--r-- 1 guagua 197121   65536 4月   6 15:58 NTUSER.DAT{84c541e4-8c50-11e6-89b3-87a780260c6c}.TM.blf
-rw-r--r-- 1 guagua 197121  524288 4月   6 15:58 NTUSER.DAT{84c541e4-8c50-11e6-89b3-87a780260c6c}.TMContainer00000000000000000001.regtrans-ms
-rw-r--r-- 1 guagua 197121  524288 4月   6 15:58 NTUSER.DAT{84c541e4-8c50-11e6-89b3-87a780260c6c}.TMContainer00000000000000000002.regtrans-ms
-rw-r--r-- 1 guagua 197121      20 10月  8  2016 ntuser.ini
drwxr-xr-x 1 guagua 197121       0 10月  8  2016 OneDrive/
drwxr-xr-x 1 guagua 197121       0 7月  16 12:38 Pictures/
lrwxrwxrwx 1 guagua 197121      67 10月  7  2016 PrintHood -> /c/Users/guagua/AppData/Roaming/Microsoft/Windows/Printer Shortcuts/
lrwxrwxrwx 1 guagua 197121      56 10月  7  2016 Recent -> /c/Users/guagua/AppData/Roaming/Microsoft/Windows/Recent/
drwxr-xr-x 1 guagua 197121       0 7月  16 12:38 Saved Games/
drwxr-xr-x 1 guagua 197121       0 7月  16 12:38 Searches/
lrwxrwxrwx 1 guagua 197121      56 10月  7  2016 SendTo -> /c/Users/guagua/AppData/Roaming/Microsoft/Windows/SendTo/
lrwxrwxrwx 1 guagua 197121      59 10月  7  2016 Templates -> /c/Users/guagua/AppData/Roaming/Microsoft/Windows/Templates/
drwxr-xr-x 1 guagua 197121       0 7月  16 12:38 Videos/

guagua@guagua-PC MINGW64 ~
$ cd /cpp
bash: cd: /cpp: No such file or directory

guagua@guagua-PC MINGW64 ~
$ cd cpp/

guagua@guagua-PC MINGW64 ~/cpp (master)
$ cd /d

guagua@guagua-PC MINGW64 /d (master)
$ cd git-demo/

guagua@guagua-PC MINGW64 /d/git-demo (master)
$ ls -l
total 4
-rw-r--r-- 1 guagua 197121 264 7月  20 09:11 004.c
-rw-r--r-- 1 guagua 197121 262 7月  19 13:21 004.md
-rw-r--r-- 1 guagua 197121  17 7月  20 03:21 LICRNSE
-rw-r--r-- 1 guagua 197121  23 7月  20 03:21 README.md

guagua@guagua-PC MINGW64 /d/git-demo (master)
$ git remote -v
origin  https://your_username@bitbucket.org/your_username/name_of_remote_repository.git (fetch)
origin  https://your_username@bitbucket.org/your_username/name_of_remote_repository.git (push)

guagua@guagua-PC MINGW64 /d/git-demo (master)
$ git remote add origin git@github.com:clq741/cpp.git
fatal: remote origin already exists.

guagua@guagua-PC MINGW64 /d/git-demo (master)
$ git remote set-url origin git@github.com:clq741/cpp.git

guagua@guagua-PC MINGW64 /d/git-demo (master)
$ git remote -v
origin  git@github.com:clq741/cpp.git (fetch)
origin  git@github.com:clq741/cpp.git (push)

guagua@guagua-PC MINGW64 /d/git-demo (master)
$ git push -u origin master
Counting objects: 17, done.
Delta compression using up to 4 threads.
Compressing objects: 100% (12/12), done.
Writing objects: 100% (17/17), 1.58 KiB | 0 bytes/s, done.
Total 17 (delta 2), reused 0 (delta 0)
remote: Resolving deltas: 100% (2/2), done.
To git@github.com:clq741/cpp.git
 * [new branch]      master -> master
Branch master set up to track remote branch master from origin.

guagua@guagua-PC MINGW64 /d/git-demo (master)
$ git pull
Already up-to-date.

guagua@guagua-PC MINGW64 /d/git-demo (master)
$ git rm 004.md
rm '004.md'

guagua@guagua-PC MINGW64 /d/git-demo (master)
$ git status
On branch master
Your branch is up-to-date with 'origin/master'.
Changes to be committed:
  (use "git reset HEAD <file>..." to unstage)

        deleted:    004.md


guagua@guagua-PC MINGW64 /d/git-demo (master)
$ ls -l
total 3
-rw-r--r-- 1 guagua 197121 264 7月  20 09:11 004.c
-rw-r--r-- 1 guagua 197121  17 7月  20 03:21 LICRNSE
-rw-r--r-- 1 guagua 197121  23 7月  20 03:21 README.md

guagua@guagua-PC MINGW64 /d/git-demo (master)
$ git log
commit 9f9cfd78f27bad5533bc870d72aa638fcc639c16
Author: clq741 <2022887042@qq.com>
Date:   Thu Jul 20 17:27:18 2017 +0800

    add 004.c file

commit 6ca823222c1cf36e12326173d2852648e8ab5934
Author: clq741 <2022887042@qq.com>
Date:   Thu Jul 20 17:13:02 2017 +0800

    add a 004.c file

commit 29260ce0815ecc0880c35ed3095c52e88adc048c
Author: clq741 <2022887042@qq.com>
Date:   Thu Jul 20 16:45:50 2017 +0800

    add a 004.c file

commit 90ec2f2d3c40f512969c260ada312bfcb8f4a86d
Author: clq741 <2022887042@qq.com>

guagua@guagua-PC MINGW64 /d/git-demo (master)
$ git lg
* 9f9cfd7 - (HEAD -> master, origin/master) add 004.c file (6 hours ago) <clq741>
* 6ca8232 - add a 004.c file (6 hours ago) <clq741>
* 29260ce - add a 004.c file (7 hours ago) <clq741>
* 90ec2f2 - add a LICRNSE file (13 hours ago) <clq741>
* 5317290 - add a reading file (13 hours ago) <clq741>
* 105aaee - add a reading file (25 hours ago) <clq741>

guagua@guagua-PC MINGW64 /d/git-demo (master)
$ git commit -m"delete 004.md"
[master 189d362] delete 004.md
 1 file changed, 16 deletions(-)
 delete mode 100644 004.md

guagua@guagua-PC MINGW64 /d/git-demo (master)
$ ls -l
total 3
-rw-r--r-- 1 guagua 197121 264 7月  20 09:11 004.c
-rw-r--r-- 1 guagua 197121  17 7月  20 03:21 LICRNSE
-rw-r--r-- 1 guagua 197121  23 7月  20 03:21 README.md

guagua@guagua-PC MINGW64 /d/git-demo (master)
$ git status
On branch master
Your branch is ahead of 'origin/master' by 1 commit.
  (use "git push" to publish your local commits)
nothing to commit, working directory clean

guagua@guagua-PC MINGW64 /d/git-demo (master)
$ git push
warning: push.default is unset; its implicit value has changed in
Git 2.0 from 'matching' to 'simple'. To squelch this message
and maintain the traditional behavior, use:

  git config --global push.default matching

To squelch this message and adopt the new behavior now, use:

  git config --global push.default simple

When push.default is set to 'matching', git will push local branches
to the remote branches that already exist with the same name.

Since Git 2.0, Git defaults to the more conservative 'simple'
behavior, which only pushes the current branch to the corresponding
remote branch that 'git pull' uses to update the current branch.

See 'git help config' and search for 'push.default' for further information.
(the 'simple' mode was introduced in Git 1.7.11. Use the similar mode
'current' instead of 'simple' if you sometimes use older versions of Git)

Counting objects: 2, done.
Delta compression using up to 4 threads.
Compressing objects: 100% (2/2), done.
Writing objects: 100% (2/2), 216 bytes | 0 bytes/s, done.
Total 2 (delta 1), reused 0 (delta 0)
remote: Resolving deltas: 100% (1/1), completed with 1 local object.
To git@github.com:clq741/cpp.git
   9f9cfd7..189d362  master -> master

guagua@guagua-PC MINGW64 /d/git-demo (master)
$ git branch -v -a
* master                189d362 delete 004.md
  remotes/origin/master 189d362 delete 004.md

guagua@guagua-PC MINGW64 /d/git-demo (master)
$ git remote -v
origin  git@github.com:clq741/cpp.git (fetch)
origin  git@github.com:clq741/cpp.git (push)

guagua@guagua-PC MINGW64 /d/git-demo (master)
$ git push origin master
Everything up-to-date

guagua@guagua-PC MINGW64 /d/git-demo (master)
$ git add 005.c

guagua@guagua-PC MINGW64 /d/git-demo (master)
$ git status
On branch master
Your branch is up-to-date with 'origin/master'.
Changes to be committed:
  (use "git reset HEAD <file>..." to unstage)

        new file:   005.c


guagua@guagua-PC MINGW64 /d/git-demo (master)
$ git commit -m "add a 005.c file"
[master da92ce8] add a 005.c file
 1 file changed, 0 insertions(+), 0 deletions(-)
 create mode 100644 005.c

guagua@guagua-PC MINGW64 /d/git-demo (master)
$ git pull
Already up-to-date.

guagua@guagua-PC MINGW64 /d/git-demo (master)
$ ls -l
total 3
-rw-r--r-- 1 guagua 197121 264 7月  20 09:11 004.c
-rw-r--r-- 1 guagua 197121   0 7月  20 15:46 005.c
-rw-r--r-- 1 guagua 197121  17 7月  20 03:21 LICRNSE
-rw-r--r-- 1 guagua 197121  23 7月  20 03:21 README.md

guagua@guagua-PC MINGW64 /d/git-demo (master)
$ git push -u origin master

Counting objects: 3, done.
Delta compression using up to 4 threads.
Compressing objects: 100% (2/2), done.
Writing objects: 100% (3/3), 255 bytes | 0 bytes/s, done.
Total 3 (delta 1), reused 0 (delta 0)
remote: Resolving deltas: 100% (1/1), completed with 1 local object.
To git@github.com:clq741/cpp.git
   189d362..da92ce8  master -> master
Branch master set up to track remote branch master from origin.

guagua@guagua-PC MINGW64 /d/git-demo (master)
$

guagua@guagua-PC MINGW64 /d/git-demo (master)
$ git pull
Already up-to-date.

guagua@guagua-PC MINGW64 /d/git-demo (master)
$ git diff 005.c
diff --git a/005.c b/005.c
index e69de29..53c5fdf 100644
--- a/005.c
+++ b/005.c
@@ -0,0 +1 @@
+#include <stdio.h>

guagua@guagua-PC MINGW64 /d/git-demo (master)
$ git push -u origin master
Branch master set up to track remote branch master from origin.
Everything up-to-date

guagua@guagua-PC MINGW64 /d/git-demo (master)
$ git pull
Already up-to-date.

guagua@guagua-PC MINGW64 /d/git-demo (master)
$ git status
On branch master
Your branch is up-to-date with 'origin/master'.
Changes not staged for commit:
  (use "git add <file>..." to update what will be committed)
  (use "git checkout -- <file>..." to discard changes in working directory)

        modified:   005.c

no changes added to commit (use "git add" and/or "git commit -a")

guagua@guagua-PC MINGW64 /d/git-demo (master)
$ git commit -m "修改005.c"
On branch master
Your branch is up-to-date with 'origin/master'.
Changes not staged for commit:
        modified:   005.c

no changes added to commit

guagua@guagua-PC MINGW64 /d/git-demo (master)
$ git add 005.c

guagua@guagua-PC MINGW64 /d/git-demo (master)
$ git commit -m "修改005.c"
[master 9714d2e] 修改005.c
 1 file changed, 1 insertion(+)

guagua@guagua-PC MINGW64 /d/git-demo (master)
$ git push -u origin master
Counting objects: 3, done.
Delta compression using up to 4 threads.
Compressing objects: 100% (2/2), done.
Writing objects: 100% (3/3), 351 bytes | 0 bytes/s, done.
Total 3 (delta 0), reused 0 (delta 0)
To git@github.com:clq741/cpp.git
   da92ce8..9714d2e  master -> master
Branch master set up to track remote branch master from origin.

guagua@guagua-PC MINGW64 /d/git-demo (master)
$ git pull
Already up-to-date.

guagua@guagua-PC MINGW64 /d/git-demo (master)
$ ls -l
total 4
-rw-r--r-- 1 guagua 197121 264 7月  20 09:11 004.c
-rw-r--r-- 1 guagua 197121  20 7月  20 15:53 005.c
-rw-r--r-- 1 guagua 197121  17 7月  20 03:21 LICRNSE
-rw-r--r-- 1 guagua 197121  23 7月  20 03:21 README.md

guagua@guagua-PC MINGW64 /d/git-demo (master)
$ git status
On branch master
Your branch is up-to-date with 'origin/master'.
nothing to commit, working directory clean

guagua@guagua-PC MINGW64 /d/git-demo (master)
$
