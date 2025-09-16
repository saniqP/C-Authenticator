# C-Authenticator

ваш код хранится: ``/etc/code``

ваш стандартный код: `5188`

ваш пароль: имя вашей системы|код

для авто запуска в конфигурационный файл вошего shell(bash,zsh) добавте:

```zsh
  if [ -z "$KITTY_AUTH_DONE" ]; then
    export KITTY_AUTH_DONE=1
    /home/sudosania/.local/share/.linuxA/main
    # Если программа завершится - zsh продолжит работу
fi

```
