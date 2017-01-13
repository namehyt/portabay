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

# Mode Checking

#git config --global core.filemode false                                                       
# alias

alias gitl="git log --graph --pretty=format:'%Cred%h%Creset -%C(yellow)%d%Creset %s %Cgreen(%cr) %C(bold blue)<%an>%Creset' --abbrev-commiti --date-order"
