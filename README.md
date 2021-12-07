# Simple Shell
![simple_shell](https://lh3.googleusercontent.com/pw/AM-JKLVpqL6BFU5Odegn8wUxtdx6YPUhlYflhqF-RkzIYntVijNdtjjyjgCmGfAcp0zk-21yDSiPVWm9Qw6GVmkvY6DWvk9h_ZqrStRoZbPy_A4Zq90oumXPaIuzGtmDwIM_njj54YLiIcGN1HSGuBRxMc0=w600-h337-no?authuser=0)
## _A simple UNIX command interpreter._

[![Code Size](https://img.shields.io/github/languages/code-size/Diegoacosta127/simple_shell)](https://github.com/Diegoacosta127/simple_shell) [![Repo Size](https://img.shields.io/github/repo-size/diegoacosta127/simple_shell)](https://github.com/Diegoacosta127/simple_shell) [![Total Lines](https://img.shields.io/tokei/lines/github/diegoacosta127/simple_shell)](https://github.com/Diegoacosta127/simple_shell)

## Context

[![ubuntu](https://img.shields.io/badge/Ubuntu-E95420?style=for-the-badge&logo=ubuntu&logoColor=white)](https://canonical.com/) **Ubuntu 20.04.3 LTS**

[![Script Bash](https://img.shields.io/badge/Shell_Script-121011?style=for-the-badge&logo=gnu-bash&logoColor=white)](https://www.gnu.org/software/bash/)

[![C](https://img.shields.io/badge/Language-00599C?style=for-the-badge&logo=c&logoColor=white)](https://www.cprogramming.com/) **Compiler version: 9.3.0-17ubuntu~20.04**

[![Vim](https://img.shields.io/badge/VIM_Text_Editor-%2311AB00.svg?&style=for-the-badge&logo=vim&logoColor=white)](https://www.vim.org)

[![Betty](https://img.shields.io/badge/Code_Style-Betty-crimson)](https://github.com/holbertonschool/Betty) **Everybody loves Betty**

[![GitHub](https://img.shields.io/badge/GitHub-100000?style=for-the-badge&logo=github&logoColor=white)](https://github.com)

## Compilation

Run the script `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh`

## Usage
In the _interactive mode_, execute the file `hsh`, and then the prompt line will appear
~~~~
root@ubuntu:/# ./hsh
($)
~~~~
In the above example, the prompt line waits for the user enters a command to execute it. After the execution, the prompt line appears again. To exit the shell the user just have to write `exit` or type `ctrl + d`.

In the _non-interactive mode_, a command must be passed by pipe
~~~~
echo "ls -la /tmp | ./hsh"
~~~~
In the above example, it'll list with long format all the content from the directory `/tmp`, then the prompt won't appear again.

## Credits
- Diego M. Acosta C.
[![followers-diego](https://img.shields.io/github/followers/diegoacosta127?style=social)](https://github.com/Diegoacosta127) [![Linkedin Diego](https://img.shields.io/badge/-Diego_Acosta-blue?style=social&logo=Linkedin&logoColor=blue&link=https://www.linkedin.com/in/diegoacosta127/)](https://www.linkedin.com/in/diegoacosta127/)
- Ignacio Castellán García
[![followers-nacho](https://img.shields.io/github/followers/Ignacio-C-Garcia?style=social)](https://github.com/Ignacio-C-Garcia) [![Linkedin Diego](https://img.shields.io/badge/-Ignacio_Castellán_García-blue?style=social&logo=Linkedin&logoColor=blue&link=https://www.linkedin.com/in/ignacio-ac-garcia)](https://www.linkedin.com/in/ignacio-ac-garcia)

