FileName=$1
Xsec=$2
root -l -q GetEventsBkg.C\(\"${FileName}\",\"${Xsec}\"\)
