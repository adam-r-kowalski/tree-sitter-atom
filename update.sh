tree-sitter generate
gcc -I./src -o src/parser.so -shared src/parser.c
cp queries/*.scm /Users/adam/.local/share/nvim/site/pack/packer/start/nvim-treesitter/queries/atom
cp src/parser.so /Users/adam/.local/share/nvim/site/pack/packer/start/nvim-treesitter/parser/atom.so
