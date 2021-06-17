# Dino
#### Simple program to display dino and play some music on a window using, [SFML](https://www.sfml-dev.org/) library

## Compilation
Dino requires [SFML](https://www.sfml-dev.org/) to run.

Install SFML on debian based distros as such:
```sh
sudo apt install libsfml-dev
```

Compilation:
```sh
g++ dino.cpp -Ofast -o dino -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio
```

## License
GNU GPLv3
