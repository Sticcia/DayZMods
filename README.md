# DayZ Mods

DayZ Mod Development Project

## Ideas

- Blood stains
- Queue countdown alarm
- Inventory on stairs
- Better menu
- Infinite bear(?)

## Set up

### First time

- Settings -> Path to the Project Drive -> `D:\Davide Costa\Documents\GitHub\DayZMods`
- Tools -> Extract Game Dat
- Addon Builder -> Addon source directory -> `P:\FirstMod`
- Addon Builder -> Destination directory -> `P:\PackedPbos`
- Addon Builder -> Options -> Path to project folder -> `P:\`

### Every time

- Tools -> Mount Drive P

### In case of project change

- Addon Builder -> Pack
- Copy `P:\PackedPbos\*.pbo` to `P:\FirstModPacked\Addons\`

## Useful commands

### Open workbench

- Navigate to `D:\Program Files (x86)\Steam\steamapps\common\DayZ Tools\Bin\Workbench`
- Run `.\workbenchApp.exe -mod=P:\FirstModPacked`

### Run game

- Navigate to `D:\Program Files (x86)\Steam\steamapps\common\DayZ`
- Run normal `.\DayZDiag_x64.exe -mod=P:\FirstModPacked -mission=P:\singleplayer.ChernarusPlus`
- Run with patching `.\DayZDiag_x64.exe -mod=P:\FirstModPacked -mission=P:\singleplayer.ChernarusPlus -filePatching`

### Link mod to game

- Navigate to `D:\Program Files (x86)\Steam\steamapps\common\DayZ`
- Run `mklink /J FirstMod D:\Davide Costa\Documents\GitHub\DayZMods\FirstMod`