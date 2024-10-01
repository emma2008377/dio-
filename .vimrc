""
"" Epitech configuration
""

if filereadable(glob("/home/emmanuel/.vim/epitech.vim"))        
	source /home/emmanuel/.vim/epitech.vim
else
	echoerr "Cant find epitech.vim configuration file"
endif
