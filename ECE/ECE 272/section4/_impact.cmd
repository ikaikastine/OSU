setMode -bs
setMode -bs
setMode -bs
setMode -bs
setCable -port svf -file "Z:/ECE 272/section4/Section4.svf"
addDevice -p 1 -file "Z:/ECE 272/section4/Section4.svf"
cutDevice -p 1
addDevice -p 1 -file "Z:/ECE 272/section4/section4.jed"
Program -p 1 -e -v 
setMode -bs
setMode -bs
setMode -ss
setMode -sm
setMode -hw140
setMode -spi
setMode -acecf
setMode -acempm
setMode -pff
setMode -bs
saveProjectFile -file "\auto_project.ipf"
setMode -bs
setMode -bs
deleteDevice -position 1
setMode -bs
setMode -ss
setMode -sm
setMode -hw140
setMode -spi
setMode -acecf
setMode -acempm
setMode -pff
