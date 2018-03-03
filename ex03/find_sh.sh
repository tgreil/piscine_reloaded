find . -type f -name "*.sh" -print | sed 's/\.sh//' | rev | sed 's/\/.*//' | rev
