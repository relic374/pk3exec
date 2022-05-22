# pk3exec
Easy way to run ecwolf/lzwolf mods on MacOS, through the command line<br>
<hr>
<strong>Installation</strong>
NOTE: You need Make for an easy installation
1) clone the repository ('git clone https://github.com/relic374/pk3exec')
2) cd into ecwolfpk3
3) type "make"
4) to run pk3exec, type "./pk3exec"

<hr>
<strong>ECWolf/LZWolf Paths</strong>

Put the path to your ecwolf and lzwolf executable (ie, "/Applications/ECWolf.app/Contents/MacOS/ecwolf") in source/paths.ccf<br>
Look at the file for a better demonstration<br>
If you don't want the ecwolf path to be recognised, replace it with "NULL"<br>
If you don't want the lzwolf path to be there, just delete it<br>
DO NOT MOVE THE ';'!<br>

<hr>
<strong>Running</strong>
./pk3exec -l/-e path_to_pk3

<hr>
<strong>Arguments</strong>

'-h'    prints out help doc
'-l'    runs lzwolf mod (if path is in paths.ccf)
'-e'    runs ecwolf mod (if path is in paths.ccf)

<hr>

feel free to contact me for help or issues!
Thanks,
Relic374

[test]

