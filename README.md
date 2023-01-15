# ReadyOrNotModLoader
Load and spawn Blueprints class from pak file

## Usage
1. Extract the .rar file in game binaries/Win64 directory (mine is steamapps\common\Ready Or Not\ReadyOrNot\Binaries\Win64)
2. Create a folder in the same directory as ReadyOrNot .pak files name it "PakMod" and put your mod there
3. You have to edit "UE4PakLoader.ini" if the game has updates or the offsets changes otherwise it'll crash 
4. Launch ReadyOrNotModLoader.exe

## Notes
1. You must have PostBeginPlay event created in your ModActor Blueprint
2. For more info [Main Repo](https://github.com/patrickBakin/UE4BPLoader)
