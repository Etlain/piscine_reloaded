find . -name "*.sh" -print | rev | cut -d/ -f 1 | rev | sed "s/\.sh//" 
