### Установка Gnu Compiler Collection

#### MacOS

```bash
brew install gcc
```

#### Linux

```bash
sudo apt update

sudo apt install build-essential
```

#### Windows

##### Через CMD

```bash
Установисть Chocolately: https://chocolatey.org/install

В терминале(Администратор):
choco install mingw
```

##### Через Bash

```
https://www.msys2.org/
```

### Использование GCC

```bash
1. Простое использование
gcc main.c

2. Смена названия исполняемого файла
gcc -o app.exe main.c

3. Выбор версии стандарта C
gcc -std=c99 main.c

4. Флаги проверки кода при компиляции
gcc -Wall -Wpedantic -Werror -Wextra main.c
```

