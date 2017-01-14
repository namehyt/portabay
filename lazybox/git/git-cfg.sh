# configuration can be:
#   --system      os-wide
#   --global      user-wide
#   --local       repository-wide
#
#

# Color

git config --global color.interactive auto  
git config --global color.grep auto  
git config --global color.diff auto
git config --global color.status auto
git config --global color.branch auto
git config --global color.ui auto

# Identity

git config --global user.name "h"
git config --global user.email h@h.h

# Editor

git config --global core.editor vim

# Merge

git config --global merge.commit no
git config --global merge.ff no

# Mode Checking

#git config --global core.filemode false                                                       

# alias

git config --global alias.ll "log --graph --pretty=format:'%C(yellow)%h%Creset -%C(yellow)%d%Creset %s %Cgreen(%cr) %C(bold blue)<%an>%Creset' --abbrev-commit --date-order"
git config --global alias.lla "log --graph --pretty=format:'%C(yellow)%h%Creset -%C(yellow)%d%Creset %s %Cgreen(%cr) %C(bold blue)<%an>%Creset' --abbrev-commit --date-order --all"
git config --global alias.l "log --color --graph --decorate --oneline --abbrev-commit --date-order"
git config --global alias.la "log --color --graph --decorate --oneline --abbrev-commit --date-order --all"
