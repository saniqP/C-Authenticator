# C-Authenticator

## Это вторая аунтатификация в linux(в терминале)

ваш код хранится: ``/etc/code``

ваш стандартный код: `5188`

ваш пароль: имя вашей системы|код

для авто запуска в терминале в конфигурационный файл вашего shell(bash,zsh) добавте:

```zsh
  if [ -z "$KITTY_AUTH_DONE" ]; then
    export KITTY_AUTH_DONE=1
    /home/$USER/.local/share/.linuxA/main
    # Если программа завершится - zsh продолжит работу
fi
```

## скачивание:
```zsh
git clone https://github.com/saniqP/C-Authenticator.git
cd "C-Authenticator"
chmod +x makepkg.sh
./makepkg.sh
```

## macos-`❌`
## linux-`✅` 
## nixos-`❌` 
