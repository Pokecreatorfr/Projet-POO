import csv

with open('laposte_hexasmal.csv', newline='') as f:
    reader = csv.reader(f, delimiter=';')
    data = list(reader)

#extraxtion des données voulues (commune et code postal)
    
flist = []
for i in range(len(data)-1):
    flist.append([data[i+1][2],data[i+1][1]])

text = "#pragma once \n\nusing namespace System; \n\nref class Liste_Adresse\n{\npublic:\nprivate:\n  const static array<String^, 2>^ lste_adr = gcnew array<String^, 2>(" + str(len(flist))+", 2)\n    {\n"

for i in range(len(flist)):
    text += '      {"' + str(flist[i][0]) +'","' + str(flist[i][1]) +'"},\n' 
text = text[0:len(text)-2] + "\n    };\n};"

with open('..\Liste_Adresse.h', 'w') as f:
    f.write(text)