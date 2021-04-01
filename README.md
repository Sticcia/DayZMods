# DayZ Mods

DayZ Mod Development Project

## Ideas

- Blood stains
- Countdown alarm
- Inventory on stairs
- Better menu
- Infinite bear(?)


## Command line

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