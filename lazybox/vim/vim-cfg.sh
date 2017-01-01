ter versions support syntax highlighting. Uncommenting the next
" line enables syntax highlighting by default.
syntax on

" The following are commented out as they cause vim to behave a lot
" differently from regular Vi. They are highly recommended though.
set showcmd             " Show (partial) command in status line.
set showmatch           " Show matching brackets.
"set ignorecase         " Do case insensitive matching
"set smartcase          " Do smart case matching
set incsearch           " Incremental search
"set autowrite          " Automatically save before commands like :next and :make
"set hidden             " Hide buffers when they are abandoned
"set mouse=a            " Enable mouse usage (all modes)

" Source a global configuration file if available
if filereadable("/etc/vim/vimrc.local")
  source /etc/vim/vimrc.local
endif

" add by h
"set nu                  "line-number
set hlsearch            "high-light search
"set bg=dark             "backgroud dark
"set autoindent          "auto indent
"set showmode            "left-down corner state hint
"set ruler               "right-down corner state hint

"colorscheme shine "/usr/share/vim/vim74/colors
