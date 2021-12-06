# Simple Shell
![simple_shell](https://lh3.googleusercontent.com/l7JeVRyaMOEgrO_2KgLkTBtnjGLOgYsw1gQ47gay44XstrH2urYeN8EVSo2ZzHIGp37QNUtxAAl0rZLSZHKDwb4q1grLTSoWS1ynQmpxq6w0IAFjrpl5sVbK0kaTdh7ABBnEc0NrmjWQKAw_Tl6DGo-3m6N70gNV40QYkbTPFAKDczsJ4d7I1LkuWaoDI4yN9DIk1IwfCDQKeExyhOVdNojrMvIpUOp8nnnJA2qRbdLF5nCOvqTigb-oFxdgZ_ij5RLQBn50JSKHd_vzghO37M8ZL-kShjR9KGIGX_UjBrPlXPX7NlAn8xY2GjhsJY7Cm58gf9_piSUp8SXDWYyA5BirguvBlcm4WoxE1_bUTT_2KFvpbV3MY8ud_4z3RPpO1LycQUTy44XiFg9a0COmUX32t-hakM2bjO9TzxXGKCLE5MRzR3O6OWAJA_rtLmJ8APOuUyZVFeVXmZjgQ3D-srkIbUElRGeiF6W-1Nf48WIxON-8hQ18_LspgSvJpboFUX3-bZBuoBCcKZrFlAk-jTAg8vrf9UFeOUdEvbt90bSc-1vi0wxxbvLO-cErANSHC3FpyWitrhxfcJmzrGkhF_NHhDCT0jEiBUDcJmRuP_aZoJC48msmvpW8J-13QxTO6BhtqYkJBlQfGVmI0twPNb-eu-i10yvqA0FHV8Kfjckipsuk-lC9dxBUOSeNQ7DdoZI7XaW8Sl_7vqbu=w600-h337-no?authuser=0)
## _A simple UNIX command interpreter._

[![Code Size](https://img.shields.io/github/languages/code-size/Diegoacosta127/simple_shell)](https://github.com/Diegoacosta127/simple_shell) [![Repo Size](https://img.shields.io/github/repo-size/diegoacosta127/simple_shell)](https://github.com/Diegoacosta127/simple_shell) [![Total Lines](https://img.shields.io/tokei/lines/github/diegoacosta127/simple_shell)](https://github.com/Diegoacosta127/simple_shell)

## Context

[![ubuntu](https://img.shields.io/badge/Ubuntu-E95420?style=for-the-badge&logo=ubuntu&logoColor=white)](https://canonical.com/) **Ubuntu 20.04.3 LTS**

![Script Bash](https://img.shields.io/badge/Shell_Script-121011?style=for-the-badge&logo=gnu-bash&logoColor=white)

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
[![followers-diego](https://img.shields.io/github/followers/diegoacosta127?style=social)](https://github.com/Diegoacosta127) [![Linkedin Diego](https://img.shields.io/badge/-Diego_Acosta-blue?style=plastic&logo=Linkedin&logoColor=white&link=https://www.linkedin.com/in/diegoacosta127/)](https://www.linkedin.com/in/diegoacosta127/)
- Ignacio Castellán García
[![followers-nacho](https://img.shields.io/github/followers/Ignacio-C-Garcia?style=social)](https://github.com/Ignacio-C-Garcia) [![Linkedin Diego](https://img.shields.io/badge/-Ignacio_Castellán_García-blue?style=plastic&logo=Linkedin&logoColor=white&link=https://www.linkedin.com/in/ignacio-ac-garcia)](https://www.linkedin.com/in/ignacio-ac-garcia)

