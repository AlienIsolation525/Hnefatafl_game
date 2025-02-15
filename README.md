⚙️ Сборка на Windows (CMake + MinGW/MSVC + Qt lib)⚙️

Склонируйте репозиторий
```
git clone https://github.com/AlienIsolation525/Hnefatafl-board-game
cd Hnefatafl-board-game
```
Запустите CMake #(change path to qt path on your computer) exlude conflicted ssl module and compile via "Visual Studio 17 2022"

```
cmake -B build -DQT_SSL=0 -G "Visual Studio 17 2022" -DCMAKE_PREFIX_PATH="D:/Qty/6.8.1/msvc2022_64/lib/cmake"

cmake --build build --config Release  
```
Запустите игру
```
./TaflGame.exe
```
---
---
Simple console game...🎮 Inspired by ancient Icelandic lore and "King's Table - The Legend of Ragnarok" video game.

In hnefatafl a king sits at the centre of a square board, with a number of his men around him. Distributed around the edges of the board are twice their number of enemies. The king must escape from the field of battle, while his enemies try to capture him.

Простая консольная игра... Вдохновлена древне-исландскими сказаниями и "King's Table - The Legend of Ragnarok".

В хнефатафле король сидит в центре квадратной доски. вокруг него было несколько его людей. По краям доски распределено вдвое больше врагов. Король должен бежать с поля битвы, пока враги пытаются его схватить.

Беседа с головой обезглавленного великана не оставила у Одина сомнений о приближающейся гибели сущего, вот он и заделал игруху. Нам остается играть и умудряться умудряться. Готовьте! Люди свои души и тела!


Roadmap	🗺

[] Сетевой режим игры
Разработка многопользовательского режима для игры через локальную сеть или Интернет.
Возможность играть против других игроков в реальном времени, с учётом сетевых задержек и безопасности соединения.

[] Улучшения консольного интерфейса. Иcпользование библиотек Qt Creator

[] Улучшенный формат Battlelog
Переработка формата отчётов о битвах для более детализированного отображения событий в игре.
Возможность записи и просмотра истории боёв, а также сохранение результатов в более удобном и информативном виде.

[] Враг-бот :robot:
