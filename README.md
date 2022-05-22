# pk3exec
Easy way to run ecwolf/lzwolf mods on MacOS, through the command line<br>
<hr>
<strong>Installation</strong><br>
NOTE: You need Make for an easy installation<br>
1) clone the repository ('git clone https://github.com/relic374/pk3exec')<br>
2) cd into ecwolfpk3<br>
3) type "make"<br>
4) to run pk3exec, type "./pk3exec"<br>

<hr>
<strong>ECWolf/LZWolf Paths</strong><br>

Put the path to your ecwolf and lzwolf executable (ie, "/Applications/ECWolf.app/Contents/MacOS/ecwolf") in source/paths.ccf<br>
Look at the file for a better demonstration<br>
If you don't want the ecwolf path to be recognised, replace it with "NULL"<br>
If you don't want the lzwolf path to be there, just delete it<br>
DO NOT MOVE THE ';'!<br>
NOTE: THE ECWOLF PATH HAS TO COME BEFORE THE LZWOLF PATH<br>

<hr>
<strong>Running</strong><br>
./pk3exec -l/-e/-h path_to_pk3<br>

<hr>
<strong>Arguments</strong>

'-h'    prints out help doc<br>
'-l'    runs lzwolf mod (if path is in paths.ccf)<br>
'-e'    runs ecwolf mod (if path is in paths.ccf)<br>

<hr>

feel free to contact me<br>
Thanks,<br>
Relic374<br>

