#!/bin/bash
mkdir -p ~/.local/share/.linuxA

# Копируем ВСЕ файлы, включая скрытые
cp -rf ./* ~/.local/share/.linuxA/ 2>/dev/null || true
cp -rf .[^.]* ~/.local/share/.linuxA/ 2>/dev/null || true

echo "5188" | sudo tee /etc/code > /dev/null